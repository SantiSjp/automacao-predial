#include "chronometer.h"
#include "hal.h"

void chronoStart(chronometer* c,uint32 dt){
    *c = Now()+dt;
}

boolean chronoIsFinished(chronometer* c){
    return (Now() >= *c);
}
