#include "types.h"
#include "pso/item/TUnk_804A1D30.h"
#include "pso/item/TItemEquipVariant_80120CF8.h"
#include "pso/item/TItemEquipVariant_80123B84.h"
#include "pso/player/TObjPlayer.h"

extern s32 lbl_804A1D30[];

void TUnk_804A1D30::update_idle() {
    TUnk_804A1D30 *self = this;
    if (0.3f < self->m_200) {
        self->m_200 -= 0.2f;
        if (self->m_200 < 0.3f) {
            self->m_200 = 0.3f;
        }
    }
}

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void TUnk_804A1D30::update_attack() {
    f32 temp_f2;

    temp_f2 = this->m_200;
    if (temp_f2 < 1.0f) {
        this->m_200 += 0.2f;
        if (1.0f < this->m_200) {
            this->m_200 = (f32) 1.0f;
        }
    }
}

void TObjPlayer::update_1f8_if_ready() { if (get_player_list__10TObjPlayerFv(this) == 0) { scale_current_matrix((char*)this + 0x1f8); } }

}

void *__dt__13TUnk_804A1D30Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1D30;
        __dt__11TItemWeaponFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

extern "C" {

int TItemWeapon__ct(void);
int set_weapon_trail_joints(void*, void*, void*, void*);

void*TObjPlayer::init_state() { TItemWeapon__ct(); *(int*)((char*)this + 0x18) = (int)lbl_804A1D30; set_weapon_trail_joints(this, (void*)0, (void*)3, (void*)2); set_weapon_trail_joints(this, (void*)1, (void*)4, (void*)5); *(float *)&this->unk_200 = 1.0f; *(float *)&this->m_1fc = 1.0f; *(float *)&this->unk_1F8 = 1.0f; return this; }

}
