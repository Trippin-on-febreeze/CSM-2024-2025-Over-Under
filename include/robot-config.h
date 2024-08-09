using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor LeftFrontDrive;
extern motor RightFrontDrive;
extern motor LeftCenterDrive;
extern motor RightCenterDrive;
extern motor LeftRearDrive;
extern motor RightRearDrive;
extern digital_out DigitalOutA;
extern digital_out DigitalOutB;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );