#ifndef SM1_H
#define SM1_H

#include "sm.h"
#include "chronometer.h"
#include "datatypes.h"
#include "hal.h"

STATE(sm1_init);
STATE(sm1_enchendo);
STATE(sm1_parado);

extern StateMachine sm1;

#endif // SM1_H
