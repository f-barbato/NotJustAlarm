#pragma once

#include "driver/gpio.h"

namespace pins{

    inline constexpr gpio_num_t TOP             = GPIO_NUM_0;
    inline constexpr gpio_num_t ENCODER         = GPIO_NUM_1;
    inline constexpr gpio_num_t SWITCH_3V3      = GPIO_NUM_2;
    inline constexpr gpio_num_t ADC_VBAT        = GPIO_NUM_3;
    inline constexpr gpio_num_t SWITCH_POS_A    = GPIO_NUM_4;
    inline constexpr gpio_num_t SWITCH_POS_B    = GPIO_NUM_5;
    inline constexpr gpio_num_t LCD_BACKLIGHT   = GPIO_NUM_6;
    inline constexpr gpio_num_t BUZZER          = GPIO_NUM_7;
    inline constexpr gpio_num_t I2C_SDA         = GPIO_NUM_8;
    inline constexpr gpio_num_t I2C_SCL         = GPIO_NUM_9;
    inline constexpr gpio_num_t ENCODER_B       = GPIO_NUM_10;
    inline constexpr gpio_num_t ENCODER_A       = GPIO_NUM_20;
    inline constexpr gpio_num_t EN_ADC_VBAT     = GPIO_NUM_21;

}