#include <dht12.h>
#include <LiquidCrystal_I2C.h>
#define DHTllPIN 2 // broche DATA -> broche 2 
LiquidCrystal_I2C 1cd(0*27, 20, 4);

dhtl2 DHTl2;

void setup()
{
  led.init();//initialisation de l'afficheur
}

void loop()
{
  DHTll.read(DHTllPIN);
  led.backlight();//active le rétro-éclairage
  led.clair();//effacer le contenu de l'afficheur LCD
  led.setCursor(0, 0);//se positionner a la premiere ligne
  led.print("temperature= ");
  led.setCursor(0, 1);//se positionner a la deuxieme ligne
  led.print((float)DHTll.temperature);//afficher la temperature sur l'afficheur
  delay(2000);
}
