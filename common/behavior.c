#include "behavior.h"
#include "hal.h"
#include "sm1.h"
#include "sm2.h"
#include "sm3.h"
#include "sm4.h"

void behavior(){
    InitHAL();
    INIT(sm1,sm1_init);
    INIT(sm2,sm2_init);
    INIT(sm3,sm3_init);
    INIT(sm4,sm4_init);
    for(;;){
        EXEC(sm1);
        EXEC(sm2);
        EXEC(sm3);
        EXEC(sm4);
    }
}
