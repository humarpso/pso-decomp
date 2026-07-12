#include "types.h"

extern "C" {

void TBoss4Type2__sub_80053190(void* p);
void TBoss4Type2__sub_800531BC(void* p);
int check_state_transition__11TBoss4Type2FPv(void*);

void TBoss4Type2__sub_80053190(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
