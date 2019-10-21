#include "behavior.h"
#include "hal.h"
#include "sm1.h"
#include "sm2.h"

void behavior(){
    InitHAL();
    INIT(sm1,sm1_init);
    INIT(sm2,sm2_init);
    for(;;){
        EXEC(sm1);
        EXEC(sm2);
    }
}
