#include "ap.h"



void apInit(void)
{

}

void apMain(void)
{
  uint32_t pre_time;

  while(1)
  {
    #if 0
    for (int i=0; i<LED_MAX_CH; i++)
    {
      ledOn(i);
      delay(500);
      ledOff(i);
      delay(500);
    }
    #endif
    if (millis()-pre_time >= 500)
    {
      pre_time = millis();
      ledToggle(0);
    }
  }
}

