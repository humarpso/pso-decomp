#include "types.h"

struct Obj_803631E8 {
    u8 pad0[0x10]; s32 i10; u8 pad14[0x2C]; u32 flags; s32 i44; u8 pad48[4]; f32 f4C; u8 pad50[0x10]; u8 v60[0x10]; void *fn70;
};

struct Src_803631E8 { u8 pad[0x188]; s32 i188; };

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
void forward_item_effect_callback__10TObjPlayerFll();
extern const f32 lbl_805E026C;
void s_rank_launcher_collider_block(Src_803631E8 *arg0, Obj_803631E8 *arg1);
}

extern "C" {

void s_rank_launcher_slide_node(void *arg0);
void s_rank_launcher_marker(s32 arg0);
s32 spawn_particle_effect(s32 *, s32);
s32 spawn_light_task__10TObjPlayerFv(s32);
s32 fire_shot_at_target__11TItemWeaponFv(s32, s32 *, s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 draw_status_icon__10TObjPlayerFl(s32, s32 *);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805E0268;

void s_rank_launcher_slide_node(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805E0268, *(f32 *)((s8 *)arg0 + 0x1FC), lbl_805E0268);
    }
}

void s_rank_launcher_collider_block(Src_803631E8 *arg0, Obj_803631E8 *arg1) {
    u8 sp8[16];
    arg1->flags |= 0x39C;
    get_weapon_color__11TItemWeaponFPv(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->i44 = arg0->i188;
    arg1->i10 = 4;
    arg1->f4C = lbl_805E026C;
    arg1->fn70 = (void *)forward_item_effect_callback__10TObjPlayerFll;
}

void s_rank_launcher_marker(s32 arg0) {
    s32 sp8;

    draw_status_icon__10TObjPlayerFl(arg0, &sp8);
    spawn_particle_effect(&sp8, 9);
    spawn_light_task__10TObjPlayerFv(arg0);
    fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, 0, 0);
}

}
