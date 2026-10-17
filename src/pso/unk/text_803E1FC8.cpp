#include "types.h"
#include "pso/unk/text_803E1FC8.h"

struct Rgb_803E1FC8 { u8 r, g, b; };

extern f32 scene_fog_end_distance;
extern f32 scene_fog_start_distance;
extern Rgb_803E1FC8 scene_fog_color;

#pragma push
#pragma scheduling off
#pragma peephole off
extern "C" {
void fn_803E1FC8(u32 c) {
    scene_fog_color.r = (c & 0xFF000000) >> 24;
    scene_fog_color.g = (c & 0x00FF0000) >> 16;
    scene_fog_color.b = (c & 0x0000FF00) >> 8;
}
}
#pragma pop

void set_scene_fog_distances(f32 farg0, f32 farg1) {
    scene_fog_start_distance = farg0;
    scene_fog_end_distance = farg1;
}
