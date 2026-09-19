#pragma once
#include <stdint.h>

namespace App::Logic {

enum class VcuStateId { INIT, PARK, DRIVE, FAULT, SAME };

struct VcuInputs {
  struct {
    bool boardButton;
  } buttons;
};

struct VcuOutputs {
  struct {
    bool boardLed;
  } lights;
};

} // namespace App::Logic