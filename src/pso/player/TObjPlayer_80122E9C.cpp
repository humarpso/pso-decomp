#include "types.h"

extern "C" {

void approach_field200_max__10TObjPlayerFPv(void *arg0);

extern const f32 lbl_805DACFC;
extern const f32 lbl_805DAD00;

void approach_field200_max__10TObjPlayerFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg0 + 0x200);
    if (temp_f2 < lbl_805DAD00) {
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) (temp_f2 + lbl_805DACFC);
        if (lbl_805DAD00 < *(f32 *)((s8 *)arg0 + 0x200)) {
            *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DAD00;
        }
        temp_f0 = *(f32 *)((s8 *)arg0 + 0x200);
        *(f32 *)((s8 *)arg0 + 0x1FC) = temp_f0;
        *(f32 *)((s8 *)arg0 + 0x1F8) = temp_f0;
    }
}

}
