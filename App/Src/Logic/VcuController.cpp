#include "VcuController.hpp"

using namespace App::Logic;

VcuController::VcuController() {
  m_currentState = &m_stateInit;
  m_currentState->onEnter();
}

VcuState *VcuController::getStateInstance(VcuStateId id) {
  switch (id) {
  case VcuStateId::INIT:
    return &m_stateInit;
  default:
    return nullptr;
  }
}

void VcuController::run(const VcuInputs &inputs, VcuOutputs &outputs) {
  VcuStateId nextStateId = m_currentState->update(inputs, outputs);
}
