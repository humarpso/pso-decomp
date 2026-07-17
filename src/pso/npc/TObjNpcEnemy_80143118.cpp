#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model__12TObjNpcEnemyFPv(u8 *arg0);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK TPlyPhotonChair__sub_80142770(s32);
M2C_UNK TPlyPhotonChair__sub_80142774();
M2C_UNK TObjPlayer__sub_801E2CCC(s32, void *, f32);
M2C_UNK TObjPlayer__sub_801E2DE4(s32, s32, f32);
M2C_UNK set_npc_enemy_param(s32);

extern s32 lbl_805D7710;

void draw_model__12TObjNpcEnemyFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142774();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        TObjPlayer__sub_801E2CCC(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_npc_enemy_param(lbl_805D7710);
        TObjPlayer__sub_801E2DE4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_npc_enemy_param(0);
    }
    reset_transform_state__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142770(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

}
