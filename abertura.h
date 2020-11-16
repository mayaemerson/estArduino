 #include "definicoes.h"
 
 LiquidCrystal_I2C lcd(endereco, colunas, linhas);

 
 
 void mensagemAbertura () {
   pinMode(buzzerPin, OUTPUT);
   tone(buzzerPin,262,500);
   delay(500);
   noTone(buzzerPin);
  lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
  lcd.clear(); // LIMPA O DISPLAY
  lcd.backlight();
  lcd.setCursor(5,0);
  lcd.print(nomein);
  lcd.setCursor(4,1);
  lcd.print(boatarde);
  
 }
  