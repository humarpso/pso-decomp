#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_803631E8 {
    u8 pad0[0x10]; s32 i10; u8 pad14[0x2C]; u32 flags; s32 i44; u8 pad48[4]; f32 f4C; u8 pad50[0x10]; u8 v60[0x10]; void *fn70;
};

struct Src_803631E8 { u8 pad[0x188]; s32 i188; };

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
void TObjPlayer__sub_8010941C();
extern const f32 lbl_805E026C;
void TItemEffectWeapon__sub_803631E8(Src_803631E8 *arg0, Obj_803631E8 *arg1);
}

extern "C" {

void play_effect_sound__17TItemEffectWeaponFPv(void *arg0);
void send_player_load__17TItemEffectWeaponFi(s32 arg0);
M2C_UNK spawn_particle_effect(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK fire_shot_at_target__11TItemWeaponFv(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(s32, M2C_UNK *);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805E0268;

void play_effect_sound__17TItemEffectWeaponFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805E0268, M2C_FIELD(arg0, f32 *, 0x1FC), lbl_805E0268);
    }
}

void TItemEffectWeapon__sub_803631E8(Src_803631E8 *arg0, Obj_803631E8 *arg1) {
    u8 sp8[16];
    arg1->flags |= 0x39C;
    get_weapon_color__11TItemWeaponFPv(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->i44 = arg0->i188;
    arg1->i10 = 4;
    arg1->f4C = lbl_805E026C;
    arg1->fn70 = (void *)TObjPlayer__sub_8010941C;
}

void send_player_load__17TItemEffectWeaponFi(s32 arg0) {
    M2C_UNK sp8;

    draw_status_icon__10TObjPlayerFPvi(arg0, &sp8);
    spawn_particle_effect(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, 0, 0);
}

}
