/*********************************************************************
 * @file  Apllication.cpp
 * @author <mettre l'adresse mail ou nom prenom>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include <wire.h>
#include "rgb_lcd.h"
#include "SHT31.h"
#include "library.h"


Application::Application()
{
  // Code
  ; 
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{

  lcd_rgb lcd;
  SHT31 sht31;

  Wire.begin();
  lcd.begin();
  sht31.begin();

  lcd.print("moren til Brage!");
  
}


void Application::run(void)
{
  // Code
    ;
}
