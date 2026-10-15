#include "types.h"

extern "C" {
s32 draw_ui_sprite(f32, f32);
extern const f32 lbl_805DD964;
void draw_default_sprite__12TChCrEffWallFv(void);
}

extern "C" {

#pragma push
#pragma fp_contract on
void draw_default_sprite__12TChCrEffWallFv(void) {
    f32 unused;
    draw_ui_sprite(unused, lbl_805DD964);
}
#pragma pop

}
