#include "types.h"

extern "C" {

int fn_800D1C40(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int fn_800D1C78(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void fn_800D1B0C(void* p, void* a1);
void fn_800D1B3C(void* p, void* a1);
void fn_800D1B6C(void* p);

void fn_800D1B0C(void* p, void* a1) { fn_800D1C78(a1, p, (char*)p + 0x4); }
void fn_800D1B3C(void* p, void* a1) { fn_800D1C40(a1, p, (char*)p + 0x4); }
void fn_800D1B6C(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int fn_800D1B7C(void) { return 0; }
void* fn_800D1BB8(void* p) { fn_800D1B6C(p); return p; }
int fn_800D1BE8(void) { return 0; }
int fn_800D1C0C(void) { return 0; }
int fn_800D1C40(void*, void*, void*) { return 0; }
int fn_800D1C78(void*, void*, void*) { return 0; }
int fn_800D1CBC(void) { return 0; }
int fn_800D1CF8(void) { return 0; }

}
