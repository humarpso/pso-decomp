#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {

int TBoss8Dragon__sub_8005D700(void);

int TBoss8Dragon::get_flag_bit6() { return (*(u32*)((char*)this + 0x4c0) >> 6) & 0x1; }

}
