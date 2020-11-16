/*
     trhilha de abertura do sistema Mario Bros 
     by: Emerson Maia
     last updated: 31/3/13
*/
// INCLUSÃO DE BIBLIOTECAS
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "abertura.h"
#include "definicoes.h"
#include "leds.h"

// INSTANCIANDO OBJETOS

void setup() {
 Serial.begin(9600);
 inicarled ();
 mensagemAbertura();


}

void loop() {

loplediniciar();

}
