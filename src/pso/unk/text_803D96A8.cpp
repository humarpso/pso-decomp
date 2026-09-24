#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u32 lbl_805D7770;
extern u32 lbl_805D7774;
s32 TObjPlayer__sub_803D9B78(void);
extern u32 lbl_805D7770;
extern u32 lbl_805D7774;
s32 TCameraCtrl__sub_803D9858(s32 arg0);
f32 PSMTXConcat(int, int, int);
extern u32 lbl_805D7774;
void TObjPlayer__sub_803D9730(u32 arg0, u32 arg1);
f32 PSMTXConcat(int, int, int);
extern u32 lbl_805D7774;
void TCameraCtrl__sub_803D976C(u32 arg0, u32 arg1);
s32 TObjPlayer__sub_803DB244();
s32 TObjPlayer__sub_803D9E04(void);
void move_data__6TLobbyFv(void *, void *, int);
extern u32 lbl_805D7774;
extern u32 lbl_805D776C;
s32 TObjPlayer__sub_803D97F0(void *src);
void TObjPlayer__sub_803D9C60(u32 *p);
}

extern "C" {

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D9730(u32 arg0, u32 arg1) {
    u32 var_r3;
    u32 var_r4;
    var_r3 = arg0;
    var_r4 = arg1;
    if (var_r3 == 0U) {
        var_r3 = lbl_805D7774;
    }
    if (var_r4 == 0U) {
        var_r4 = lbl_805D7774;
    }
    PSMTXConcat((int) (var_r3), (int) (var_r4), (int) (var_r3));
}
#pragma pop

#pragma push
#pragma peephole off
#pragma fp_contract on
void TCameraCtrl__sub_803D976C(u32 arg0, u32 arg1) {
    u32 var_r4;
    u32 var_r5;
    var_r4 = arg1;
    if (arg0 == 0U) {
        var_r5 = lbl_805D7774;
    } else {
        var_r5 = arg0;
    }
    if (var_r4 == 0U) {
        var_r4 = lbl_805D7774;
    }
    PSMTXConcat((int) (var_r4), (int) (var_r5), (int) (var_r5));
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803D97F0(void *src) {
    u32 next = lbl_805D7774 + 0x30;
    if (next > lbl_805D776C) {
        return 0;
    }
    move_data__6TLobbyFv((void *)next, (src == 0) ? (void *)lbl_805D7774 : src, 0x30);
    lbl_805D7774 = next;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TCameraCtrl__sub_803D9858(s32 arg0) {
    u32 temp_r3;
    temp_r3 = lbl_805D7774 - (arg0 * 0x30);
    if (temp_r3 < (u32) lbl_805D7770) {
        return 0;
    }
    lbl_805D7774 = temp_r3;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803D9B78(void) {
    u32 temp_r3;
    temp_r3 = lbl_805D7774 - 0x30;
    if (temp_r3 < (u32) lbl_805D7770) {
        return 0;
    }
    lbl_805D7774 = temp_r3;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803D9C60(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

#pragma push
#pragma peephole off
s32 TObjPlayer__sub_803D9E04(void) {
    if (TObjPlayer__sub_803DB244() == 0) {
        return 1;
    }
    return -1;
}
#pragma pop

}
