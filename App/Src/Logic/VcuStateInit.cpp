#include "VcuStateInit.hpp"

using namespace App::Logic;

void VcuStateInit::onEnter() {}

VcuStateId VcuStateInit::update(const VcuInputs &inputs, VcuOutputs &outputs) {
  return VcuStateId::SAME;
}
