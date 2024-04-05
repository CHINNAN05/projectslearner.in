// Arduino Uno LED Blinking Program

// Include the Arduino library
#include <Arduino.h>

// Define the pin number for the LED
#define LED_PIN 13

// Setup function runs once when you press reset or power the board
void setup() {
  // Initialize the digital pin as an output
  pinMode(LED_PIN, OUTPUT);
}

// Loop function runs repeatedly as long as the board has power
void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN, HIGH);
  
  // Wait for a second
  delay(1000);
  
  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN, LOW);
  
  // Wait for a second
  delay(1000);
}