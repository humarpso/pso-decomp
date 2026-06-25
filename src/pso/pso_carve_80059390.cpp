#include "types.h"

extern "C" {

int fn_800599F4(void*, void*, void*);
void fn_80059410(void* p);
void TBoss4Type3__vt0(void* p);

int fn_80059390(void) { return 0; }
int fn_800593DC(void) { return 0; }
void fn_80059410(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_800599F4(p, (void*)0, (void*)2); } }
void TBoss4Type3__vt0(void* p) { *(s32*)((char*)p + 0x398) = 147; }

}
