
// Lamp activation with MQTT Dash
// By: Eddie Yadav
// Date: 05/10/18


#include <ESP8266WiFi.h>
#include <PubSubClient.h>

#define DEBUG

#define light D4 // output pin for the Lampada L1

// WIFI network information
const char * ssid = "Rayeddie"; // SSID of WIFI network
const char * password = "baby@netjio335"; // wifi network password

// MQTT broker information - Check information generated by CloudMQTT
const char * mqttServer = "postman.cloudmqtt.com"; // server
const char * mqttUser = "gfwpwres"; // user
const char * mqttPassword = "xcyedsLPu7P1"; // password
const int mqttPort =14569; // port
const char * mqttTopicSub = "Led"; // topic to be signed

 
WiFiClient espClient;
PubSubClient client (espClient);
 
void setup () {
 
  Serial.begin (115200);
  pinMode (light, OUTPUT);
 
  WiFi.begin (ssid, password);
 
  while (WiFi.status ()!= WL_CONNECTED) {
    delay (500);
    #ifdef DEBUG
    Serial.println ("Connecting to WiFi ..");
    #endif
  }
  #ifdef DEBUG
  Serial.println ("Connected on the WiFi network");
  #endif
 
  client.setServer (mqttServer, mqttPort);
  client.setCallback (callback);
 
  while (! client.connected ()) {
    #ifdef DEBUG
    Serial.println ("Connecting to the MQTT Broker ...");
    #endif
 
    if (client.connect ("ESP8266Client", mqttUser, mqttPassword)) {
      #ifdef DEBUG
      Serial.println ("Connected");
      #endif
 
    } else {
      #ifdef DEBUG
      Serial.print ("state failure");
      Serial.print (client.state ());
      #endif
      delay (2000);
 
    }
  }

  // subscribe to the topic
  client.subscribe (mqttTopicSub);
 
}

void callback (char * topic, byte * payload, unsigned int length) {

  // store received msg in a sring
  payload [length] = '\0';
  String strMSG = String ((char *) payload);

  #ifdef DEBUG
  Serial.print ("Message arrived from topic:");
  Serial.println (topic);
  Serial.print ("Message:");
  Serial.print (strMSG);
  Serial.println ();
  Serial.println ("-----------------------");
  #endif

  // trigger output according to msg received
  if (strMSG == "0") {// if msg "1"
     digitalWrite (light, LOW); // puts output in LOW to switch on the Lamp -> the used RELE module has inverted drive. If necessary adjust for your module
  } else if (strMSG == "1") {// if msg "0"
     digitalWrite (light, HIGH); // sets output to HIGH to turn off the Lamp -> the used RELE module has inverted drive. If necessary adjust for your module
  }
 
}

// function to reconnect to served MQTT
void reconect () {
  // While offline
  while (! client.connected ()) {
    #ifdef DEBUG
    Serial.print ("Attempting to connect to the MQTT server");
    #endif
     
    bool connected = strlen (mqttUser)> 0?
                     client.connect ("ESP8266Client", mqttUser, mqttPassword):
                     client.connect ("ESP8266Client");

    if (connected) {
      #ifdef DEBUG
      Serial.println ("Connected!");
      #endif
      // subscribe to the topic
      client.subscribe (mqttTopicSub, 1); // quality level: QoS 1
    } else {
      #ifdef DEBUG
      Serial.println ("Failed to connect.Code:");
      Serial.println( String(client.state()).c_str());
      Serial.println ("Retrying in 10s");
      #endif
      // Wait 10 seconds
      delay (10000);
    }
  }
}
 
void loop () {
  if (! client.connected ()) {
    reconect ();
  }
  client.loop ();
}
