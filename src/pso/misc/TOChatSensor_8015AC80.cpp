#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_player_proximity__12TOChatSensorFPv(u8 *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);

extern s32 lbl_805D53A0;

void check_player_proximity__12TOChatSensorFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if (temp_r3 != 0U) {
        if (TObjPlayer__sub_80141CF8((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < M2C_FIELD(arg0, f32 *, 0x9C)) {
            M2C_FIELD(arg0, s32 *, 0xA0) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

}
