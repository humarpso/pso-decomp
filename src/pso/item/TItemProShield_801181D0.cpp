#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1);
s32 TItemMag__sub_80102C4C(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjPlayer__sub_800FFA88(u32, s32);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B78();

s32 obj_testFlags30(void *, M2C_UNK);
extern s32 some_id_805c6f74;

void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (obj_testFlags30(arg0, 0x08000000) == 0) && (TItemMag__sub_80102C4C(arg0) == 0)) {
        TObjPlayer__sub_800FFA88(M2C_FIELD(arg0, u32 *, 0xF0), arg1);
        TObjPlayer__sub_803D97F0();
        TObjPlayer__sub_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80364028();
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            begin_effect_render__13TParticleCtrlFv();
        }
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0xF4));
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            end_effect_render__13TParticleCtrlFv();
        }
        warn_if_gauge_low__10TObjPlayerFv();
        TObjPlayer__sub_8036414C();
        TObjPlayer__sub_803D9B78();
    }
}

}
