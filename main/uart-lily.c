#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "uart_services.h"

void app_main(void)
{

    init_uart();
    while (1){
        write_uart("fuck\n",5);
        vTaskDelay(100);
    }


}
