#include "sm4.h"
#include "sm3.h"

StateMachine sm4;

STATE(sm4_init){
    resistencia(FALSE);
    if(s31() && (sensor_temp() < 50))
        NEXT_STATE(sm4_esquentando);
    else
        NEXT_STATE(sm4_desligado);
}

STATE(sm4_esquentando){
    if(s31() && (sensor_temp() < 49)){
        resistencia(TRUE);
    }
    if(!s31()||!(sensor_temp() < 49))
        NEXT_STATE(sm4_desligado);
}

STATE(sm4_desligado){
    if(!s31()||!(sensor_temp() < 51)){
        resistencia(FALSE);
    }
    if(s31() && (sensor_temp() < 51))
        NEXT_STATE(sm4_esquentando);
}
