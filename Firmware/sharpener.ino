#include <Arduino.h>
#include <HardwareSerial.h>
#include <DFRobotDFPlayerMini.h>
#include "config.h"

HardwareSerial dfSerial(1);
DFRobotDFPlayerMini player;

bool motorRunning = false;
bool lastButtonState = HIGH;
unsigned long lastDebounce = 0;

void motorOn() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, MOTOR_SPEED);
}

void motorOff() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 0);
}

void setup() {
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);

  dfSerial.begin(9600, SERIAL_8N1, DF_RX, DF_TX);
  player.begin(dfSerial);
  player.volume(25);

  motorOff();
}

void loop() {
  bool buttonState = digitalRead(BUTTON);

  if (buttonState != lastButtonState) {
    lastDebounce = millis();
  }

  if (millis() - lastDebounce > DEBOUNCE_MS) {
    if (buttonState == LOW && !motorRunning) {
      motorOn();
      player.play(1);
      motorRunning = true;
    }

    if (buttonState == HIGH && motorRunning) {
      motorOff();
      player.stop();
      motorRunning = false;
    }
  }

  lastButtonState = buttonState;
}
