#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte R[8] = {
  B11110,
  B10001,
  B10001,
  B11110,
  B11000,
  B10100,
  B10010,
  B10001,
 
};

byte A[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B11111,
  B10001,
  B10001,
  B10001,
};


byte A[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B11111,
  B10001,
  B10001,
  B10001,
};


void setup() {
  lcd.createChar(0, R);
    lcd.createChar(1, A);
     
  lcd.begin(16, 2);  
  lcd.write(byte(0));
  lcd.write(byte(1));
}

void loop() {}
