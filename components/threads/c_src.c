#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void thread2(void *arg){
    while(1){
        printf("I'm thread 2\n");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}


void thread3(void *arg){
    while(1){
        printf("I'm thread 3\n");
        vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
}

void run_thread_test(void)
{
    xTaskCreate( &thread2, "thread2", 4*1024, NULL, 5, NULL);
    xTaskCreate( &thread3, "thread3", 4*1024, NULL, 5, NULL);
    while (1)
    {
        printf("I'm the C Program!\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}