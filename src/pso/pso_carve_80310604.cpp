#include "types.h"

extern "C" {

int fn_80310604(void* p);
void fn_80310664(void* p);
int fn_803112AC(void*, int);

int fn_80310604(void* p) { return fn_803112AC(p, 0); }
int fn_80310628(void) { return 0; }
void fn_80310664(void* p) { *(s32*)((char*)p + 0x260) = 0; *(s32*)((char*)p + 0x290) = 0; }

}
