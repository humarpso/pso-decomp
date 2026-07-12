#include "types.h"

extern "C" {

void TBoss4Type2__sub_80053190(void* p);
void TBoss4Type2__sub_800531BC(void* p);
int TBoss4Type2__sub_8005354C(void*);

void TBoss4Type2__sub_80053190(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type2__sub_8005354C(p); } }
void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
