// -----------------------------------------------
// Bluetooth
// -----------------------------------------------
#include <SoftwareSerial.h>
 
SoftwareSerial BT(10, 11);
// creates a "virtual" serial port/UART
// connect BT module TX to D10
// connect BT module RX to D11
// connect BT Vcc to 5V, GND to GND

// -----------------------------------------------
// Reles (Electrovalvulas)
// -----------------------------------------------
int pinElectrovalvula1=7;
int estadoEV1;


void setup()
{
// -----------------------------------------------
// Reles (Electrovalvulas)
// -----------------------------------------------
  Serial.begin(9600);

  // Inicializamos el modulo de EVs
  pinMode(pinElectrovalvula1,OUTPUT);
  estadoEV1=1; //cerrada
  digitalWrite(pinElectrovalvula1,estadoEV1);
  // set digital pin to control as an output

// -----------------------------------------------
// Bluetooth
// -----------------------------------------------
// set the data rate for the SoftwareSerial port
  BT.begin(9600);
  Serial.begin(9600);
  // Send test message to other device
}

char data = '0';
char dataAnterior = data;

void loop()
{
  if( BT.available() ){ 
    data = BT.read();
    Serial.println(data);
    if(data == '1') digitalWrite(7, HIGH);
    if(data == '0') digitalWrite(7, LOW);
  }
}

void accionarValvula(){
  dataAnterior = data;
  estadoEV1=!estadoEV1;
  digitalWrite(pinElectrovalvula1,estadoEV1);
}
