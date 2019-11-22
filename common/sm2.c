#include "sm2.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm2;


STATE(sm2_init){
    b1(FALSE);  // Desliga a bomba

    if(s22() || !s11())
        NEXT_STATE(sm2_parado);
    else
        NEXT_STATE(sm2_enchendo);
}

STATE(sm2_enchendo){
    if(JUST_ARRIVED){
        b1(TRUE);
    }
    if(s22() || !s11())
        NEXT_STATE(sm2_parado);
}

STATE(sm2_parado){
    if(JUST_ARRIVED){
        START(3000); //chronoStart(&sm2_chrono, 5000);
        b1(FALSE);
    }

    if(!s22() && s11() && IS_FINISHED) // chronoIsFinished(&sm2_chrono)
        NEXT_STATE(sm2_enchendo);
}
