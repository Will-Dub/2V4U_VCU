#pragma once
#include "VcuStateInit.hpp"

namespace App::Logic {
class VcuController {
private:
  VcuStateInit m_stateInit;
  VcuState *m_currentState;

  VcuState *getStateInstance(VcuStateId id);

public:
  VcuController();
  void run(const VcuInputs &inputs, VcuOutputs &outputs);
};
} // namespace App::Logic