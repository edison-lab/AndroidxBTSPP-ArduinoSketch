#include <WiFi.h>

WiFiServer server(3000);

void setup() {
  
    pinMode(9,OUTPUT);
  
    server.begin();
    Serial.print("Connected to TCP. My address:");
    IPAddress myAddress(127,0,0,1);
    Serial.println(myAddress);
    
}


void loop() {  
   
    WiFiClient client = server.available();
   
    if (client.available() > 0) {
      
      char c = client.read();
    
      switch(c){
        case 'c':
           tone(9,1047,300);
           break;
        case 'd':
           tone(9,1175,300);
           break;
        case 'e':
           tone(9,1319,300);
           break;
        case 'f':
           tone(9,1397,300);
           break;
        case 'g':
           tone(9,1568,300);
           break;
           
      }
   }
}

   

