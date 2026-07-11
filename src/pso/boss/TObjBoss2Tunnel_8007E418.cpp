#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjBoss2Tunnel__sub_8007E418(u32 *arg0, s32 arg1);
s32 TObjBoss2Tunnel__sub_8007E44C(s32 arg0, void *arg1, void *arg2);
s32 TObjBoss2Tunnel__sub_8007E4E0(s32 arg0, void *arg1);
void TObjBoss2Tunnel__sub_8007E560(void* p, void* a1);
int TBoss4Zako__sub_803D8910(void*, void*);
int TObjBoss2Tunnel__sub_8007E7D8(void*, void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void *fn_8007A544(void *, M2C_UNK, f32);

s32 TObjBoss2Tunnel__sub_8007E418(u32 *arg0, s32 arg1) {
    u32 temp_r5;

    temp_r5 = *arg0;
    if ((s32)((temp_r5 >> 24) - arg1) < 0) {
        *arg0 = temp_r5 & 0xFFFFFF;
        return 1;
    }
    *arg0 = ((((temp_r5 >> 24) - arg1) << 24) & 0xFF000000) | (temp_r5 & 0xFFFFFF);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 TObjBoss2Tunnel__sub_8007E44C(s32 arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = fn_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        VecCopy__FP3VecPC3Vec(arg2, M2C_FIELD(temp_r3, s32 *, 4) + 0xC);
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 TObjBoss2Tunnel__sub_8007E4E0(s32 arg0, void *arg1) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = fn_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

void TObjBoss2Tunnel__sub_8007E560(void* p, void* a1) { TObjBoss2Tunnel__sub_8007E7D8(p, (char*)p + 0x8); TBoss4Zako__sub_803D8910(p, a1); }

}
