/**
 * TODO: Add description
 */

/* Personal configs */
#include "FreeRTOSConfig.h"

/* FreeRtos includes */
#include "FreeRTOS.h"
#include "task.h"

/* Project includes */
#include "config.h"
#include "nvic.h"

/* ST includes */
#include "stm32fxxx.h"

// TODO: Implement!
int platformInit(void)
{
  //Low level init: Clock and Interrupt controller
  nvicInit();

  return 0;
}

