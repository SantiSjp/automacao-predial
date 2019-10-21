#include "sm1.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm1;
chronometer sm1_chrono;

STATE(sm1_init){
    v1(FALSE);  // Desliga a valvula

    if(s12())
        NEXT_STATE(sm1_parado);
    else
        NEXT_STATE(sm1_enchendo);
}

STATE(sm1_enchendo){
    v1(TRUE);

    if(s12())
        NEXT_STATE(sm1_parado);
}

STATE(sm1_parado){
    if(JUST_ARRIVED){
        chronoStart(&sm1_chrono, 5000);
        v1(FALSE);
    }

    if(!s12() && chronoIsFinished(&sm1_chrono))
        NEXT_STATE(sm1_enchendo);
}
