#pragma once
#include <stdint.h>

namespace App::Logic {

enum class VcuStateId { INIT, STANDBY, DRIVE, FAULT, SAME };

struct VcuInputs {};

struct VcuOutputs {};

} // namespace App::Logic