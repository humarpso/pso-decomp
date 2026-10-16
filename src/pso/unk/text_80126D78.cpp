#include "types.h"
#include "pso/item/TUnk_804A2E80.h"

extern "C" {
extern const f32 lbl_805DAD98;
extern const f32 lbl_805DAD9C;
void update_weapon__13TUnk_804A2E80Fv(u8 *arg0);
}

extern "C" {

void TUnk_804A2E80::update_weapon() {
    u8 *arg0 = (u8 *)this;
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
