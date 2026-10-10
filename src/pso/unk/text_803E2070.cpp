#include "types.h"
extern "C" {
extern const f32 lbl_805E1050;
extern const f32 lbl_805E1054;
void fn_803E1FC8(u32 c);
void set_scene_fog_distances(f32 farg0, f32 farg1);
void set_scene_fog_type(s32 x);
void set_effect_active__10TObjPlayerFv(void);
void apply_scene_fog(void);
void reset_scene_fog(void);
}

extern "C" {

#pragma push
#pragma scheduling off
void reset_scene_fog(void) {
    fn_803E1FC8(0xFFFFFFFF);
    set_scene_fog_distances(lbl_805E1050, lbl_805E1054);
    set_scene_fog_type(2);
    set_effect_active__10TObjPlayerFv();
    apply_scene_fog();
}
#pragma pop

}
