#include "types.h"

extern "C" {

void TObjPlayer__sub_8012B618(void* p);
void TObjPlayer__sub_8012B658(void* p);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjPlayer__sub_80121200(void*);

void TObjPlayer__sub_8012B618(void* p) { if (TObjPlayer__sub_80121200(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }
void TObjPlayer__sub_8012B658(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }

}
