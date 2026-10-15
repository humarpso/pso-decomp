#include "types.h"

extern "C" {
extern const f32 lbl_805DAD98;
extern const f32 lbl_805DAD9C;
void harisen_battle_fan_grow_fan(u8 *arg0);
}

extern "C" {

void harisen_battle_fan_grow_fan(u8 *arg0) {
    f32 temp_f2;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x1FC);
    if (temp_f2 < lbl_805DAD9C) {
        *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) (temp_f2 + lbl_805DAD98);
        if (lbl_805DAD9C <= *(f32 *)((s8 *)arg0 + 0x1FC)) {
            *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) lbl_805DAD9C;
        }
    }
}

}
