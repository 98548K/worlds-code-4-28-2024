#include "vex.h"

/*

FIRST

"Match"
"Skills"

SECOND

"Left"
"Center"
"Right"

THIRD

"Simple"
"Complex"
"Half Winpoint"
"Winpoint"
*/

void pre_auton(){
  Calibrate();

  ms.Assign("Match", "Left", "Winpoint", new auton{
    [](){
      Inertial7.calibrate();
      intake.setVelocity(100,percent);
      intake.spinFor(50,degrees);
      chassis.drive_with_voltage(-5,-11);
      wait (1.6,sec);
      RVwings.set(true);
      chassis.drive_with_voltage(3,6);
      wait (1.3,sec);
      RVwings.set(false);
      chassis.drive_with_voltage(0,0);
      wait (1.5, sec);
      chassis.drive_with_voltage(-5.5,5.5);
      wait (.65,sec);
      chassis.drive_with_voltage(0,0);
      wait (1.5, sec);
      chassis.drive_with_voltage(-10,-10);
      wait (.25001,sec);
      chassis.drive_with_voltage(-1,-1);
      wait (.3, msec);
      chassis.drive_with_voltage(0,0);
      wait (10, msec);
      intake.spinFor(-10050,degrees);
    },
      "Basic winpoint"
  });


  /*ms.Assign("Match", "Right", "Complex", new auton{
    [](){
      Inertial7.calibrate();
      intake.setVelocity(100,percent);
      intake.spinFor(45,degrees,false);
      RHwings.set(true);
      wait (1,sec);
      RHwings.set(false);
      intake.spinFor(4300,degrees,false);
      chassis.drive_with_voltage(10, 10);
      wait (.7,sec);
      chassis.drive_with_voltage(0, 0);
      chassis.drive_with_voltage(4, -4);
      wait (.9,sec);
      RHwings.set(true);
      LHwings.set(true);
      chassis.drive_with_voltage(7, 7);
      wait (0,sec);
      intake.spinFor(-1100,degrees);
      chassis.drive_with_voltage(6, 6);
      intake.spinFor(-1000,degrees);
      chassis.drive_with_voltage(-8, -8);
      wait (.09,sec);
      chassis.drive_with_voltage(0, 0);
      wait (1,sec);
      RHwings.set(false);
      LHwings.set(false);
      wait (.5,sec);
      intake.spin(forward);
      chassis.drive_with_voltage(-8, -3);
      wait (1.25,sec);
      chassis.drive_with_voltage(8, 8);
      intake.spinFor(600,degrees);
      chassis.drive_with_voltage(0, 0);
      intake.spinFor(1500,degrees);
      wait (.5,sec);
      chassis.drive_with_voltage(-5, -9);
      wait (1.1,sec);
      chassis.drive_with_voltage(8, -8);
      wait (.1,sec);
      chassis.drive_with_voltage(0, 0);
      intake.spinFor(-2000,degrees);
      RVwings.set(true);
      intake.spin(reverse);
      chassis.drive_with_voltage(3,12);
      wait (1,sec);
      chassis.drive_with_voltage(0, 0);
      wait (1,sec);
      chassis.drive_with_voltage(-5, -7);
      wait (.4,sec);
      RVwings.set(false);
      chassis.drive_with_voltage(5, -5);
      wait (.7, sec);
      chassis.drive_with_voltage(0, 0);
      chassis.drive_with_voltage(-12, -12);
      wait (.2, sec);
      chassis.drive_with_voltage(12, 12);
      wait (.3, sec);
      chassis.drive_with_voltage(0, 0);
    },
      "5 ball"
  });*/
ms.Assign("Match", "Right", "Simple", new auton{
    [](){
      Inertial7.calibrate();
      intake.setVelocity(100,percent);
      intake.spin(forward);
      wait (1,sec);
      chassis.drive_with_voltage(2, 2);
      wait (.8,sec);
      chassis.drive_with_voltage(-8, -8);
      wait (.6,sec);
      LVwings.set(true);
      chassis.drive_with_voltage(-5.9, -3);
      wait (.6,sec);
      LVwings.set(false);
      wait (.3,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(-5.2, -3);
      wait (.45,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(5, 5);
      wait (.25,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.4,sec);
      chassis.drive_with_voltage(-11, -11);
      wait (.6,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(4, 4);
      wait (.2,sec);
      chassis.drive_with_voltage(8, -8);
      wait (.31,sec);
      chassis.drive_with_voltage(0, 0);
      intake.spin(reverse);
      wait (2,sec);
      intake.spinFor(1,degrees);
      chassis.drive_with_voltage(12, 12);
      wait (.5,sec);
      chassis.drive_with_voltage(0, 0);
    },
      "3 ball"
  });

  ms.Assign("Match", "Right", "Half Winpoint", new auton{
    [](){
      Inertial7.calibrate();
      intake.setVelocity(100,percent);
      intake.spin(forward);
      wait (1,sec);
      chassis.drive_with_voltage(2, 2);
      wait (.8,sec);
      chassis.drive_with_voltage(-8, -8);
      wait (.6,sec);
      LVwings.set(true);
      chassis.drive_with_voltage(-5.9, -3);
      wait (.6,sec);
      LVwings.set(false);
      wait (.3,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(-5.2, -3);
      wait (.45,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(5, 5);
      wait (.25,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.4,sec);
      chassis.drive_with_voltage(-11, -11);
      wait (.6,sec);
      chassis.drive_with_voltage(0, 0);
      wait (.2,sec);
      chassis.drive_with_voltage(4, 4);
      wait (.25,sec);
      chassis.drive_with_voltage(8, -8);
      wait (.31,sec);
      chassis.drive_with_voltage(0, 0);
      intake.spin(reverse);
      wait (2,sec);
      intake.spinFor(1,degrees);
      chassis.drive_with_voltage(12, 12);
      wait (.5,sec);
      chassis.drive_with_voltage(0, 0);
    },
      "4 ball"
  });


  
  ms.SetTestAutonomous("Match", "Left", "Winpoint");
	while(ms.should_update && (Competition.isFieldControl() || Competition.isCompetitionSwitch())){
		ms.Update();
		wait(20, msec);
	}
}