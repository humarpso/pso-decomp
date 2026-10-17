#include "types.h"
#include "pso/item/TItemShootModel_dtor.h"
#include "pso/player/TObjPlayer_8012192C.h"
#include "pso/item/TUnk_804A0BC0.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecFoie.h"

extern "C" {

s32 rand();
int rotate_matrix_x(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 roll_technique__11TItemWeaponFv(void *);
int get_player_list__10TObjPlayerFv(void*);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804A0AA8[];

void *__dt__13TUnk_804A0AA8Fv(void *arg0, s16 arg1) {
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
    void *owner;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (draw_icon(0, (s32)(&sp8)) != 0) {
            owner = *(void * *)&this->unk_F0;
            TTecFoie::create((void *)owner, (void *)(&sp8), (void *)(*(s32 *)((s8 *)owner + 0x60)), (void *)(get_tp()));
            roll_technique__11TItemWeaponFv(this);
        }
    } else {
        update_active_game_effect();
    }
}

void TObjPlayer::release_container_if_active() { if (get_player_list__10TObjPlayerFv(this) == 1) { rotate_matrix_x((void*)0, *(void* *)&this->unk_1F8); } }

extern f32 lbl_805DACC8;
extern f32 lbl_805DACCC;

void TObjPlayer::update_freeze_state() {
    if ((s32) this->m_1fc == 3) {
        this->m_1fc = 1;
    }
    if (((s32) this->m_1fc == 0) && ((lbl_805DACC8 * (f32) rand()) < lbl_805DACCC)) {
        this->m_1fc = 2;
    }
}

void TUnk_804A0BC0::update_attack() {
    s32 temp_r0;

    temp_r0 = this->m_1fc;
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        this->m_1fc = 2;
    }
}

}
