#include "sm3.h"

StateMachine sm3;

STATE(sm3_init){
    v2(FALSE);

    if(s32() || !s21())
        NEXT_STATE(sm3_desligado);
    else
        NEXT_STATE(sm3_enchendo);
}

STATE(sm3_enchendo){
    if(!s32() || s21()){
        v2(TRUE);
    }

    if((s32()||!s21()) && IS_FINISHED)
        NEXT_STATE(sm3_desligado);
}

STATE(sm3_desligado){
    if((s32()||!s21())){

        START(3000)/*ChronoStart(&sm3_crono,3000)*/;
        v2(FALSE);
    }

    if((!s32()||s21()) && IS_FINISHED)
        NEXT_STATE(sm3_enchendo);
}
