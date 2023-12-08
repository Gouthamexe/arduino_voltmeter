// Author :  Goutham S 
// Github : https://github.com/Gouthamexe 
// Time = 9:12:2023 DD:MM:YYYY


#include<LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 8, 9, 10, 11);
float vol=0;
int input=0;
void setup(){
 
lcd.begin(16, 2); 

lcd.print("S3 EEE ");

delay(500);
lcd.clear();
lcd.print("Mini Project");
delay(500);


lcd.clear();
lcd.print("By Goutham S");


delay(800);
lcd.clear();
lcd.print("Jyothika");


delay(500);
lcd.clear();
lcd.print("Dhanupriya");


delay(500);
lcd.clear();
lcd.print("Josmi Thresya");


delay(500);

lcd.clear();

lcd.print("   :)  ");
delay(1000);
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


}
