#include "types.h"

extern "C" {

void *TObjPlayer__sub_8012192C(void *arg0, s16 arg1);
void cast_foie_effect__10TObjPlayerFPv(void *arg0);
void release_container_if_active__10TObjPlayerFPv(void* p);
void update_freeze_state__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80121ACC(void *arg0);
s32 rand();
int rotate_matrix_x(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 roll_technique__11TItemWeaponFv(void *);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
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

void cast_foie_effect__10TObjPlayerFPv(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = *(void **)((s8 *)arg0 + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, *(s32 *)((s8 *)temp_r31 + 0x60), get_tp__10TObjPlayerFPv(arg0));
            roll_technique__11TItemWeaponFv(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void release_container_if_active__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern s32 lbl_8043E868;
extern f32 lbl_805DACC8;
extern f32 lbl_805DACCC;

void update_freeze_state__10TObjPlayerFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 3) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = 1;
    }
    if (((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 0) && ((lbl_805DACC8 * (f32) rand()) < lbl_805DACCC)) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = 2;
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
