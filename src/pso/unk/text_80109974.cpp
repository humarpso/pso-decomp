#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_80109A30 { f32 x, y, z; };

extern "C" {
void *__ct__17TItemEffNeedlePosFv(void *, s32, void *, Vec_80109A30 *, Vec_80109A30 *);
s32 get_entity_id__10TObjPlayerFPv(void *);
void *__nw__7TObjectFUl(u32);
void subtract_vector(Vec_80109A30 *, Vec_80109A30 *);
void spawn_needle_wall_impact(s32 arg0, void *arg1, Vec_80109A30 *arg2, Vec_80109A30 *arg3);
}

extern "C" {

void spawn_needle_wall_impact(s32 arg0, void *arg1, Vec_80109A30 *arg2, Vec_80109A30 *arg3) {
    void *var_r31;
    if ((arg0 != 0) && (arg2 != NULL) && (arg1 != NULL) && (arg3 != NULL)) {
        Vec_80109A30 v = *arg3;
        subtract_vector(&v, arg2);
        var_r31 = __nw__7TObjectFUl(0x50);
        if (var_r31 != NULL) {
            var_r31 = __ct__17TItemEffNeedlePosFv(var_r31, arg0, arg1, arg3, &v);
        }
        if (var_r31 != NULL) {
            M2C_FIELD(var_r31, s32 *, 0x3C) = M2C_FIELD(arg1, s32 *, 0x188);
            M2C_FIELD(var_r31, s32 *, 0x40) = get_entity_id__10TObjPlayerFPv(arg1);
        }
    }
}

}
