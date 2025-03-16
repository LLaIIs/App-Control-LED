#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3);//Pinos D2 e D3 para comunicação Bluetooth (HC-05)
const int ledPin = 13; //LED no pino 13 

void setup() {
  
  //Inicializa a comunicação serial com bluetooth
  BTSerial.begin(9600); 
  Serial.begin(9600); //Inicializa comunicação serial entre  o computador e p arduino

  pinMode(ledPin, OUTPUT); //Define o pino do LED como saída
}

void loop() {
  // put your main code here, to run repeatedly:
  if(BTSerial.available()){
    char command = BTSerial.read(); //Lê o comando enviado pelo Bluetooth (Binário)
    if(command == '1'){
      digitalWrite(ledPin, HIGH);
      Serial.println("LED Ligado");
    }
    else if (command == '0'){
      digitalWrite(ledPin, LOW);
      Serial.println("LED Desligado")
    }
  }
}
