#include "types.h"
#include "pso/TAdPlayerLoadGC.h"

typedef struct A_802D6390 { u8 pad0[0x188]; s32 f188; } A_802D6390;

typedef struct B_802D6390 {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x40 - 0x14];
    u32 f40;
    s32 f44;
    u8 pad48[4];
    f32 f4C;
    u8 pad50[0x60 - 0x50];
    u8 v60[0x10];
    void *f70;
} B_802D6390;

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
extern u8 forward_item_effect_callback__10TObjPlayerFll[];
extern const f32 lbl_805DE7AC;
void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *arg0, B_802D6390 *arg1);
}

extern "C" {

s32 spawn_particle_effect(s32 *, s32);
s32 spawn_light_task__10TObjPlayerFv(s32);
s32 fire_shot_at_target__11TItemWeaponFv(s32, s32 *, s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 draw_status_icon__10TObjPlayerFl(s32, s32 *);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805DE7A8;

void TAdPlayerLoadGC::play_load_sound() {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805DE7A8, *(f32 *)((s8 *)this + 0x1F8), lbl_805DE7A8);
    }
}

void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *arg0, B_802D6390 *arg1) {
    u8 sp8[16];
    arg1->f40 |= 0x11C;
    get_weapon_color__11TItemWeaponFPv(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->f44 = arg0->f188;
    arg1->f10 = 4;
    arg1->f4C = lbl_805DE7AC;
    arg1->f70 = forward_item_effect_callback__10TObjPlayerFll;
}

void TAdPlayerLoadGC::send_player_load(s32 arg0) {
    s32 sp8;

    draw_status_icon__10TObjPlayerFl(arg0, &sp8);
    spawn_particle_effect(&sp8, 9);
    spawn_light_task__10TObjPlayerFv(arg0);
    fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, 0, 0);
}

}
