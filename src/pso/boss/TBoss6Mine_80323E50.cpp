#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Mine__sub_80323E50(void *arg0);
void TBoss6Mine__sub_80323E68(void* a0);
void TBoss6Mine__sub_80323E80(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);

void TBoss6Mine__sub_80323E50(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 7) {
        M2C_FIELD(arg0, s32 *, 0x380) = 7;
    }
}

    extern const float lbl_805DF584;
void TBoss6Mine__sub_80323E68(void* a0) { *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffffdff); *(float*)((char*)a0 + 0x3c8) = lbl_805DF584; }

void TBoss6Mine__sub_80323E80(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

}
