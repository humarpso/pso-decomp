#include "types.h"
#include "pso/player/TUnk_804A5F18.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecDeband.h"
#include "pso/misc/TTecSifta.h"

extern "C" {

int s_red_blade_unfold(void* p);
void s_red_blade_equip_rolls(void* p);
void s_red_blade_turn_node(void* p);
int rotate_matrix_x(void*, void*);
int add_angle_clamped__10TObjPlayerFPlll(void*, int, int);
s32 is_mode_two_and_ready__10TObjPlayerFv();
int roll_technique__11TItemWeaponFv(void*);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer::cast_shifta_deband() {
    s32 temp_r3;
    s32 temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (get_tp() == 0) {
            temp_r3 = *(s32 *)((s8 *)this + 0xF0);
            TTecDeband::create(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = *(s32 *)((s8 *)this + 0xF0);
            TTecSifta::create((void *)temp_r3_2, (void *)(temp_r3_2 + 0x38), (void *)2);
        }
        roll_technique__11TItemWeaponFv(this);
        return;
    }
    update_active_game_effect();
}
int s_red_blade_unfold(void* p) { return add_angle_clamped__10TObjPlayerFPlll((char*)p + 0x1f8, 1820, 10922); }
void TUnk_804A5F18::update_attack() { add_angle_clamped__10TObjPlayerFPlll((char*)this + 0x1f8, -1820, 0); }
void s_red_blade_equip_rolls(void* p) { roll_technique__11TItemWeaponFv(p); roll_technique__11TItemWeaponFv(p); }
void s_red_blade_turn_node(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern s32 lbl_804A5F18[];

void *TObjPlayer::init_variant_a() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A5F18;
    *(u32 *)((s8 *)this + 0x1F8) = 10922;
    set_status_flags__10TObjPlayerFUl(this, 1570);
    set_effect_state(2);
    return this;
}

}
