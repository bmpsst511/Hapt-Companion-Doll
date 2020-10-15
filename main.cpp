#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiUDP.h>
#include <Wire.h>

#define USE_ARDUINO_INTERRUPTS false
#include <PulseSensorPlayground.h>

const int OUTPUT_TYPE = SERIAL_PLOTTER;

const int PULSE_INPUT = A0;
const int PULSE_BLINK = D4;  // Pin 13 is the on-board LED
const int PULSE_FADE = 5;
const int THRESHOLD = 540;   // Adjust this number to avoid noise when idle
/*UDP網路設定*/
const char* ssid ="TP-LINK_A7366A";/*"iPhone"*/
const char* password = "03487150";/*"19940625"*/
const char ip[]="192.168.0.107";
WiFiServer server(27);
WiFiUDP Client;
/*UDP網路設定*/

byte samplesUntilReport;
const byte SAMPLES_PER_SERIAL_SAMPLE = 10;
String BPM;
/*
   All the PulseSensor Playground functions.
*/
PulseSensorPlayground pulseSensor;
int loop_count = 0;
void connectWifi() {
  /*網路設定*/
  WiFi.mode(WIFI_STA);
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
  // Start the UDP client
  Client.begin(27);
 /*網路設定*/
}
void setup() {
  
  Serial.begin(115200);
  connectWifi();
  // Configure the PulseSensor manager.
  pulseSensor.analogInput(PULSE_INPUT);
  pulseSensor.blinkOnPulse(PULSE_BLINK);
  pulseSensor.fadeOnPulse(PULSE_FADE);

  pulseSensor.setSerial(Serial);
  pulseSensor.setOutputType(OUTPUT_TYPE);
  pulseSensor.setThreshold(THRESHOLD);
  // Skip the first SAMPLES_PER_SERIAL_SAMPLE in the loop().
  samplesUntilReport = SAMPLES_PER_SERIAL_SAMPLE;
  
  // Now that everything is ready, start reading the PulseSensor signal.
  if (!pulseSensor.begin()) {
    /*
       PulseSensor initialization failed,
       likely because our Arduino platform interrupts
       aren't supported yet.
       If your Sketch hangs here, try changing USE_PS_INTERRUPT to false.
    */
    for(;;) {
      // Flash the led to show things didn't work.
      digitalWrite(PULSE_BLINK, LOW);
      delay(50);
      digitalWrite(PULSE_BLINK, HIGH);
      delay(50);
    }
  }
}

void loop() {
  loop_count ++;
  if(loop_count <= 500000 ){ //大約８秒傳送一次值給unity 因為當nodemcu A0始終讀值時 會造成nodemcu網路連線斷線
  if (pulseSensor.sawNewSample()) 
    {
     BPM = (int)pulseSensor.getBeatsPerMinute();
     Serial.println(BPM);
    }
  }
    else{
      if(WiFi.status() != WL_CONNECTED) {
        Serial.print("disconnect!");
        connectWifi();
      }
      else {
        //Serial.println("bpm:");
        //Serial.println(BPM);
      Client.beginPacket(ip,27);
      Client.println(BPM);
      Client.endPacket();
      loop_count = 0;
      }
    }
    /*******
      Here is a good place to add code that could take up
      to a millisecond or so to run.
    *******/
  /******
     Don't add code here, because it could slow the sampling
     from the PulseSensor.
  ******/
}