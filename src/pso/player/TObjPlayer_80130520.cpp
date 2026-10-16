#include "types.h"
#include "pso/item/TUnk_804A69DC.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_801305E8(void *arg0);
int rotate_matrix_x(void*, void*);
s32 advance_angle_wrap(void *, s32);
s32 update_trail_slot__11TItemWeaponFPvi(void *, s32);
s32 draw_weapon_model(void *);
int get_player_list__10TObjPlayerFv(void*);

void TObjPlayer::handle_container_state_3() { if (get_player_list__10TObjPlayerFv(this) == 3) { rotate_matrix_x((void*)0, *(void**)((char*)this + 0x1f8)); } }

void TObjPlayer::set_temp_flag10_and_update() {
    s32 *temp_r31;

    if ((u32) *(u32 *)((s8 *)this + 0xF0) != 0U) {
        temp_r31 = *(s32 **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(this->m_f4) + 0x2C)) + 0x30)) + 0x30);
        if ((s32) this->m_204 == 0) {
            *temp_r31 |= 0x10;
        }
        draw_weapon_model(this);
        update_trail_slot__11TItemWeaponFPvi(this, 0);
        if ((s32) this->m_204 == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void TObjPlayer__sub_801305E8(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1FC);
    if (temp_r4 > 0xCCC) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = (s32) (temp_r4 - 0xB6);
    }
}

void TObjPlayer::tick_meseta_counter() {
    s32 temp_r4;

    *(s32 *)((s8 *)this + 0x200) = (s32) (*(s32 *)((s8 *)this + 0x200) + 1);
    if (!(*(s32 *)((s8 *)this + 0x200) & 3)) {
        temp_r4 = this->m_1fc;
        if (temp_r4 < 0x3333) {
            this->m_1fc = (s32) (temp_r4 + 0xB6);
        }
    }
}

void TUnk_804A69DC::update_weapon() {
    u8 *arg0 = (u8 *)this;
    advance_angle_wrap(arg0 + 0x1F8, *(s32 *)((s8 *)arg0 + 0x1FC));
}

}
