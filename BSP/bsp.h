#ifndef __BSP__
#define __BSP__

#include "RTC_Time.h"
#include "SCCB.h"
#include "IOI2C.h"
#include "standby.h"
#include "dcmi_ov2640.h"

	
#define MODEM_POWER_RCC_TYPE	RCC_APB2PeriphClockCmd
#define MODEM_POEWR_RCC				RCC_APB2Periph_GPIOB
#define MODEM_POEWR_GPIO			GPIOB
#define MODEM_POEWR_PIN				GPIO_Pin_10

#define OV_POWER_RCC_TYPE	RCC_APB2PeriphClockCmd
#define OV_POEWR_RCC				RCC_APB2Periph_GPIOB
#define OV_POEWR_GPIO			GPIOB
#define OV_POEWR_PIN				GPIO_Pin_12

void init_uart1(void);
void init_uart2(void);

void uart1_putchar(unsigned char data);
void uart2_putchar(unsigned char data);

void modem_poweron(void);
void modem_poweroff(void);

void ov_poweron(void);
void ov_poweroff(void);


#endif
