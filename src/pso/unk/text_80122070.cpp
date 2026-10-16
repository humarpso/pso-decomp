#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern const f32 lbl_805DACD8;
extern const f32 lbl_805DACDC;
}

extern "C" {

void TObjPlayer::ramp_up_field_1fc() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f2;
    temp_f2 = *(f32 *)&this->m_1fc;
    if (temp_f2 < lbl_805DACDC) {
        *(f32 *)&this->m_1fc = (f32) (temp_f2 + lbl_805DACD8);
        if (lbl_805DACDC <= *(f32 *)&this->m_1fc) {
            *(f32 *)&this->m_1fc = (f32) lbl_805DACDC;
        }
    }
}

}
