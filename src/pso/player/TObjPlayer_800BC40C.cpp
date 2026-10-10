#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_enemy_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK collision_body_vtable[];

void *destroy_enemy_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = collision_body_vtable;
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
