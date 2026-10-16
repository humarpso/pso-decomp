#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

extern const f32 lbl_805DACFC;
extern const f32 lbl_805DAD00;

void TObjPlayer::approach_field200_max() {
    f32 temp_f0;
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)this + 0x200);
    if (temp_f2 < lbl_805DAD00) {
        *(f32 *)((s8 *)this + 0x200) = (f32) (temp_f2 + lbl_805DACFC);
        if (lbl_805DAD00 < *(f32 *)((s8 *)this + 0x200)) {
            *(f32 *)((s8 *)this + 0x200) = (f32) lbl_805DAD00;
        }
        temp_f0 = *(f32 *)((s8 *)this + 0x200);
        *(f32 *)&this->m_1fc = temp_f0;
        *(f32 *)((s8 *)this + 0x1F8) = temp_f0;
    }
}

}
