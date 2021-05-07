// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc/romi/RomiMotor.h"

using namespace frc;

RomiMotor::RomiMotor(int channel) : PWMSpeedController(channel) {
  SetPeriodMultiplier(kPeriodMultiplier_1X);
  SetSpeed(0.0);
  SetZeroLatch();
}
