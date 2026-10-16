#include "types.h"
#include "pso/item/TUnk_804A2E80.h"

extern "C" {
extern const f32 lbl_805DAD98;
extern const f32 lbl_805DAD9C;
}

extern "C" {

void TUnk_804A2E80::update_weapon() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f2;
    temp_f2 = this->m_1fc;
    if (temp_f2 < lbl_805DAD9C) {
        this->m_1fc = (f32) (temp_f2 + lbl_805DAD98);
        if (lbl_805DAD9C <= this->m_1fc) {
            this->m_1fc = (f32) lbl_805DAD9C;
        }
    }
}

}
