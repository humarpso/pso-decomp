#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_game_effect_mode__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK launch_rare_weapon_special__10TObjPlayerFv(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);

extern f32 lbl_805DACC0;

void update_game_effect_mode__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DACC0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
