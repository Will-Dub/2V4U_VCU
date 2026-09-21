#include "App.h"
#include "Logic/VcuStateInit.hpp"
#include "VcuController.hpp"
#include "VcuStruct.hpp"
#include "main.h"

static App::Logic::VcuController vcuController;

extern "C" void App_Init(void) {}

extern "C" void App_Run(void) {
  App::Logic::VcuOutputs outputs{};
  App::Logic::VcuInputs inputs{};

  inputs.pilot.boardButtonPressed =
      HAL_GPIO_ReadPin(BOARD_BUTTON_GPIO_Port, BOARD_BUTTON_Pin);

  vcuController.run(inputs, outputs);

  HAL_GPIO_WritePin(BOARD_LED_GPIO_Port, BOARD_LED_Pin,
                    outputs.lights.boardLed ? GPIO_PIN_SET : GPIO_PIN_RESET);
}