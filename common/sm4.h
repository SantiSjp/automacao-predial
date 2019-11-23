#ifndef SM4_H
#define SM4_H
#include "sm.h"
#include "sm3.h"
#include "chronometer.h"
#include "datatypes.h"
#include "hal.h"

STATE(sm4_init);
STATE(sm4_esquentando);
STATE(sm4_desligado);

extern StateMachine sm4;

#endif // SM4_H
