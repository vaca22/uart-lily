//
// Created by vaca on 9/11/22.
//

#ifndef UART_LILY_UART_SERVICES_H
#define UART_LILY_UART_SERVICES_H
#include "driver/gpio.h"


#define UART_PORT_NUM UART_NUM_1

//   white
#define TXD_PIN (GPIO_NUM_25)


//   Green
#define RXD_PIN (GPIO_NUM_26)


void init_uart(void);
void write_uart( const void *src, size_t size);
#endif //UART_LILY_UART_SERVICES_H
