#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup() {
  lcd.begin(20, 2); 
  lcd.print("05052421");
  lcd.print("yty");.
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}

