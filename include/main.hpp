/** @file main.hpp
 * @brief Header file for global functions
**/

#ifndef MAIN_H_

// This prevents multiple inclusion, which isn't bad for this file but is good practice
#define MAIN_H_

#include <API.h>

// Allow usage of this file in C++ programs
#ifdef __cplusplus
extern "C" {
#endif

//#define AUTO_DEBUG

void autonomous();

void initializeIO();

void initialize();

void operatorControl();

#define liftBL 1
#define driveFR 2 // pwx
#define driveFL 3
#define liftTR 4 // Y
#define liftML 5 // pwx
#define driveMR 6
#define driveBL 7 // Y pwx
#define liftTL 8
#define liftBR 9 // pwx
#define driveBR 10

#define rDriveEnc1 1
#define rDriveEnc2 2
#define lDriveEnc1 3
#define lDriveEnc2 4
#define liftEnc1 5
#define liftEnc2 6
#define clawL 11
#define clawR 12

Encoder rDriveEnc;
Encoder lDriveEnc;
Encoder liftEnc;

// End C++ export structure
#ifdef __cplusplus
}
#endif

#endif
