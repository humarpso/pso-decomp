#include "types.h"
#include "pso/TChCrEffWall.h"

extern "C" {
s32 draw_ui_sprite(f32, f32);
extern const f32 lbl_805DD964;
}

extern "C" {

#pragma push
#pragma fp_contract on
void TChCrEffWall::draw_default_sprite() {
    f32 unused;
    draw_ui_sprite(unused, lbl_805DD964);
}
#pragma pop

}
