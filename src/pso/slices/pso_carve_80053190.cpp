#include "types.h"

extern "C" {

int TBoss4Type2__sub_8005354C(void*);
void fn_80053190(void* p);
void fn_800531BC(void* p);

void fn_80053190(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type2__sub_8005354C(p); } }
void fn_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
