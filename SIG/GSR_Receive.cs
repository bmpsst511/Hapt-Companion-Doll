using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//引入庫  
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
public class GSR_Receive : MonoBehaviour
{
    //以下默認都是私有的成員  
    Socket socket; //目標socket  
    EndPoint clientEnd; //客户端  
    IPEndPoint ipEnd; //偵聽端口  
    public string GSR;
    public static float gsr_value;
    string recvStr; //接收的字符串  
    string sendStr; //發送的字符串
    byte[] recvData = new byte[1024]; //接收的數據，必須為字節  
    byte[] sendData = new byte[1024]; //發送的數據，必須為字節
    int recvLen; //接收的數據長度  
    Thread connectThread; //連接線程

    void InitSocket()
    {
        //定義偵聽端口,偵聽任何IP  
        ipEnd=new IPEndPoint(IPAddress.Any,28); 
        //定義套接字類型,在主線程中定義 
        socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
        //服務端需要綁定ip  
        socket.Bind(ipEnd);
        //定義客戶端
        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        clientEnd = (EndPoint)sender;
        print("waiting for UDP dgram");
        //開啟一個線程連接，必須的，否則主線程卡死 
        connectThread = new Thread(new ThreadStart(SocketReceive));
        connectThread.Start();
    }

    void SocketSend(string sendStr)
    {
        //清空傳送快取
        sendData=new byte[1024];
        //資料型別轉換
        sendData=Encoding.ASCII.GetBytes(sendStr);
        //傳送給指定服務端
        socket.SendTo(sendData,sendData.Length,SocketFlags.None,ipEnd);
    }

    //服務器接收  
    void SocketReceive()
    {
        //進入接收循環
        while (true)
        {
            //對data清零  
            recvData = new byte[1024];
            //獲取客戶端，獲取客戶端數據，用引用給客戶端賦值
            //print("waiting for receive data");
            try {
                recvLen = socket.ReceiveFrom(recvData, ref clientEnd);
                //print("message from: " + clientEnd.ToString()); //列印客户端信息  
            }
            catch (SocketException e) {
                // We expect connection attempt to time out if we cant find any server on this port and nic. Just continue with the next
                if (e.SocketErrorCode == SocketError.TimedOut)
                {
                    continue;
                }
            }
            //輸出接收到的數據 
            recvStr = Encoding.ASCII.GetString(recvData, 0, recvLen);
            //print(recvStr); //print the BPM value.
            char[] splitChar = { ' ', ',', ':', '\t', ';' };
            string[] dataRaw = recvStr.Split(splitChar);
            GSR = recvStr;
            gsr_value = int.Parse(GSR);
            //print(GSR);
        }
    }

    //連接關閉
    void SocketQuit()
    {
        //關閉線程 
        if (connectThread != null)
        {
            connectThread.Interrupt();
            connectThread.Abort();
        }
        //最後關閉socket
        if (socket != null)
            socket.Close();
        print("disconnect");
    }

    // Start is called before the first frame update
    void Start()
    {
        InitSocket();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnApplicationQuit()
    {
        SocketQuit();
    }

}
