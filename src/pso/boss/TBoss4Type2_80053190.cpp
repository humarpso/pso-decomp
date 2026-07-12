#include "types.h"

extern "C" {

void check_state_if_idle__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_800531BC(void* p);
int check_state_transition__11TBoss4Type2FPv(void*);

void check_state_if_idle__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
