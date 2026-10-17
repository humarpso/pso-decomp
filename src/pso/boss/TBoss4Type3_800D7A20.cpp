#include "types.h"
#include "pso/boss/TBoss4Type3.h"

void TBoss4Type3::reset_timer() { *(s32*)((char*)this + 0x1c) = 0; }
