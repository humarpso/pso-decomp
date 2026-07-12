#include "types.h"

extern "C" {

void TObjPlayer__sub_80122E24(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TObjPlayer__sub_80121200(void*);

void TObjPlayer__sub_80122E24(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
