/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems\DriveTrain.h"

DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain") 
{
  DefaultDrive = new TankDrive_Joystick();
}

void DriveTrain::ResetSensors() {
  gyro.Calibrate(); 
}

void DriveTrain::InitDefaultCommand() 
{
  SetDefaultCommand(DefaultDrive);
}

void DriveTrain::TankDrive(double iLeft, double iRight) 
{
  Drive.TankDrive(iLeft, iRight);
}

double DriveTrain::GetAngle() 
{
  return gyro.GetAngle();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
