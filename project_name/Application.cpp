/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include <Wire.h>
#include "rgb_lcd.h"
#include "SHT31.h"
#include "Library.h"


Application::Application()
{
  ;
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{
  Wire.begin();
  lcd.begin(16, 2);
  sht31.begin();
}


void Application::run(void)
{
  float temp = sht31.getTemperature();
  float hum = sht31.getHumidity();
  float noise = analogRead(A0);

  // print temperature on left side of 1st row
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temp, 1);
  lcd.print("C  ");

  // print humidity on right side of 1st row
  lcd.print("H:");
  lcd.print(hum, 1);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Noise:");
  lcd.print(noise, 0);
}
