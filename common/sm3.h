#ifndef SM3_H
#define SM3_H

#include "sm.h"
#include "sm2.h"
#include "chronometer.h"
#include "datatypes.h"
#include "hal.h"
//valvula 3

STATE(sm3_init);
STATE(sm3_enchendo);
STATE(sm3_desligado);

extern StateMachine sm3;

#endif // SM3_H
