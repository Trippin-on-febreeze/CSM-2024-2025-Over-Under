#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LeftFrontDrive = motor(PORT1, ratio6_1, true);
motor RightFrontDrive = motor(PORT2, ratio6_1, false);
motor LeftCenterDrive = motor(PORT3, ratio6_1, true);
motor RightCenterDrive = motor(PORT4, ratio6_1, false);
motor LeftRearDrive = motor(PORT5, ratio6_1, true);
motor RightRearDrive = motor(PORT6, ratio6_1, false);
digital_out DigitalOutA = digital_out(Brain.ThreeWirePort.A);
digital_out DigitalOutB = digital_out(Brain.ThreeWirePort.B);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}