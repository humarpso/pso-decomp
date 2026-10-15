#include "types.h"

struct Rgb_803E1FC8 { u8 r, g, b; };

extern "C" {
extern f32 scene_fog_end_distance;
extern f32 lbl_805D77C0;
void set_scene_fog_distances(f32 farg0, f32 farg1);
extern Rgb_803E1FC8 lbl_805D77C4;
void fn_803E1FC8(u32 c);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803E1FC8(u32 c) {
    lbl_805D77C4.r = (c & 0xFF000000) >> 24;
    lbl_805D77C4.g = (c & 0x00FF0000) >> 16;
    lbl_805D77C4.b = (c & 0x0000FF00) >> 8;
}
#pragma pop

void set_scene_fog_distances(f32 farg0, f32 farg1) {
    lbl_805D77C0 = farg0;
    scene_fog_end_distance = farg1;
}

}
