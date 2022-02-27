#include "STM32F411xx_GPIO.h"

#define BLUE_LED 15

int main(void)
{
	GPIO_setMode(GPIOD, BLUE_LED, GPIO_LOW_SPEED, GPIO_MODE_PUSH_PULL, GPIO_MODE_GPIO);

	while(1)
	{
		GPIO_toggle(GPIOD, BLUE_LED);
		for(volatile int i=0; i<800000; i++);
	}
	return 0;
}
