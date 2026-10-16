#include "types.h"
#include "pso/item/TUnk_804A1098.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecGiBarta.h"

extern "C" {

s32 rand();
int rotate_matrix_x(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 roll_technique__11TItemWeaponFv(void *);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer::set_atp(s16 v) { *(s16*)((char*)this + 0x1cc) = v; }
void TObjPlayer::cast_tech_gibarta() {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon((s32)0, (s32)(&sp8)) != 0) {
            temp_r31 = *(void **)((s8 *)this + 0xF0);
            ((TTecGiBarta *)temp_r31)->create_ex((void *)(&sp8), (void *)(*(s32 *)((s8 *)temp_r31 + 0x60)), (void *)(get_tp()));
            roll_technique__11TItemWeaponFv(this);
        }
    } else {
        update_active_game_effect();
    }
}
void TObjPlayer::notify_container_if_mode1() { if (get_player_list__10TObjPlayerFv(this) == 1) { rotate_matrix_x((void*)0, *(void**)((char*)this + 0x1f8)); } }

extern f32 lbl_805DACF0;
extern f32 lbl_805DACF4;

void TObjPlayer::update_state_1fc() {
    if ((s32) this->m_1fc == 3) {
        this->m_1fc = 1;
    }
    if (((s32) this->m_1fc == 0) && ((lbl_805DACF0 * (f32) rand()) < lbl_805DACF4)) {
        this->m_1fc = 2;
    }
}

void TUnk_804A1098::update_attack() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        *(s32 *)((s8 *)this + 0x1FC) = 2;
    }
}

}
