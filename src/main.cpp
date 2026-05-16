#define BLYNK_TEMPLATE_ID "TMPL6JiQkHLyN"
#define BLYNK_TEMPLATE_NAME "Traffic Light 2207030"
#define BLYNK_AUTH_TOKEN "BO1bEnstdF5vmPnALgcmKK3qjoMbn4Lu"

#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// LED pins (Traffic Light)
int RED = 12;
int YELLOW = 14;
int GREEN = 27;

bool autoMode = false;

// ---------- BLYNK VIRTUAL PINS ----------

// V0 → Red LED control
BLYNK_WRITE(V0) {
  digitalWrite(RED, param.asInt());
}

// V1 → Yellow LED control
BLYNK_WRITE(V1) {
  digitalWrite(YELLOW, param.asInt());
}

// V2 → Green LED control
BLYNK_WRITE(V2) {
  digitalWrite(GREEN, param.asInt());
}

// V3 → Auto mode ON/OFF
BLYNK_WRITE(V3) {
  autoMode = param.asInt();
}

// ---------- SETUP ----------
void setup() {
  Serial.begin(115200);

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  // Connect to Blynk cloud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  delay(2000);
}

// ---------- LOOP ----------
void loop() {
  Blynk.run();

  // If Auto Mode is ON
  if (autoMode) {

    // GREEN ON
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, LOW);
    delay(2000);

    // YELLOW ON
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(RED, LOW);
    delay(1000);

    // RED ON
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);
    delay(2000);
  }
}