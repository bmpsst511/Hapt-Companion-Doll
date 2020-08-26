#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <Wire.h>
#include <WiFiUDP.h>
#include <Servo.h> 
#include <Adafruit_ADS1015.h>

Adafruit_ADS1115 ads;  /* Use this for the 16-bit version */
#include <Adafruit_NeoPixel.h>
#define PIN D5  //接腳
#define MAX_LED 35  //LED的數量
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel( MAX_LED, PIN, NEO_GRB + NEO_KHZ800 );  //NEO_GRB(顯示顏色是RGB)；NEO_RGB(顯示顏色是GRB)
Servo myservo;
/***** Setting Wi-Fi account and password and internet port *****/
        const char* ssid =/*"My ASUS";*/"LeeiPhone";
        const char* password =/*"27b2d009cfc7";*/"hnwl0618";
        const char ip[]="172.20.10.6";
        const int port =27;
        WiFiServer server(port);
        WiFiUDP Client;
/***** Setting Wi-Fi account and password and internet port *****/

/****millis()*****/
int  updateInterval;      // interval between updates
unsigned long lastUpdate; // last update of position
int interval =35;
String Fsrvalue1,Fsrvalue2;
int16_t adc0, adc1, adc2, adc3;
/****millis()*****/

void setup()
{ 
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);//WIFI_STA : Client 模式
  WiFi.begin(ssid,password);
  Serial.println("Connecting");
    while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  Serial.print("Connected to "); 
  Serial.println(ssid);
  Serial.print("IP Address: "); 
  Serial.println(WiFi.localIP());
 
 /*Start the UDP client*/
  Client.begin(port);
  strip2.begin();  // 初始化库
  strip2.show(); // Initialize all pixels to 'off' // 发送数据，默认每个点的颜色为0，所以初始的每个点都是不亮的
      Wire.begin(D2,D1);
    ads.begin();
    myservo.attach(D8);
  delay(1000);
  
}
void loop()
{
  adc0 = ads.readADC_SingleEnded(0)/100;
  adc3 = ads.readADC_SingleEnded(3)/100;
  Fsrvalue1 = adc0;
  Fsrvalue2 = adc3;
  /****Angry*****/
      if(adc3>30 && adc3<70)
    {
      //turnoff();
      Redlight();
      myservo.write(adc3);
//      for (int i=0;i<50;i+=1)
//      {
//        myservo.write(i);
//        delay(2);
//      }
     }
  /****Angry*****/
  /****Sad*****/
       if(adc3>70 && adc3<130)
    {
      //turnoff();
      Greenlight();
      myservo.write(adc3);
//            for (int i=0;i<80;i+=2)
//      {
//        myservo.write(i);
//        delay(2);
//      }
    }
    /****Sad*****/
    /****Disgust*****/
       if(adc3>130 && adc3<200)
    {
      //turnoff();
      Bluelight();
      myservo.write(adc3);
//            for (int i=0;i<100;i+=5)
//      {
//        myservo.write(i);
//        delay(2);
//      }
    }
    /****Disgust*****/

       if(adc0>30 && adc0<70)
    {
      //turnoff();
      yellowlight();
      myservo.write(adc0);
    }

       if(adc0>70 && adc0<130)
    {
      //turnoff();
      purlight();
      myservo.write(adc0);
    }    

       if(adc0>130 && adc0<200)
    {
      //turnoff();
      dglight();
      myservo.write(adc0);
    }
    
        if(adc3<30 && adc0<30)
     {
      pinklight();
      myservo.write(0);
     }



  Serial.print(adc0);
  Serial.print(";");
  Serial.println(adc3);
  Client.beginPacket(ip,port);
  Client.println(Fsrvalue1+";"+Fsrvalue2);
  Client.endPacket();
  delay(300);
}
