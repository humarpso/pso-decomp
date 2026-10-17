#include "types.h"
#include "pso/item/TUnk_804A0DB0.h"
#include "pso/player/TObjPlayer.h"

extern const f32 lbl_805DACD8;
extern const f32 lbl_805DACDC;

extern "C" {

void TUnk_804A0DB0::update_weapon() {
    f32 temp_f2;
    temp_f2 = this->m_1fc;
    if (temp_f2 < lbl_805DACDC) {
        this->m_1fc = (f32) (temp_f2 + lbl_805DACD8);
        if (lbl_805DACDC <= this->m_1fc) {
            this->m_1fc = (f32) lbl_805DACDC;
        }
    }
}

}
