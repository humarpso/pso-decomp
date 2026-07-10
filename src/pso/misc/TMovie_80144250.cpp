#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy__6TMovieFPvPv(void* p, void* q);
void TMovie__sub_801442D4(void *arg0);
M2C_UNK fn_80084614();
M2C_UNK xfree__FPv(void *);

void copy__6TMovieFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(u32*)((char*)p + 0x20) = *(u32*)((char*)q + 0x20); *(u32*)((char*)p + 0x24) = *(u32*)((char*)q + 0x24); *(u32*)((char*)p + 0x28) = *(u32*)((char*)q + 0x28); *(u32*)((char*)p + 0x2c) = *(u32*)((char*)q + 0x2c); *(u32*)((char*)p + 0x30) = *(u32*)((char*)q + 0x30); *(u32*)((char*)p + 0x34) = *(u32*)((char*)q + 0x34); *(u32*)((char*)p + 0x38) = *(u32*)((char*)q + 0x38); *(u32*)((char*)p + 0x3c) = *(u32*)((char*)q + 0x3c); }

extern M2C_UNK (*lbl_805D6B2C)();

void TMovie__sub_801442D4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x9C) != 0U) {
        xfree__FPv(M2C_FIELD(arg0, void **, 0x9C));
        M2C_FIELD(arg0, u32 *, 0x9C) = 0U;
    }
    lbl_805D6B2C();
    fn_80084614();
}

}
