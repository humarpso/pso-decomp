#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list_window__17TWindowOptionCtrlFv(void);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, s32);
M2C_UNK TWindowOptionCtrl__sub_8026C600(s32);
M2C_UNK TWindowOptionCtrl__sub_8026C610();
M2C_UNK fn_80265C30(s32);
M2C_UNK fn_80265DEC(s32, f32, f32);
M2C_UNK fn_802661D4(s32, M2C_UNK *, M2C_UNK, s32);
s32 fn_80266508(M2C_UNK, M2C_UNK);
M2C_UNK fn_8026CBA4(M2C_UNK);
M2C_UNK fn_8036A514(M2C_UNK);
s32 fn_8036A5B4(s32);
s32 fn_8036A620(s32);
s32 fn_8036A67C(s32);

extern M2C_UNK lbl_8044F4AC[];
extern const f32 lbl_805DD268;
extern const f32 lbl_805DD26C;

s32 create_list_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;
    s32 temp_r30;

    fn_8036A514(2);
    temp_r30 = fn_80266508(fn_8026CBA4(0xCF), 0x31);
    TWindowOptionCtrl__sub_8026C610();
    var_r31 = 0;
    do {
        if (fn_8036A620(var_r31) != 0) {
            if (fn_8036A5B4(var_r31) == 0) {
                fn_802661D4(temp_r30, lbl_8044F4AC, 0x26, var_r31);
            } else {
                TObjCityMainWarp__sub_80266354(temp_r30, fn_8036A67C(var_r31), 0x26, var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
    TWindowOptionCtrl__sub_8026C600(temp_r30);
    fn_80265DEC(temp_r30, lbl_805DD268, lbl_805DD26C);
    fn_80265C30(temp_r30);
    return temp_r30;
}

}
