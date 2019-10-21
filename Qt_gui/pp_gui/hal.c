#include "../../common/hal.h"
#include <windows.h>
#include <time.h>

boolean pin_s11;
boolean pin_s12;
boolean pin_v1;
boolean pin_b1;
boolean pin_s21;
boolean pin_s22;

void InitHAL(){
    pin_s11 = FALSE;
    pin_s12 = FALSE;
    pin_v1  = FALSE;
    pin_b1 = FALSE;
    pin_s21 = FALSE;
    pin_s22 = FALSE;
}

uint32 Now(){
    return clock();
}

boolean s11(){
    return pin_s11;
}

boolean s12(){
    return pin_s12;
}

void v1(boolean state){
    pin_v1 = state;
}

void b1(boolean state){
 pin_b1 = state;
}

boolean s21(){
    return pin_s21;
}

boolean s22(){
   return pin_s22;
}

