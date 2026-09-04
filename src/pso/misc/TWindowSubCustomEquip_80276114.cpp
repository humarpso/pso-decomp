#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 set_effect_enabled__10TObjPlayerFii(M2C_UNK, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 TWindowActionPalette__sub_801C1DE0(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 TWindowSubCustomEquip__sub_802760DC(void *, u8);

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r29;

    if ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = set_effect_enabled__10TObjPlayerFii(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        M2C_FIELD(arg1, s16 *, 0) = 0;
        M2C_FIELD(arg1, s16 *, 2) = 0;
        return;
    }
    temp_r31 = is_type_valid__21TWindowSubCustomEquipFPv(arg0, M2C_FIELD(arg0, u8 *, 0x62));
    temp_r3_2 = TWindowSubCustomEquip__sub_802760DC(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    M2C_FIELD(arg1, s16 *, 0) = TWindowActionPalette__sub_801C1DE0(temp_r29, temp_r31, temp_r3_2);
    M2C_FIELD(arg1, s16 *, 2) = TWindowActionPalette__sub_801C1D7C(temp_r29, temp_r31, temp_r3_2);
}

}
