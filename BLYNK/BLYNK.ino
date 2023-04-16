#define BLYNK_TEMPLATE_ID "TMPLU2IYigJb"
#define BLYNK_TEMPLATE_NAME "First Project"
#define BLYNK_AUTH_TOKEN "Enter your Auth Token"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "SSID";//Enter your WIFI name
char pass[] = "PASSWORD";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D0, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}#define BLYNK_TEMPLATE_ID "TMPLU2IYigJb"
#define BLYNK_TEMPLATE_NAME "First Project"
#define BLYNK_AUTH_TOKEN "3Wnr2ACDl0NuDO3E-ONSoGDa2cZPh9Yk"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "sidd";//Enter your WIFI name
char pass[] = "12345678";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D0, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}#define BLYNK_TEMPLATE_ID "TMPLU2IYigJb"
#define BLYNK_TEMPLATE_NAME "First Project"
#define BLYNK_AUTH_TOKEN "3Wnr2ACDl0NuDO3E-ONSoGDa2cZPh9Yk"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "sidd";//Enter your WIFI name
char pass[] = "12345678";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D0, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}