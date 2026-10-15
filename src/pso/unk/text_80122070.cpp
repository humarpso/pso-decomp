#include "types.h"

extern "C" {
extern const f32 lbl_805DACD8;
extern const f32 lbl_805DACDC;
void ramp_up_field_1fc__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void ramp_up_field_1fc__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f2;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x1FC);
    if (temp_f2 < lbl_805DACDC) {
        *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) (temp_f2 + lbl_805DACD8);
        if (lbl_805DACDC <= *(f32 *)((s8 *)arg0 + 0x1FC)) {
            *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) lbl_805DACDC;
        }
    }
}

}
