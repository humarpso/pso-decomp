#include "types.h"

struct Vec_8012327C { f32 x, y, z; };

extern "C" {
u8 * construct_twin_chakram(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_twin_chakram__10TObjPlayerFPv(u8 *arg0);
void draw_icon__10TObjPlayerFPvii(void *self, s32 kind, Vec_8012327C *out);
s32 spawn_particle_effect(Vec_8012327C *, s32);
extern const f32 lbl_805DAD08;
void spawn_particle_at_icon__10TObjPlayerFPv(void *self);
}

extern "C" {

u8 *create_twin_chakram__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_twin_chakram(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
void spawn_particle_at_icon__10TObjPlayerFPv(void *self) {
    Vec_8012327C v;
    draw_icon__10TObjPlayerFPvii(self, 2, &v);
    v.y -= lbl_805DAD08;
    spawn_particle_effect(&v, 0x1d2);
}

}
