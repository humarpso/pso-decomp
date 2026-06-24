#include "types.h"

extern "C" {

void fn_80049A0C(void* p);

void fn_80049A0C(void* p) { *(u32*)((char*)p + 0x388) &= 0xffefffff; }

}
