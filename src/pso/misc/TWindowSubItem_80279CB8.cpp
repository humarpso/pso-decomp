#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3);
void TWindowSubItem__sub_80279D50(s32 arg0, s32 arg1);
s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, s32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
M2C_UNK TWindowInputNumber__sub_80256138(s32, f32);
M2C_UNK TWindowInputNumber__sub_80256170(s32, s32);
M2C_UNK TWindowSubItem__sub_8027A9E4(s32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
s32 fn_80203418();
s32 fn_802034EC(s32);
M2C_UNK fn_80244D2C(s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
M2C_UNK fn_802661D4(s32, s32, M2C_UNK, s32);
s32 fn_8026CBB8(M2C_UNK);

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = (u32)__cntlzw(4 - (arg3 & 0xF)) >> 5;
    temp_r31 = temp_r3 + 4;
    if ((fn_802034EC(temp_r3) == 0) || (fn_80203418() != 0)) {
        fn_802661D4((s32)(arg2), (s32)(fn_80132F2C(0x10, 0xF)), (M2C_UNK)(6), (s32)(temp_r31));
        return;
    }
    TObjCityMainWarp__sub_80266354((s32)(arg2), (s32)(fn_80132F2C(0x10, 0xF)), (M2C_UNK)(0x26), (s32)(temp_r31));
}

void TWindowSubItem__sub_80279D50(s32 arg0, s32 arg1) {
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        fn_802661D4((s32)(arg1), (s32)(TWindowSubStatusDisp__sub_80077760(0x5F)), (M2C_UNK)(6), (s32)(6));
        return;
    }
    TObjCityMainWarp__sub_80266354((s32)(arg1), (s32)(TWindowSubStatusDisp__sub_80077760(0x5F)), (M2C_UNK)(6), (s32)(6));
}

extern const f32 lbl_805DD630;

s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, fn_8026CBB8(5), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x24));
    }
    TWindowInputNumber__sub_80256170(var_r31, TWindowSubStatusDisp__sub_80077760(0x28));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 3);
    fn_80244D2C(var_r31);
    TWindowInputNumber__sub_80256138(var_r31, lbl_805DD630);
    TWindowSubItem__sub_8027A9E4(var_r31);
    return var_r31;
}

}
