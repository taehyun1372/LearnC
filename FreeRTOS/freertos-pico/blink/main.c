#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "task.h"

void vBlinkTask1() {
   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(50);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(50);
   }
}

void vBlinkTask2() {
   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(200);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(200);
   }
}

void main() {
   gpio_init(PICO_DEFAULT_LED_PIN);
   gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
   xTaskCreate(vBlinkTask1, "Blink Task 1", 128, NULL, 1, NULL);
   xTaskCreate(vBlinkTask2, "Blink Task 2", 128, NULL, 2, NULL);
   vTaskStartScheduler();
}