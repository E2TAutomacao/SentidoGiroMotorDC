#include <Wire.h>
#include "Adafruit_MCP23017.h"
Adafruit_MCP23017 mcp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mcp.begin();
  mcp.pinMode(1, OUTPUT);
  mcp.pinMode(2, OUTPUT);
  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(2, LOW);
  pinMode(2, INPUT); 
  pinMode(3, INPUT);
}

void loop() {

  Serial.print(digitalRead(3));   // COMENTE ESTE TRECHO PARA FACILITAR O ACIONAMENTO DOS RELÉS
  Serial.print (" : ");           // COMENTE ESTE TRECHO PARA FACILITAR O ACIONAMENTO DOS RELÉS  
  Serial.println(digitalRead(2)); // COMENTE ESTE TRECHO PARA FACILITAR O ACIONAMENTO DOS RELÉS

  //mcp.digitalWrite(1, 1-digitalRead(2)); // PARA ACIONAR OS RELÉS, CONFORME A LEITURA DOS PINOS 
  //mcp.digitalWrite(2, 1-digitalRead(3)); // PARA ACIONAR OS RELÉS, CONFORME A LEITURA DOS PINOS
}
