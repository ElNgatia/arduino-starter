#include <LiquidCrystal_I2C.h>

#include <dht.h>




LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);

dht DHT;

#define DHT11_PIN 7

void setup() {
  lcd.init();       // initialise I2C LCD
  lcd.backlight();  // Turn On  the backlight of the I2C LCD
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1);
}