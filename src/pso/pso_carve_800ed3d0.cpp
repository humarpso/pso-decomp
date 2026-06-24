#include "types.h"

extern "C" {

void fn_800ED408(void* p);
void fn_800ED418(void* p);
void fn_800ED47C(void* p);
void* fn_800ED488(void* p);
s32 fn_800ED490(void* p);

int fn_800ED3D0(void) { return 0; }
void fn_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void fn_800ED418(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }
int fn_800ED428(void) { return 0; }
void fn_800ED47C(void* p) { *(s32*)((char*)p + 0x3d0) = 3; }
void* fn_800ED488(void* p) { return (char*)p + 0x2fc; }
s32 fn_800ED490(void* p) { return *(s32*)((char*)p + 0x404); }
int fn_800ED498(void) { return 0; }

}
