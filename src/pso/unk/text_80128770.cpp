#include "types.h"
#include "pso/item/TUnk_804A3E20.h"

extern "C" {
extern const f32 lbl_805DADF0;
extern const f32 lbl_805DADF4;
}

extern "C" {

void TUnk_804A3E20::update_weapon() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f2;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x200);
    if (temp_f2 < lbl_805DADF4) {
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) (temp_f2 + lbl_805DADF0);
        if (lbl_805DADF4 <= *(f32 *)((s8 *)arg0 + 0x200)) {
            *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DADF4;
        }
    }
}

}
