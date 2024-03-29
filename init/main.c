/**
 *
 * main.c - Containing the main function.
 */

/* Personal configs */
#include "FreeRTOSConfig.h"

/* FreeRtos includes */
#include "FreeRTOS.h"
#include "task.h"

/* Project includes */
#include "config.h"

/* ST includes */
#include "stm32fxxx.h"

int main() 
{
  //Initialize the platform.
  //platformInit();

  //Launch the system task that will initialize and start everything
  //systemLaunch();

  //Start the FreeRTOS scheduler
  vTaskStartScheduler();

  //TODO: Move to platform launch failed


  //Should never reach this point!
  while(1);

  return 0;
}

