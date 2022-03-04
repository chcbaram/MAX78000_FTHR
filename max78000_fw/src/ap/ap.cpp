#include "ap.h"



void apInit(void)
{

}

void apMain(void)
{

  while(1)
  {
    for (int i=0; i<LED_MAX_CH; i++)
    {
      ledOn(i);
      delay(500);
      ledOff(i);
      delay(500);
    }
  }
}

