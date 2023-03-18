//libraries
#include "WiFi.h"
#include <HTTPClient.h>
#include <Arduino_JSON.h>

//for wifi and server setup 
const char* ssid = "myRouter";  
const char* password =  "myPassword";

//IP of remote server
const char* serverName = "server IP";

// Update interval time set to 2 seconds
const long interval = 2000;
unsigned long previousTime = 0;

String outputsState;

//single relay
int relayPin = 26

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime = millis(); //get current time

  if(currentTime - previousTime >= interval) {
    if(WiFi.status() == WL_CONNECTED){
      outputsState = httpGETRequest(serverName); //send get request to server
      JSONVar obj = JSON.parse(outputsState); //parse the recieved obj in JSON


      //checking is the recieved obj is valid
      if(JSON.typeof(obj) == "undefined"){
        Serial.println("invalid obj")
        return;
      }

      //parsing through all the key value pairs of the recieved JSON file
      JSOnVar keys = obj.keys();

      for(int i = 0; i<keys.length(); i++){
        val = obj[keys[i]] //get the value associated with the key
        pinMode(atoi(keys[i]), atoi(val));
      }

      //update time
      previousTime = currentTime;
    }
    else{
      Serial.println("WiFi Disconnected")
    }
  }
}

String httpGETRequest(const char* serverName) {
  WiFiClient client;
  HTTPClient http;
    
  // IP address with port
  http.begin(client, serverName);
  
  // Send HTTP GET request
  int httpResponseCode = http.GET();
  
  String payload = "{}"; 
  
  if (httpResponseCode>0) {
    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    payload = http.getString();
  }
  else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
  }
  // Free resources
  http.end();

  return payload;
}
