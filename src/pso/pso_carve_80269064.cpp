#include "types.h"

extern "C" {

s32 fn_80269064(void* p);
int fn_8026906C(void* p);

s32 fn_80269064(void* p) { return *(s32*)((char*)p + 0x18); }
int fn_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
int fn_80269078(void) { return 0; }
int fn_802690B4(void) { return 0; }
int fn_80269100(void) { return 0; }
int fn_80269130(void) { return 0; }

}
