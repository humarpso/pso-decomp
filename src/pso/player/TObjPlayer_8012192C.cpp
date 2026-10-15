#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1);
void TObjPlayer__sub_80121ACC(void *arg0);
s32 rand();
int rotate_matrix_x(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 roll_technique__11TItemWeaponFv(void *);
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 draw_icon__10TObjPlayerFll(void *, s32, s32 *);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

extern s32 lbl_804A0AA8[];

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0AA8;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer::cast_foie_effect() {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon__10TObjPlayerFll(this, 0, &sp8) != 0) {
            temp_r31 = *(void **)((s8 *)this + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, *(s32 *)((s8 *)temp_r31 + 0x60), get_tp__10TObjPlayerFv(this));
            roll_technique__11TItemWeaponFv(this);
        }
    } else {
        update_active_game_effect__10TObjPlayerFv(this);
    }
}

void TObjPlayer::release_container_if_active() { if (get_player_list__10TObjPlayerFv(this) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)this + 0x1f8)); } }

extern s32 lbl_8043E868;
extern f32 lbl_805DACC8;
extern f32 lbl_805DACCC;

void TObjPlayer::update_freeze_state() {
    if ((s32) *(s32 *)((s8 *)this + 0x1FC) == 3) {
        *(s32 *)((s8 *)this + 0x1FC) = 1;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1FC) == 0) && ((lbl_805DACC8 * (f32) rand()) < lbl_805DACCC)) {
        *(s32 *)((s8 *)this + 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80121ACC(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = 2;
    }
}

}
