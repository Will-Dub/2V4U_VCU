#include "App.h"
#include "Logic/VcuStateInit.hpp"

extern "C" {
#include "main.h"
}

extern "C" void App_Init(void) {}

extern "C" void App_Run(void) {
  if (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_RESET) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    HAL_Delay(250);

    while (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_RESET) {
    }
  }
}