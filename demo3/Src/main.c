/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "stm32f0xx.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define tečka 100000
#define čárka 3*tečka
int main(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= GPIO_MODER_MODER5_0;
	GPIOA->BRR = (1<<5); // reset
	uint8_t pole_znaku[32] = {1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0};
    /* Loop forever */
	while(1){
		/*for (volatile uint32_t i = 0; i < 100000; i++) {}
		GPIOA->ODR ^= (1<<5); // toggle
		for (volatile uint32_t i = 0; i < 100000; i++) {}*/
		for(uint8_t i = 0; i < 32; i++){
			if(pole_znaku[i]){
				GPIOA->BSRR = (1<<5); // set
			}
			else{
				GPIOA->BRR = (1<<5); // reset
			}
			for (volatile uint32_t i = 0; i < 170000; i++) {}
		}
	}

}
