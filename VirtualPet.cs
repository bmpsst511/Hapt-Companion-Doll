using UnityEngine;  
using System.Collections;  
//引入库  
using System.Net;  
using System.Net.Sockets;  
using System.Text;  
using System.Threading;  
  
public class test:MonoBehaviour  
{  
    //以下默认都是私有的成员  
    Socket socket; //目标socket  
    EndPoint clientEnd; //客户端  
    IPEndPoint ipEnd; //侦听端口  
    public float RotateX, RotateY, RotateZ;
    static public float TouchVal;
    string recvStr; //接收的字符串  
    string sendStr; //发送的字符串  
    byte[] recvData=new byte[1024]; //接收的数据，必须为字节  
    byte[] sendData=new byte[1024]; //发送的数据，必须为字节  
    int recvLen; //接收的数据长度  
    Thread connectThread; //连接线程  
    float fsr;
	int speed = 5;
	int maxAngle = 270;
	public Transform Body;
	public Transform Head;
     
    //初始化  
    void InitSocket()  
    {  
        //定义侦听端口,侦听任何IP  
        ipEnd=new IPEndPoint(IPAddress.Any,30);  
        //定义套接字类型,在主线程中定义  
        socket=new Socket(AddressFamily.InterNetwork,SocketType.Dgram,ProtocolType.Udp);  
        //服务端需要绑定ip  
        socket.Bind(ipEnd);  
        //定义客户端  
        IPEndPoint sender=new IPEndPoint(IPAddress.Any,30);  
        clientEnd=(EndPoint)sender;  
        print("waiting for UDP dgram");  
  
        //开启一个线程连接，必须的，否则主线程卡死  
        connectThread=new Thread(new ThreadStart(SocketReceive));  
        connectThread.Start();  
    }  

  
    //服务器接收  
    void SocketReceive()  
    {  
        //进入接收循环  
        while(true)  
        {  
            //对data清零  
            recvData=new byte[1024];  
            //获取客户端，获取客户端数据，用引用给客户端赋值  
            recvLen=socket.ReceiveFrom(recvData,ref clientEnd);  
            //print("message from: "+clientEnd.ToString()); //打印客户端信息  
            //输出接收到的数据  
            recvStr=Encoding.ASCII.GetString(recvData,0,recvLen);  
            //print(recvStr); 
            char[] splitChar = { ' ', ',', ':', '\t', ';' };
            string[] dataRaw = recvStr.Split(splitChar);
            RotateX = float.Parse(dataRaw[0]);
            RotateY = float.Parse(dataRaw[1]);
            RotateZ = float.Parse(dataRaw[2]);
            TouchVal = float.Parse(dataRaw[3]);
        }  
    }  
  
    //连接关闭  
    void SocketQuit()  
    {  
        //关闭线程  
        if(connectThread!=null)  
        {  
            connectThread.Interrupt();  
            connectThread.Abort();  
        }  
        //最后关闭socket  
        if(socket!=null)  
            socket.Close();  
        print("disconnect");  
    }  
  
    // Use this for initialization  
    void Start()  
    {  
        InitSocket(); //在这里初始化server  
    }  
  
  
    // Update is called once per frame  
    void FixedUpdate()  
    {  
        transform.rotation = Quaternion.Euler(-RotateZ,RotateX,-RotateY);
        fsr = test.TouchVal;
		if(fsr > 50){
       var target = Quaternion.Euler(0, maxAngle, 0);
        Head.transform.localRotation = Quaternion.Slerp(Head.transform.localRotation, target, Time.deltaTime * speed);
  }
        else{
        var target = Quaternion.Euler(0, 0, 0);
        Head.transform.localRotation = Quaternion.Slerp(Head.transform.localRotation, target, Time.deltaTime * speed);
  }
    }  
  
    void OnApplicationQuit()  
    {  
        SocketQuit();  
    }  
}  
