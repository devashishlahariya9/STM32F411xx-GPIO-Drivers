#include "STM32F411xx_GPIO.h"

#define led 15

int main(void)
{
	GPIO_setMode(PORTD, led, LOW_SPEED, PUSH_PULL, GPIO);

	while(1)
	{
		GPIOD -> ODR ^= (1 << led);
		for(int i=0; i<800000; i++);
	}
	return 0;
}
