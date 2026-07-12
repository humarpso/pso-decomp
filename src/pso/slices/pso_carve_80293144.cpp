#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_802925C4(void *);
u32 TLobby__sub_802930C8();
M2C_UNK TObjPlayer__sub_802C3D38(u32, u32);
extern s32 lbl_80464E58[];
extern u32 lbl_805D6580;
extern s32 lbl_805D6584;
extern s32 lbl_805D6588;

void setup_split_screen(void) {
    u32 var_r31;
    u32 temp_r30;
    u32 temp_r4;

    lbl_805D6588 = 1;
    lbl_805D6584 = 0;
    if ((u32) lbl_805D6580 != 0U) {
        lbl_805D6588 = 0;
        return;
    }
    if (is_split_screen() == 0) {
        lbl_805D6588 = 0;
        return;
    }
    if ((s32) lbl_805D6588 != 0) {
        lbl_805D6580 = TLobby__sub_802930C8();
        lbl_805D6584 = 1;
        lbl_805D6588 = 0;
        TLobby__sub_802925C4(lbl_80464E58);
        var_r31 = 0U;
        do {
            temp_r30 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
            temp_r4 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
            if ((temp_r30 != 0U) && (temp_r4 != 0U)) {
                TObjPlayer__sub_802C3D38(temp_r30, temp_r4);
            }
            var_r31 += 1;
        } while (var_r31 != 4U);
    }
}

}
