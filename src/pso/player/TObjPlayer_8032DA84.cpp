#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fire_projectiles__10TObjPlayerFPv(void *arg0);
void *init_variant_2_dc28__10TObjPlayerFPv(void *arg0);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011EB84(void *, M2C_UNK *, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C(void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
s16 TObjPlayer__sub_801D2EA8(s32);

extern s32 tl_05;

void fire_projectiles__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;

    draw_icon__10TObjPlayerFPvii(arg0, 4, &sp8);
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (TObjPlayer__sub_8011F63C(arg0) == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

extern M2C_UNK lbl_804EDC28[];

void *init_variant_2_dc28__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

}
