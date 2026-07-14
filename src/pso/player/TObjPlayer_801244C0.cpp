#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_held_item__10TObjPlayerFPv(void *arg0);
void init_armor__10TObjPlayerFPv(void *arg0);
s32 TItemMag__sub_80102C4C();
s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E618(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK, void *);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv(s32);
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK init_vtable__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

extern s32 some_id_805c6f74;

void draw_held_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r31;
    void *temp_r5;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (TItemMag__sub_80102C4C() == 0)) {
        temp_r5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x30);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x18);
        TObjPlayer__sub_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFE7);
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_80364198();
            some_id_805c6f74 &= 0xFFFFFFEF;
            get_mag_scale__10TObjPlayerFPv(arg0);
            TObjPlayer__sub_80364028();
            TOHangerMachine01__sub_803D9C00(&sp8);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x11);
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            begin_effect_render__13TParticleCtrlFv();
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(temp_r31, void **, 0x2C));
            end_effect_render__13TParticleCtrlFv();
            temp_r3 = M2C_FIELD(temp_r31, s32 *, 0);
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (temp_r3 & ~0x11);
            warn_if_gauge_low__10TObjPlayerFv(temp_r3);
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803D9B78();
        }
    }
}

void init_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x204) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            init_vtable__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
    TObjPlayer__sub_8011E618(arg0);
    TObjPlayer__sub_8011E618(arg0);
}

}
