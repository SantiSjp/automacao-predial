#ifndef CHRONOMETER_H
#define CHRONOMETER_H

#include "datatypes.h"

typedef uint32  chronometer;

void chronoStart(chronometer* c,uint32 dt);
boolean chronoIsFinished(chronometer* c);

#endif // CHRONOMETER_H
