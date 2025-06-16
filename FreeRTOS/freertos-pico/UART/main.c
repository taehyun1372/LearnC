#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

void vBlinkTask1() {
   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(50);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(50);
   }
}

void vUART() {
   stdio_init_all();
   for (;;) {
      printf("Hello World From Pi Pico USB CDC\n");
      sleep_ms(100);
   }
}

void main() {
   gpio_init(PICO_DEFAULT_LED_PIN);
   gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
   xTaskCreate(vBlinkTask1, "Blink Task 1", 128, NULL, 1, NULL);
   xTaskCreate(vUART, "UART Task", 128, NULL, 2, NULL);
   vTaskStartScheduler();
}