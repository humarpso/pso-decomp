#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8016F1C0___vt__10TOMineDisp {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK TPhotonMagicSquare__sub_801A2640();
extern RecoveredGlobal_8016F1C0___vt__10TOMineDisp __vt__10TOMineDisp;
extern s32 lbl_805D3084;
extern const f32 lbl_805DB85C;
u8 *TOMineDisp__ct(u8 *arg0, M2C_UNK arg1, s16 arg2);
}

extern "C" {

void TOMineTrap__vt81(s32 arg0);
u32 TOMineTrapDisp__ct(u32, s32, u16, s32);
s32 get_trap_type__10TOMineTrapFPv(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_8016F1C0___vt__10TOMineDisp_size[sizeof(RecoveredGlobal_8016F1C0___vt__10TOMineDisp) == 0x34 ? 1 : -1];
u8 *TOMineDisp__ct(u8 *arg0, M2C_UNK arg1, s16 arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TOMineDisp.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3084;
    M2C_FIELD(arg0, s16 *, 0xA8) = arg2;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DB85C;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) lbl_805DB85C;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DB85C;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) lbl_805DB85C;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

void TOMineTrap__vt81(s32 arg0) {
    u32 var_r31;
    u16 var_r30;

    if (is_split_screen() == 0) {
        var_r31 = __nw__7TObjectFUl(0xB0);
        if (var_r31 != 0U) {
            var_r31 = TOMineTrapDisp__ct(var_r31, arg0, (u16) lbl_805D53A0, get_trap_type__10TOMineTrapFPv(arg0));
        }
        if (var_r31 != 0U) {
            VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
            VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
        }
    } else {
        for (var_r30 = 0; var_r30 != 4; var_r30++) {
            var_r31 = __nw__7TObjectFUl(0xB0);
            if (var_r31 != 0U) {
                var_r31 = TOMineTrapDisp__ct(var_r31, arg0, var_r30, get_trap_type__10TOMineTrapFPv(arg0));
            }
            if (var_r31 != 0U) {
                VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
                VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
            }
        }
    }
}

}
