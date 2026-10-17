#include "types.h"
#include "pso/ui/TAdEnterSerialAccessGC.h"

void TAdEnterSerialAccessGC::set_active() { *(s32*)((char*)this + 0xb0) = 1; }
