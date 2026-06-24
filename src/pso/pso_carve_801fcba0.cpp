#include "types.h"

extern "C" {

void fn_801FCCCC(void* p, s32 v);
s32 fn_801FCCD4(void* p);

int fn_801FCBA0(void) { return 0; }
int fn_801FCC18(void) { return 0; }
int fn_801FCCB4(void) { return 0; }
int fn_801FCCC0(void) { return 0; }
void fn_801FCCCC(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 fn_801FCCD4(void* p) { return *(s32*)((char*)p + 0x0); }
int fn_801FCCDC(void) { return 0; }
int fn_801FCD04(void) { return 0; }
int fn_801FCD3C(void) { return 0; }

}
