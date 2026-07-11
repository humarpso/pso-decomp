#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801B0EE8();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK copy_card_window_data();
M2C_UNK fn_80200470();
M2C_UNK fn_802010E8();
M2C_UNK fn_80202BB8(M2C_UNK);
s32 fn_80203284();
M2C_UNK fn_80242D2C();
M2C_UNK fn_8028DC14();
M2C_UNK fn_802C4348();
extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 fn_801FF464(void) {
    fn_80242D2C();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (fn_801B0EE8() == 0) && (fn_80203284() != 1)) {
            fn_802C4348();
            fn_8028DC14();
        }
        fn_80202BB8(3);
        fn_802010E8();
        copy_card_window_data();
        fn_80200470();
    }
    return 0xFFFF0000;
}

}
