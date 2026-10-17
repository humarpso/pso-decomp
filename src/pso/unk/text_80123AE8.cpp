#include "types.h"
#include "pso/item/TUnk_804A1D30.h"
#include "pso/player/TObjPlayer.h"

extern const f32 lbl_805DAD10;
extern const f32 lbl_805DAD14;

extern "C" {

void TUnk_804A1D30::update_idle() {
    TUnk_804A1D30 *self = this;
    if (lbl_805DAD10 < self->m_200) {
        self->m_200 -= lbl_805DAD14;
        if (self->m_200 < lbl_805DAD10) {
            self->m_200 = lbl_805DAD10;
        }
    }
}

}
