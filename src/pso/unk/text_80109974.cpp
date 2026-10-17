#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Vec_80109A30 { f32 x, y, z; };

extern "C" {
void *__ct__17TItemEffNeedlePosFv(void *, s32, void *, Vec_80109A30 *, Vec_80109A30 *);
void *__nw__7TObjectFUl(u32);
void subtract_vector(Vec_80109A30 *, Vec_80109A30 *);
void spawn_needle_wall_impact(s32 arg0, void *arg1, Vec_80109A30 *arg2, Vec_80109A30 *arg3);
void spawn_needle_wall_impact(s32 arg0, void *arg1, Vec_80109A30 *arg2, Vec_80109A30 *pos) {
    void *var_r31;
    if ((arg0 != 0) && (arg2 != NULL) && (arg1 != NULL) && (pos != NULL)) {
        Vec_80109A30 v = *pos;
        subtract_vector(&v, arg2);
        var_r31 = __nw__7TObjectFUl(0x50);
        if (var_r31 != NULL) {
            var_r31 = __ct__17TItemEffNeedlePosFv(var_r31, arg0, arg1, pos, &v);
        }
        if (var_r31 != NULL) {
            *(s32 *)((s8 *)var_r31 + 0x3C) = *(s32 *)((s8 *)arg1 + 0x188);
            *(s32 *)((s8 *)var_r31 + 0x40) = ((TObjPlayer *)arg1)->get_entity_id();
        }
    }
}

}
