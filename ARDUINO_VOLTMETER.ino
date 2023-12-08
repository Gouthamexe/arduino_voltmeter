#include<LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 8, 9, 10, 11);
float vol=0;
int input=0;
void setup(){
 
lcd.begin(16, 2); 

lcd.print("S4 EEE ");

delay(500);


lcd.print("By Goutham S");


delay(500);
lcd.clear();
lcd.print("By Jyothika");


delay(500);
lcd.clear();
lcd.print("By Dhanupriya");


delay(500);
lcd.clear();
lcd.print("By Josmi Thresya");

lcd.clear();

delay(500);

lcd.clear();

lcd.print("Volt Meter");
pinMode(A0, INPUT);
  Serial.begin(9600);
 
}

void loop()

{ 
 
  input = analogRead(A0);
 vol = (input * 5.0) / 1024.0;
lcd.setCursor(0,1);

lcd.print("Voltage is  ");
  delay(100);
  lcd.print(vol);

  delay(1000);
//  lcd.clear();

}
