#include "types.h"

extern "C" {

int fn_80121200(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void fn_8012B618(void* p);
void fn_8012B658(void* p);

void fn_8012B618(void* p) { if (fn_80121200(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1f8)); } }
void fn_8012B658(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }

}
