#include "types.h"
#include "pso/item/TUnk_804A1D30.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DAD14;
extern const f32 lbl_805DAD18;

void TUnk_804A1D30::update_attack() {
    f32 temp_f2;

    temp_f2 = this->m_200;
    if (temp_f2 < lbl_805DAD18) {
        this->m_200 = (f32) (temp_f2 + lbl_805DAD14);
        if (lbl_805DAD18 < this->m_200) {
            this->m_200 = (f32) lbl_805DAD18;
        }
    }
}

void TObjPlayer::update_1f8_if_ready() { if (get_player_list__10TObjPlayerFv(this) == 0) { scale_current_matrix((char*)this + 0x1f8); } }

}
