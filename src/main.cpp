#include <Arduino.h>

#define Pot 34
#define LED 4
#define Button 0
#define PWM 0
#define res 3

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
  Serial.begin(115200);
  analogReadResolution(res);
  ledcSetup(PWM, 300, res);
  ledcAttachPin(LED, PWM);
}

void loop() 
{
  int valor_pot = analogRead(Pot);
  int volt_pot = analogReadMilliVolts(Pot);
  ledcWrite(0, 8);
  Serial.printf("Numerico: %d | Voltaje: %d\n", valor_pot, volt_pot);
  delay(400);
  lodwwwwwwwwwwwwwwwwwwww
}

