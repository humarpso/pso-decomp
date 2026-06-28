#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800ED384();
void fn_800ED408(void* p);
void fn_800ED418(void* p);
void fn_800ED47C(void* p);
void* fn_800ED488(void* p);
s32 fn_800ED490(void* p);

void fn_800ED3D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x10);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 4)) {
        fn_800ED384();
    }
}
void fn_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void fn_800ED418(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }
int fn_800ED428(void) { return 0; }
void fn_800ED47C(void* p) { *(s32*)((char*)p + 0x3d0) = 3; }
void* fn_800ED488(void* p) { return (char*)p + 0x2fc; }
s32 fn_800ED490(void* p) { return *(s32*)((char*)p + 0x404); }
int fn_800ED498(void) { return 0; }

}
