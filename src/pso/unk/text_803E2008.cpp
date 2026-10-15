#include "types.h"

extern "C" {

void set_scene_fog_type(s32 arg0);
struct G_803E2010 { u8 pad[0x44]; f32 f44; f32 f48; };
extern G_803E2010 scene_projection_state;
extern f32 scene_fog_end_distance;
extern f32 lbl_805D77C0;
extern u32 lbl_805D77C4;
extern s8 scene_fog_enable_flag;
typedef struct { u8 r, g, b, a; } Col_803E2010;
void Dolphin_GXSetFog(s32, f32, f32, f32, f32, Col_803E2010);
void apply_scene_fog(void);

extern s32 scene_fog_type;

void set_scene_fog_type(s32 arg0) {
    scene_fog_type = arg0;
}

void apply_scene_fog(void) {
    s32 type;
    if (scene_fog_enable_flag != 0) {
        type = scene_fog_type;
    } else {
        type = 0;
    }
    Dolphin_GXSetFog(type, lbl_805D77C0, scene_fog_end_distance, scene_projection_state.f44, scene_projection_state.f48, *(Col_803E2010 *)&lbl_805D77C4);
}

}
