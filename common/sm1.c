#include "sm1.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm1;

STATE(sm1_init){
    v1(FALSE);  // Desliga a valvula

    if(s12())
        NEXT_STATE(sm1_parado);
    else
        NEXT_STATE(sm1_enchendo);
}

STATE(sm1_enchendo){
    if(JUST_ARRIVED){
        v1(TRUE);
    }
    if(s12())
        NEXT_STATE(sm1_parado);
}

STATE(sm1_parado){
    if(JUST_ARRIVED){
        START(5000); //chronoStart(&sm1_chrono, 5000);
        v1(FALSE);
    }

    if(!s12() && IS_FINISHED) // chronoIsFinished(&sm1_chrono)
        NEXT_STATE(sm1_enchendo);
}
