#include "bsp.h"






bool bspInit(void)
{

  // Enable GPIO
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO0);
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO1);
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO2);

  return true;
}

void delay(uint32_t time_ms)
{
  MXC_Delay(time_ms*1000);
}

uint32_t millis(void)
{  
  return 0;
}