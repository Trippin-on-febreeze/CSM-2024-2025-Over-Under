/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// LeftFrontDrive       motor         1               
// RightFrontDrive      motor         2               
// LeftCenterDrive      motor         3               
// RightCenterDrive     motor         4               
// LeftRearDrive        motor         5               
// RightRearDrive       motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

float speedFactor = 1.3;

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
     float speed = Controller1.Axis3.position() / 2;
     float direction = Controller1.Axis1.position() / 3;
    
     


        LeftFrontDrive.spin(forward, speed + direction, pct);
        // LeftCenterDrive.spin(forward, 100, pct);
        LeftRearDrive.spin(forward, speed + direction, pct);

        RightFrontDrive.spin(forward, speed - direction, pct);
        // RightCenterDrive.spin(forward, 100, pct);
        RightRearDrive.spin(forward, speed - direction, pct);
    



    


      // LeftFrontDrive.spin(forward, direction, pct);
      // // LeftCenterDrive.spin(forward, 100, pct);
      // LeftRearDrive.spin(forward, direction, pct);

      // RightFrontDrive.spin(reverse, direction, pct);
      // // RightCenterDrive.spin(forward, 100, pct);
      // RightRearDrive.spin(reverse, direction, pct);



    // if (Controller1.ButtonUp.pressing()){
    //   LeftFrontDrive.spin(forward, speed, pct);
    //   // LeftCenterDrive.spin(forward, 100, pct);
    //   LeftRearDrive.spin(forward, speed, pct);


    //   RightFrontDrive.spin(forward, speed, pct);
    //   // RightCenterDrive.spin(forward, 100, pct);
    //   RightRearDrive.spin(forward, speed, pct);
    // } else if (Controller1.ButtonDown.pressing()){


    //   LeftFrontDrive.spin(reverse, speed, pct);

    //   // LeftCenterDrive.spin(reverse, 100, pct);
    //   LeftRearDrive.spin(reverse, speed, pct);


    //   RightFrontDrive.spin(reverse, speed, pct);
    //   // RightCenterDrive.spin(reverse, 100, pct);
    //   RightRearDrive.spin(reverse, speed, pct);

    // } else if (Controller1.ButtonLeft.pressing()){
    //   // LeftDrive.spin(forward, 100, pct);
    //   // RightDrive.spin(reverse, 100, pct);
    // } else if (Controller1.ButtonRight.pressing()){
    //   // LeftDrive.spin(reverse, 100, pct);
    //   // RightDrive.spin(forward, 100, pct);
    // } else {
    //   LeftFrontDrive.spin(forward, 0, pct);
    //   // LeftCenterDrive.stop(brake);
    //   LeftRearDrive.spin(forward, 0, pct);

    //   RightFrontDrive.spin(reverse, 0, pct);
    //   // RightCenterDrive.stop(brake);
    //   RightRearDrive.spin(reverse, 0, pct);
    // }


    //wait(0, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {

  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
