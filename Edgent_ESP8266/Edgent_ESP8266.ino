
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLCdZzLHje"
#define BLYNK_DEVICE_NAME "DKP"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

BLYNK_WRITE(V5){
  if (param.asInt() == HIGH){
    digitalWrite(16,LOW);
  }
  else{
    digitalWrite(16,HIGH);
  }
}

BLYNK_WRITE(V3){
  if (param.asInt() == HIGH){
    digitalWrite(5,LOW);
  }
  else{
    digitalWrite(5,HIGH);
  }
}

BLYNK_WRITE(V4){

}

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(16,OUTPUT);
  pinMode(5,OUTPUT);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
