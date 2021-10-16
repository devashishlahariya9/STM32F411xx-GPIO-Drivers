/*
 * STM32F411xx_GPIO.h
 *
 * Created on: 13-Oct-2021
 * Author: Devashish Lahariya
*/

#ifndef STM32F411XX_GPIO_H_
#define STM32F411XX_GPIO_H_

#include "STM32F411xx.h"

#define LOW_SPEED    0U
#define MEDIUM_SPEED 1U
#define FAST_SPEED   2U
#define HIGH_SPEED   3U

#define PUSH_PULL    0U
#define OPEN_DRAIN   1U

#define INPUT  		 0U
#define GPIO  		 1U
#define AFIO   		 2U
#define ANALOG 		 3U

#define PORTA 		 0U
#define PORTB 		 1U
#define PORTC 		 2U
#define PORTD 		 3U
#define PORTE		 4U

void GPIO_setMode(uint8_t _port, uint8_t _pin, uint8_t _speed, uint8_t _type, uint8_t _mode)
{
	switch(_port)
	{
		case PORTA:
			RCC   -> AHB1ENR |= (1 << GPIOAEN);
			GPIOA -> OSPEEDR |= (_speed << (_pin * 2));
			GPIOA -> OTYPER  |= (_type << _pin);
			GPIOA -> MODER   |= (_mode << (_pin * 2));
			break;

		case PORTB:
			RCC   -> AHB1ENR |= (1 << GPIOBEN);
			GPIOB -> OSPEEDR |= (_speed << (_pin * 2));
			GPIOB -> OTYPER  |= (_type << _pin);
			GPIOB -> MODER   |= (_mode << (_pin * 2));
			break;

		case PORTC:
			RCC   -> AHB1ENR |= (1 << GPIOCEN);
			GPIOC -> OSPEEDR |= (_speed << (_pin * 2));
			GPIOC -> OTYPER  |= (_type << _pin);
			GPIOC -> MODER   |= (_mode << (_pin * 2));
			break;

		case PORTD:
			RCC   -> AHB1ENR |= (1 << GPIODEN);
			GPIOD -> OSPEEDR |= (_speed << (_pin * 2));
			GPIOD -> OTYPER  |= (_type << _pin);
			GPIOD -> MODER   |= (_mode << (_pin * 2));
			break;

		case PORTE:
			RCC   -> AHB1ENR |= (1 << GPIOEEN);
			GPIOE -> OSPEEDR |= (_speed << (_pin * 2));
			GPIOE -> OTYPER  |= (_type << _pin);
			GPIOE -> MODER   |= (_mode << (_pin * 2));
			break;
	}
}

#endif /* STM32F411XX_GPIO_H_ */
