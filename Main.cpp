#include <LiquidCrystal.h>
LiquidCrystal lcd(5, 6, 8, 9, 10, 11);

// Pin variables
int redled = 3;
int greenled = 2;
int buzzer = 4;
int sensor = A0;
int sensorThresh = 400;

// Pines del motor CC
int motorPin1 = 12;
int motorPin2 = 13;

void setup()
{
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensor, INPUT);

  // Configurar pines del motor CC como salida
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  int analogValue = analogRead(sensor);
  Serial.print(analogValue);

  // Condición de concentración de gas
  if (analogValue > sensorThresh)
  {
    // Activar LEDs y buzzer
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    tone(buzzer, 1000, 10000);

    // Activar motor CC
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);

    lcd.clear();

    // Imprimir en LCD
    lcd.setCursor(0, 1);
    lcd.print("ALERTA");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("EVACUAR");
    delay(1000);
  }
  else
  {
    // Desactivar LEDs, buzzer y motor CC
    digitalWrite(greenled, HIGH);
    digitalWrite(redled, LOW);
    noTone(buzzer);

    // Desactivar motor CC
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);

    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("ESTADO: NORMAL");
    delay(1000);
  }
}
