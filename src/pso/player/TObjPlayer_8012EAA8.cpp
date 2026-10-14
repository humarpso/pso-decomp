#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_shifta_deband__10TObjPlayerFPv(void *arg0);
int s_red_blade_unfold(void* p);
int s_red_blade_fold(void* p);
void s_red_blade_equip_rolls(void* p);
void s_red_blade_turn_node(void* p);
void *init_variant_a__10TObjPlayerFPv(void *arg0);
int rotate_matrix_x(void*, void*);
int add_angle_clamped__10TObjPlayerFPvii(void*, int, int);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
int TObjPlayer__sub_8011E618(void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
void set_effect_state__10TObjPlayerFPvi(void *, int);
s32 create__10TTecDebandFiii(s32, s32, s32);
s32 create__9TTecSiftaFPvPvPv(s32, s32, s32);

void cast_shifta_deband__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (get_tp__10TObjPlayerFPv(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__10TTecDebandFiii(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__9TTecSiftaFPvPvPv(temp_r3_2, temp_r3_2 + 0x38, 2);
        }
        TObjPlayer__sub_8011E618(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}
int s_red_blade_unfold(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, 1820, 10922); }
int s_red_blade_fold(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, -1820, 0); }
void s_red_blade_equip_rolls(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }
void s_red_blade_turn_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_804A5F18[];

void *init_variant_a__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5F18;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1570);
    set_effect_state__10TObjPlayerFPvi(arg0, 2);
    return arg0;
}

}
