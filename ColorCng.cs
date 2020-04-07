using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using System.Net.Sockets;
using System.Net;
using System.Text;

public class ColorCng : MonoBehaviour {
	public Material matofobj;
	public Material[] materials;
	public Renderer render;
    public GameObject HeadUnity;
    
    public float speed=5;
    Socket socket; //target socket  
    EndPoint clientEnd; //client end  
    IPEndPoint ipEnd; //listening port  
    string recvStr; //receive string
    string sendStr; //send string
    byte[] recvData=new byte[1024]; //receive data the type need to be char or string  
    byte[] sendData=new byte[1024]; //send data the type need to be char or string  
    int recvLen; //the length of receive data 
    /*** define label of force sensor***/
    static public  float fsrval;
    static public  float fsrval2;
    /*** define label of force sensor***/

    /*** define the animation label of model***/
    public Animator Anim;
    public AnimatorStateInfo BS;
    public int Grab = Animator.StringToHash("Base Layer.still");
    public int Stay = Animator.StringToHash("Base Layer.angry");
    public int Stay1 = Animator.StringToHash("Base Layer.sad");
    public int Stay2 = Animator.StringToHash("Base Layer.disgust");
    /*** define the animation label of model***/

    Thread connectThread; //create a new thread
	
void InitSocket()  //Initialize socket
    {  
        //define the listenning IP and Port  
        ipEnd=new IPEndPoint(IPAddress.Any,27);  
        //define the Socket Type and Protocol  
        socket=new Socket(AddressFamily.InterNetwork,SocketType.Dgram,ProtocolType.Udp);  
        //server end need to bind the ip  
        socket.Bind(ipEnd);  
        /***define the client end***/
        IPEndPoint sender=new IPEndPoint(IPAddress.Parse("172.20.10.6"),27);  
        clientEnd=(EndPoint)sender;  
        print("waiting for UDP dgram");
        /***define the client end***/

        /***Have to start a new thread connect the wifi, otherwise all application will crush***/  
        connectThread = new Thread(new ThreadStart(SocketReceive));  
        connectThread.Start();
        /***Have to start a new thread connect the wifi, otherwise all application will crush***/
    }

    /* void SocketSend(string sendStr)
     {
         //清空发送缓存
         sendData=new byte[1024];
         //数据类型转换
         sendData=Encoding.ASCII.GetBytes(sendStr);
         //发送给指定客户端
         socket.SendTo(sendData,sendData.Length,SocketFlags.None,clientEnd);
     }*/


    void SocketReceive()  
    {  
        //进入接收循环  
        while(true)  
        {    
            recvData=new byte[1024];  //clean previous data  
            recvLen =socket.ReceiveFrom(recvData,ref clientEnd); //Get the data from client end  
            //print("message from: "+clientEnd.ToString()); //print client message  
            recvStr =Encoding.ASCII.GetString(recvData,0,recvLen);  //convert the type of receive data
           // print(recvStr); 
            char[] splitChar = { ' ', ',', ':', '\t', ';' }; //cut data by dot or other char
            string[] dataRaw = recvStr.Split(splitChar);
            fsrval = float.Parse(dataRaw[0]);
            fsrval2 = float.Parse(dataRaw[1]);            
        }  
    }  

	void SocketQuit()  
    {  
        //close thread  
        if(connectThread!=null)  
        {  
            connectThread.Interrupt();  
            connectThread.Abort();  
        }  
        //then close socket  
        if(socket!=null)  
            socket.Close();  
        print("disconnect");  
    } 

	// Use this for initialization
	void Start () 
	{
		InitSocket(); //initialize server
	}
	
	// Update is called once per frame
	void Update () 
	{

	if(fsrval>30 && fsrval<70)
	{
        Anim.SetBool("ang",true);
        Anim.SetBool("sad",false);
        Anim.SetBool("disgust",false);
        render.sharedMaterial = materials[0];
        
	}
     if (fsrval>70 && fsrval<130)
    {
        Anim.SetBool("ang",false);
        Anim.SetBool("sad",true);
        Anim.SetBool("disgust",false);
        render.sharedMaterial = materials[3];
    }
    if (fsrval>130 && fsrval<300)
    {
        Anim.SetBool("ang",false);
        Anim.SetBool("sad",false);
        Anim.SetBool("disgust",true);
        render.sharedMaterial = materials[2];
     
        
    }
    if(fsrval<5)
    {
        Anim.SetBool("ang",false);
        Anim.SetBool("sad",false);
        Anim.SetBool("disgust",false);
        render.sharedMaterial = materials[1];
        
        }
	}

	void OnApplicationQuit()  
    {  
        SocketQuit();  
    } 

}
