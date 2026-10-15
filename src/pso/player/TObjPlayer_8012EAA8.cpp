#include "types.h"

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
int roll_technique__11TItemWeaponFv(void*);
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
            temp_r3 = *(s32 *)((s8 *)arg0 + 0xF0);
            create__10TTecDebandFiii(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = *(s32 *)((s8 *)arg0 + 0xF0);
            create__9TTecSiftaFPvPvPv(temp_r3_2, temp_r3_2 + 0x38, 2);
        }
        roll_technique__11TItemWeaponFv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}
int s_red_blade_unfold(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, 1820, 10922); }
int s_red_blade_fold(void* p) { return add_angle_clamped__10TObjPlayerFPvii((char*)p + 0x1f8, -1820, 0); }
void s_red_blade_equip_rolls(void* p) { roll_technique__11TItemWeaponFv(p); roll_technique__11TItemWeaponFv(p); }
void s_red_blade_turn_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern s32 lbl_804A5F18[];

void *init_variant_a__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5F18;
    *(u32 *)((s8 *)arg0 + 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1570);
    set_effect_state__10TObjPlayerFPvi(arg0, 2);
    return arg0;
}

}
