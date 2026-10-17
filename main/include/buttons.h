#pragma once

#include "pins.h"

namespace buttons{

    const gpio_config_t top = {
        .pin_bit_mask   = (1ULL << pins::TOP),
        .mode           = GPIO_MODE_INPUT,
        .pull_up_en     = GPIO_PULLUP_DISABLE, 
        .pull_down_en   = GPIO_PULLDOWN_ENABLE,
        .intr_type      = GPIO_INTR_DISABLE
    };


    
    const gpio_config_t buzzer = {
        .pin_bit_mask   = (1ULL << pins::BUZZER),
        .mode           = GPIO_MODE_OUTPUT,
        .pull_up_en     = GPIO_PULLUP_DISABLE, 
        .pull_down_en   = GPIO_PULLDOWN_ENABLE,
        .intr_type      = GPIO_INTR_DISABLE
    };

}