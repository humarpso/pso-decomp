#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__vt13(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 TObjPlayer__sub_8001925C(s32);
s16 TObjPlayer__sub_80019264(s32);
s16 fn_80255DF4(s32);
s16 fn_80255DFC(s32);
s16 fn_80255E04(s32);

void TWindowSubStatusDisp__vt13(void *arg0) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) fn_80255E04(temp_r3);
        temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) TObjPlayer__sub_8001925C(temp_r3);
        temp_r31_3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        M2C_FIELD(temp_r31_3, s32 *, 0x20) = (s32) TObjPlayer__sub_80019264(temp_r3);
        temp_r31_4 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x14);
        M2C_FIELD(temp_r31_4, s32 *, 0x20) = (s32) fn_80255DFC(temp_r3);
        temp_r31_5 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x1A);
        M2C_FIELD(temp_r31_5, s32 *, 0x20) = (s32) fn_80255DF4(temp_r3);
    }
}

}
