#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EAA8();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
extern s32 lbl_805D53A0;

void handle_6xB2_play_sound_from_player(void *arg0) {
    s32 temp_r3;

    fn_8007EAA8();
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == TOKeyMachine01__sub_802034A8()) {
        if (M2C_FIELD(arg0, s16 *, 6) == 0xFFFF) {
            TBoss3Volopt__sub_8022675C(M2C_FIELD(arg0, s32 *, 8), 0, 0, 0);
            return;
        }
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (temp_r3 != 0) {
            TBoss3Volopt__sub_8022675C(M2C_FIELD(arg0, s32 *, 8), temp_r3 + 0x38, 0, 0);
        }
    }
}

}
