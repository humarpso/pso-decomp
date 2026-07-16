#include "types.h"

extern "C" {

void TObjPlayer__sub_80049A0C(void* p);

void TObjPlayer__sub_80049A0C(void* p) { *(u32*)((char*)p + 0x388) &= 0xffefffff; }

}
