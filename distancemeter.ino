#include <LiquidCrystal.h>                                     
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
const int trigPin = 12; 
const int echoPin = 11; 
long duration;
int distance_in_Cm;
                                                                                                            
void setup() {  
lcd.begin(16,2);                                                   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() { 
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance_in_Cm= (duration/2)*0.034;  

lcd.setCursor(0,1);
lcd.print("Distance:");
lcd.print(distance_in_Cm);
delay(10);
}
