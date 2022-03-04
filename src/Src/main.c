#include "STM32F411xx_GPIO.h"

#define BLUE_LED 15

int main(void)
{
	GPIOA_CLK_ENABLE();
	GPIOD_CLK_ENABLE();

	GPIO_SetMode(GPIOD, BLUE_LED, GPIO_LOW_SPEED, GPIO_MODE_PUSH_PULL, GPIO_MODE_GPIO);

	while(1)
	{
		GPIO_Toggle(GPIOD, BLUE_LED);

		Sys_Delay_ms(500);
	}
	return 0;
}
