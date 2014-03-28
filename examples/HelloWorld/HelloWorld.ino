/********************

HelloWorld.ino

Version 0.0.01
Last Modified 03/28/2014
By Jim Mayhugh

This test uses the TeensyLCD library to display information on up to 11
HD44780 20x4 LCD displays, using a MCP23017 and Teensy3.x as the controller.

This code uses I2C address 0x20, but the library supports addresses 0x20
through 0x27, by replacing the first value in TeensyLCD() with the lower
three bits of the I2C address (0-7).

This allows a single Teensy3.x devices to control up to 88 LCDs.

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

This software uses multiple libraries that are subject to additional
licenses as defined by the author of that software. It is the user's
and developer's responsibility to determine and adhere to any additional
requirements that may arise.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


*********************/
#include <Wire.h>
#include <TeensyLCD.h>
#include <stdio.h>
#include <stdlib.h>

TeensyLCD LCD0  = TeensyLCD(0, 0);
TeensyLCD LCD1  = TeensyLCD(0, 1);
TeensyLCD LCD2  = TeensyLCD(0, 2);
TeensyLCD LCD3  = TeensyLCD(0, 3);
TeensyLCD LCD4  = TeensyLCD(0, 4);
TeensyLCD LCD5  = TeensyLCD(0, 5);
TeensyLCD LCD6  = TeensyLCD(0, 6);
TeensyLCD LCD7  = TeensyLCD(0, 7);
TeensyLCD LCD8  = TeensyLCD(0, 8);
TeensyLCD LCD9  = TeensyLCD(0, 9);
TeensyLCD LCD10 = TeensyLCD(0, 10);

TeensyLCD *lcd[] = { &LCD0, &LCD1, &LCD2, &LCD3, &LCD4, &LCD5, &LCD6, &LCD7, &LCD8, &LCD9, &LCD10 };

uint8_t x, secs, mins, hrs, days;
uint32_t starttime, totalTime;
char timer[20];

const long baudRate = 115200;

void setup()
{
  Serial.begin(baudRate);
  
  for(x = 0; x < 11; x++)
  {
    lcd[x]->begin(20, 4);
    lcd[x]->clear();
    lcd[x]->home();
    lcd[x]->print(F("    Hello World!    "));
    lcd[x]->setCursor(0, 1);
    lcd[x]->print(F("  I am LCD Display  "));
    lcd[x]->setCursor(0, 2);
    lcd[x]->print(F("     Number "));
    if(x < 10) lcd[x]->print(F(" "));
    lcd[x]->print(x);
  }
  secs = 0;
  mins = 0;
  hrs = 0;
  days = 0;
}

void loop()
{  
  secs++;
  if(secs >= 60)
  {
    secs = 0;
    mins++;
  }
  
  if(mins >= 60)
  {
    mins = 0;
    hrs++;
  }
  
  if(hrs >= 24)
  {
    hrs = 0;
    days++;
  }
  
  sprintf(timer, "%02d:%02d:%02d Day %d", hrs, mins, secs, days);
  
  starttime = millis();
  for(x = 0; x < 11; x++)
  {
    lcd[x]->setCursor(0, 3);
    lcd[x]->print(timer);
  }
  totalTime = millis() - starttime;
  Serial.print(F("Elapsed Time: "));
  Serial.print(totalTime);
  Serial.println(F(" milliseconds"));
  totalTime = millis() - starttime;
  
  delay(1000 - totalTime);
}
