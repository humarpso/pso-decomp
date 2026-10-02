#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Sp8Type_80123524 { s32 a; s32 b; s32 c; s32 d; };

extern "C" {

void draw_mag__10TObjPlayerFPv(void *arg0);
void try_spawn_cane_effect__10TObjPlayerFi(s32 arg0);
void update_pulse__10TObjPlayerFPv(void *arg0);
s32 get_flag_40__8TItemMagFPv();
M2C_UNK TOHangerMachine01__sub_803D9C00(Sp8Type_80123524 *);
M2C_UNK draw_ginja_object(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C();
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, Sp8Type_80123524 *, s32);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK, void *);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv(s32);
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();

extern s32 some_id_805c6f74;

void draw_mag__10TObjPlayerFPv(void *arg0) {
    Sp8Type_80123524 sp8;
    s32 temp_r3;
    s32 temp_r6;
    void *temp_r5;
    void *temp_r31;
    void *temp_r30;
    void *temp_r29;

    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (get_flag_40__8TItemMagFPv() == 0)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0xF4);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x2C);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 8);
        temp_r30 = M2C_FIELD(temp_r31, void **, 0x2C);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 8);
        temp_r29 = M2C_FIELD(temp_r30, void **, 0x30);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 8);
        TObjPlayer__sub_80120BBC(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFF7);
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFF7);
        TObjPlayer__sub_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80364028();
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 1);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) & 0xFFFFFFFD);
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x1F8);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r29, s32 *, 0x18) - temp_r6);
        if (draw_icon__10TObjPlayerFPvii(arg0, 1, &sp8, temp_r6) != 0) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&sp8);
            rotate_matrix_y(0, M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60));
            draw_ginja_object(temp_r31);
            pop_matrix();
        }
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFE);
        M2C_FIELD(temp_r30, s32 *, 0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0) | 2);
        M2C_FIELD(temp_r30, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x1F8));
        M2C_FIELD(temp_r29, s32 *, 0) = (s32) (M2C_FIELD(temp_r29, s32 *, 0) | 2);
        temp_r3 = M2C_FIELD(temp_r29, s32 *, 0x18);
        M2C_FIELD(temp_r29, s32 *, 0x18) = (s32) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x1F8));
        warn_if_gauge_low__10TObjPlayerFv(temp_r3);
        TObjPlayer__sub_8036414C();
    }
}

extern s32 tl_05;

void try_spawn_cane_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

void update_pulse__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) >= 0x1555) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = 0x1555;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
}

}
