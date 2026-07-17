#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200470();
M2C_UNK TAdSinglePlyChrSelectGC__sub_802010E8();
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 fn_80203284();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
M2C_UNK TObjPlayer__sub_802C4348();

M2C_UNK copy_card_window_data();
extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 init__23TAdSinglePlyChrSelectGCFv(void) {
    init_slots__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (is_technique_ready__8TTecCtrlFv() == 0) && (fn_80203284() != 1)) {
            TObjPlayer__sub_802C4348();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
        }
        clear_flags__23TAdSinglePlyChrSelectGCFi(3);
        TAdSinglePlyChrSelectGC__sub_802010E8();
        copy_card_window_data();
        TAdSinglePlyChrSelectGC__sub_80200470();
    }
    return 0xFFFF0000;
}

}
