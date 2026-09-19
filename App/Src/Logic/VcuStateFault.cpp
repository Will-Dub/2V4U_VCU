#include "VcuStateFault.hpp"

using namespace App::Logic;

void VcuStateFault::onEnter() {}

VcuStateId VcuStateFault::update(const VcuInputs &inputs, VcuOutputs &outputs) {
  return VcuStateId::SAME;
}
