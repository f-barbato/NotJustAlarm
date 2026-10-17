#include <stdint.h>

#include "esp_err.h"
#include "esp_log.h"
#include "esp_sleep.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "buttons.h"

static void wait_button_release(){

    uint8_t stable_count = 0;

    while(stable_count < 10){
        if(gpio_get_level(pins::TOP) == 1){
            stable_count++;
        }else{
            stable_count = 0;
        }
        vTaskDelay(pdMS_TO_TICKS(10));
    }

}

extern "C" void app_main(void){
    ESP_ERROR_CHECK(gpio_config(&buttons::top));

    ESP_ERROR_CHECK(gpio_config(&buttons::buzzer));
    gpio_set_level(pins::BUZZER, 1);

    if((esp_sleep_get_wakeup_causes() & ESP_SLEEP_WAKEUP_GPIO) == ESP_SLEEP_WAKEUP_GPIO){
        ESP_LOGI("app_main", "Woke up from GPIO");
        esp_sleep_disable_wakeup_source(ESP_SLEEP_WAKEUP_GPIO);
    }else{
        ESP_LOGI("app_main", "Normal boot");
    }

    vTaskDelay(pdMS_TO_TICKS(20000));
    wait_button_release();

    esp_sleep_enable_gpio_wakeup();
    ESP_LOGI("app_main", "Going to sleep");

    //esp_light_sleep_start();

    while(true){
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
