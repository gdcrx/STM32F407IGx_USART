#ifndef __BSP_USART_H__
#define __BSP_USART_H__


/* 包含头文件----------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* 类型定义 ------------------------------------------------------------------*/
/* 宏定义--------------------------------------------------------------------*/
#define USARTx                                 USART1
#define USARTx_BAUDRATE                        115200
#define USART_RCC_CLK_ENABLE()                 __HAL_RCC_USART1_CLK_ENABLE()
#define USART_RCC_CLK_DISABLE()                __HAL_RCC_USART1_CLK_DISABLE()

#define USARTx_GPIO_CLK_ENABLE()               __HAL_RCC_GPIOB_CLK_ENABLE() // PB引脚可用
#define USARTx_Tx_GPIO_PIN                     GPIO_PIN_6  // PB6引脚 发送数据
#define USARTx_Tx_GPIO                         GPIOB
#define USARTx_Rx_GPIO_PIN                     GPIO_PIN_7  // PB7引脚 接收数据
#define USARTx_Rx_GPIO                         GPIOB

#define USARTx_AFx                             GPIO_AF7_USART1  // 引脚复用

#define USARTx_IRQHandler                      USART1_IRQHandler
#define USARTx_IRQn                            USART1_IRQn


/* 扩展变量 ------------------------------------------------------------------*/
extern UART_HandleTypeDef husartx;      // 串口句柄结构体

/* 函数声明 ------------------------------------------------------------------*/
void MX_USARTx_Init(void);


#endif  