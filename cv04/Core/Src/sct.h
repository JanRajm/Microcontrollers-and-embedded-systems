/*
 * sct.h
 *
 *  Created on: 12. 10. 2022
 *      Author: xrajmj00
 */

#ifndef SCT_H_
#define SCT_H_
#include <stdint.h>
#include "stm32f0xx.h"
	void sct_init(void);
	void sct_led(uint32_t value);
	void sct_value(uint16_t value, uint8_t led);
#endif /* SCT_H_ */

// BRR = reset, BSRR = set



