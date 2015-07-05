/**
 * nvicconf.c - Interrupt priority configuration
 *
 * The STM32 has 16 priorities to choose from where 0 is the
 * highest priority. They are now configured using no groups.
 *
 * Interrupt functions that call FreeRTOS FromISR functions
 * must have a interrupt number 10 and above which is currently
 * set by configMAX_SYSCALL_INTERRUPT_PRIORITY.
 */
#ifndef NVIC_CONF_H_
#define NVIC_CONF_H_

#define NVIC_NO_GROUPS  NVIC_PriorityGroup_0


#endif /* NVIC_CONF_H_ */
