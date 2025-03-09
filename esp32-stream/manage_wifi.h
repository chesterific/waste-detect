
void setup() {
     //  wifi manager
  Serial.print("WiFi manager open . . ");
  WiFiManager wm;
  wm.resetSettings();
  bool res;
  res = wm.autoConnect("Ryuzaki-Connect","admin123"); // password protected ap
  if(!res) {
        Serial.println("Failed to connect");
        // ESP.restart();
    } 
}

void loop() {
    // Your loop logic
}
