#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, int, int);
void TObjEnePanarms__sub_800E1E14(u8 *arg0);
}

extern "C" {

void TObjEnePanarms__sub_800E1E64(void* p);
s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);

void TObjEnePanarms__sub_800E1E14(u8 *arg0) {
    u8 *temp_r5;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (M2C_FIELD(arg0, u8 **, 0x39C) + 0x38));
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x39C);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r5, s32 *, 0x60);
    TObjEnePanarms__sub_800E1C98((void *) (arg0), (int) (1), (int) (temp_r5));
}

void TObjEnePanarms__sub_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
