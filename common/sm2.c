#include "sm2.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm2;
chronometer sm2_chrono;

STATE(sm2_init){
    b1(FALSE);  // Desliga a bomba

    if(s22())
        NEXT_STATE(sm2_parado);
    else
        NEXT_STATE(sm2_enchendo);
}

STATE(sm2_enchendo){
    b1(TRUE);

    if(s22())
        NEXT_STATE(sm2_parado);
}

STATE(sm2_parado){
    if(JUST_ARRIVED){
        chronoStart(&sm2_chrono, 5000);
        b1(FALSE);
    }

    if(!s22() && chronoIsFinished(&sm2_chrono))
        NEXT_STATE(sm2_enchendo);
}
