#include "types.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/ui/TUnk_804E24F0.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/math/MatrixTransforms.h"
#include "pso/unk/text_80087278.h"
#include "pso/items/TItemWeapon.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/player/TObjPlayer.h"

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
void get_weapon_color__11TItemWeaponFPv(void *, void *);
extern u8 forward_item_effect_callback__10TObjPlayerFll[];
extern const f32 lbl_805DE7AC;
void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *arg0, B_802D6390 *arg1);

extern f32 lbl_805DE7A8;

void TAdPlayerLoadGC::play_load_sound() {
    if (TObjPlayer::get_player_list() == 1) {
        translate_matrix(0, lbl_805DE7A8, *(f32 *)((s8 *)this + 0x1F8), lbl_805DE7A8);
    }
}

void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *weapon, B_802D6390 *arg1) {
    u8 sp8[16];
    arg1->f40 |= 0x11C;
    get_weapon_color__11TItemWeaponFPv(sp8, weapon);
    ((TRaderMapCore *)(arg1->v60))->copy_vec4(sp8);
    arg1->f44 = weapon->f188;
    arg1->f10 = 4;
    arg1->f4C = lbl_805DE7AC;
    arg1->f70 = forward_item_effect_callback__10TObjPlayerFll;
}

void TUnk_804E24F0::emit_marker_effects() {
    s32 sp8;
    s32 arg0 = (s32)this;

    ((TObjPlayer *)arg0)->draw_status_icon((s32)&sp8);
    spawn_particle_effect(&sp8, 9);
    ((TItemWeapon *)arg0)->spawn_light_task();
    ((TItemWeapon *)arg0)->fire_shot_at_target(&sp8, 0, 0);
}

}
