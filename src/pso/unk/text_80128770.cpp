#include "types.h"

extern "C" {
extern const f32 lbl_805DADF0;
extern const f32 lbl_805DADF4;
void s_rank_harisen_grow_fan(u8 *arg0);
}

extern "C" {

void s_rank_harisen_grow_fan(u8 *arg0) {
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
