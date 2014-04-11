#include <Wire.h>
#include <TeensyLCD.h>
#include <stdio.h>
#include <stdlib.h>

TeensyLCD LCDA0  = TeensyLCD(0, 0);
TeensyLCD LCDA1  = TeensyLCD(0, 1);
TeensyLCD LCDA2  = TeensyLCD(0, 2);
TeensyLCD LCDA3  = TeensyLCD(0, 3);
TeensyLCD LCDA4  = TeensyLCD(0, 4);
TeensyLCD LCDA5  = TeensyLCD(0, 5);
TeensyLCD LCDA6  = TeensyLCD(0, 6);
TeensyLCD LCDA7  = TeensyLCD(0, 7);
TeensyLCD LCDA8  = TeensyLCD(0, 8);
TeensyLCD LCDA9  = TeensyLCD(0, 9);
TeensyLCD LCDA10 = TeensyLCD(0, 10);

TeensyLCD LCDB0  = TeensyLCD(1, 0);
TeensyLCD LCDB1  = TeensyLCD(1, 1);
TeensyLCD LCDB2  = TeensyLCD(1, 2);
TeensyLCD LCDB3  = TeensyLCD(1, 3);
TeensyLCD LCDB4  = TeensyLCD(1, 4);
TeensyLCD LCDB5  = TeensyLCD(1, 5);
TeensyLCD LCDB6  = TeensyLCD(1, 6);
TeensyLCD LCDB7  = TeensyLCD(1, 7);
TeensyLCD LCDB8  = TeensyLCD(1, 8);
TeensyLCD LCDB9  = TeensyLCD(1, 9);
TeensyLCD LCDB10 = TeensyLCD(1, 10);

TeensyLCD LCDC0  = TeensyLCD(2, 0);
TeensyLCD LCDC1  = TeensyLCD(2, 1);
TeensyLCD LCDC2  = TeensyLCD(2, 2);
TeensyLCD LCDC3  = TeensyLCD(2, 3);
TeensyLCD LCDC4  = TeensyLCD(2, 4);
TeensyLCD LCDC5  = TeensyLCD(2, 5);
TeensyLCD LCDC6  = TeensyLCD(2, 6);
TeensyLCD LCDC7  = TeensyLCD(2, 7);
TeensyLCD LCDC8  = TeensyLCD(2, 8);
TeensyLCD LCDC9  = TeensyLCD(2, 9);
TeensyLCD LCDC10 = TeensyLCD(2, 10);

TeensyLCD LCDD0  = TeensyLCD(3, 0);
TeensyLCD LCDD1  = TeensyLCD(3, 1);
TeensyLCD LCDD2  = TeensyLCD(3, 2);
TeensyLCD LCDD3  = TeensyLCD(3, 3);
TeensyLCD LCDD4  = TeensyLCD(3, 4);
TeensyLCD LCDD5  = TeensyLCD(3, 5);
TeensyLCD LCDD6  = TeensyLCD(3, 6);
TeensyLCD LCDD7  = TeensyLCD(3, 7);
TeensyLCD LCDD8  = TeensyLCD(3, 8);
TeensyLCD LCDD9  = TeensyLCD(3, 9);
TeensyLCD LCDD10 = TeensyLCD(3, 10);

TeensyLCD LCDE0  = TeensyLCD(4, 0);
TeensyLCD LCDE1  = TeensyLCD(4, 1);
TeensyLCD LCDE2  = TeensyLCD(4, 2);
TeensyLCD LCDE3  = TeensyLCD(4, 3);
TeensyLCD LCDE4  = TeensyLCD(4, 4);
TeensyLCD LCDE5  = TeensyLCD(4, 5);
TeensyLCD LCDE6  = TeensyLCD(4, 6);
TeensyLCD LCDE7  = TeensyLCD(4, 7);
TeensyLCD LCDE8  = TeensyLCD(4, 8);
TeensyLCD LCDE9  = TeensyLCD(4, 9);
TeensyLCD LCDE10 = TeensyLCD(4, 10);

TeensyLCD LCDF0  = TeensyLCD(5, 0);
TeensyLCD LCDF1  = TeensyLCD(5, 1);
TeensyLCD LCDF2  = TeensyLCD(5, 2);
TeensyLCD LCDF3  = TeensyLCD(5, 3);
TeensyLCD LCDF4  = TeensyLCD(5, 4);
TeensyLCD LCDF5  = TeensyLCD(5, 5);
TeensyLCD LCDF6  = TeensyLCD(5, 6);
TeensyLCD LCDF7  = TeensyLCD(5, 7);
TeensyLCD LCDF8  = TeensyLCD(5, 8);
TeensyLCD LCDF9  = TeensyLCD(5, 9);
TeensyLCD LCDF10 = TeensyLCD(5, 10);

TeensyLCD LCDG0  = TeensyLCD(6, 0);
TeensyLCD LCDG1  = TeensyLCD(6, 1);
TeensyLCD LCDG2  = TeensyLCD(6, 2);
TeensyLCD LCDG3  = TeensyLCD(6, 3);
TeensyLCD LCDG4  = TeensyLCD(6, 4);
TeensyLCD LCDG5  = TeensyLCD(6, 5);
TeensyLCD LCDG6  = TeensyLCD(6, 6);
TeensyLCD LCDG7  = TeensyLCD(6, 7);
TeensyLCD LCDG8  = TeensyLCD(6, 8);
TeensyLCD LCDG9  = TeensyLCD(6, 9);
TeensyLCD LCDG10 = TeensyLCD(6, 10);

TeensyLCD LCDH0  = TeensyLCD(7, 0);
TeensyLCD LCDH1  = TeensyLCD(7, 1);
TeensyLCD LCDH2  = TeensyLCD(7, 2);
TeensyLCD LCDH3  = TeensyLCD(7, 3);
TeensyLCD LCDH4  = TeensyLCD(7, 4);
TeensyLCD LCDH5  = TeensyLCD(7, 5);
TeensyLCD LCDH6  = TeensyLCD(7, 6);
TeensyLCD LCDH7  = TeensyLCD(7, 7);
TeensyLCD LCDH8  = TeensyLCD(7, 8);
TeensyLCD LCDH9  = TeensyLCD(7, 9);
TeensyLCD LCDH10 = TeensyLCD(7, 10);

TeensyLCD *lcd[8][11] = 
{
  { &LCDA0, &LCDA1, &LCDA2, &LCDA3, &LCDA4, &LCDA5, &LCDA6, &LCDA7, &LCDA8, &LCDA9, &LCDA10 },
  { &LCDB0, &LCDB1, &LCDB2, &LCDB3, &LCDB4, &LCDB5, &LCDB6, &LCDB7, &LCDB8, &LCDB9, &LCDB10 },
  { &LCDC0, &LCDC1, &LCDC2, &LCDC3, &LCDC4, &LCDC5, &LCDC6, &LCDC7, &LCDC8, &LCDC9, &LCDC10 },
  { &LCDD0, &LCDD1, &LCDD2, &LCDD3, &LCDD4, &LCDD5, &LCDD6, &LCDD7, &LCDD8, &LCDD9, &LCDD10 },
  { &LCDE0, &LCDE1, &LCDE2, &LCDE3, &LCDE4, &LCDE5, &LCDE6, &LCDE7, &LCDE8, &LCDE9, &LCDE10 },
  { &LCDF0, &LCDF1, &LCDF2, &LCDF3, &LCDF4, &LCDF5, &LCDF6, &LCDF7, &LCDF8, &LCDF9, &LCDF10 },
  { &LCDG0, &LCDG1, &LCDG2, &LCDG3, &LCDG4, &LCDG5, &LCDG6, &LCDG7, &LCDG8, &LCDG9, &LCDG10 },
  { &LCDH0, &LCDH1, &LCDH2, &LCDH3, &LCDH4, &LCDH5, &LCDH6, &LCDH7, &LCDH8, &LCDH9, &LCDH10 }
};

uint8_t x, y, mins, hrs, days;
uint32_t starttime, totalTime, Timer;
char timer[20];

const long baudRate = 115200;

void setup()
{
  Serial.begin(baudRate);
  
  for(y = 0; y < 8; y++)
  {
    for(x = 0; x < 11; x++)
    {
      lcd[y][x]->begin(20, 4);
      lcd[y][x]->clear();
      lcd[y][x]->home();
      lcd[y][x]->print(F("Timer "));
      lcd[y][x]->print(y);
      lcd[y][x]->print(F("-"));
      lcd[y][x]->print(x);
      lcd[y][x]->print(F(" Example"));
    }
  }
}

void loop()
{
    
  starttime = millis();
  for(y = 0; y < 8; y++)
  {
    for(x = 0; x < 11; x++)
    {
      sprintf(timer, "%ld", millis());
      lcd[y][x]->setCursor(0, 1);
      lcd[y][x]->print(F("millis() = "));      
      lcd[y][x]->print(timer);
      totalTime = millis() - starttime;
      lcd[y][x]->setCursor(0, 2);
      lcd[y][x]->print(F("   Elapsed Time:    "));
      lcd[y][x]->setCursor(0, 3);
      lcd[y][x]->print(totalTime);
      lcd[y][x]->print(F(" milliseconds"));
    }
  }
  Serial.print(F("Total Elapsed Time = "));
  Serial.print(totalTime);
  Serial.println(F(" milliseconds"));
  
//  delay(3000 - totalTime);
}
