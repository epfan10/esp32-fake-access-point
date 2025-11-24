#include <WiFi.h>

const char* ssid = "ESP32-Access-Point"; // SSID for the Access Points
const char* password = "123456789"; // Password for the Access Point

void setup() {
  Serial.begin(115200);
  
  // Starting Access Point
  WiFi.softAP(ssid, password);
  
  Serial.println("Access Point gestartet");
  Serial.print("IP-Adresse: ");
  Serial.println(WiFi.softAPIP()); // Shows the IP-Adress of the AP
}

void loop() {
  // This is where your logic for the web interface or other functions could go
}
