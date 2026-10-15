#include "types.h"

extern "C" {

void *destroy_enemy_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 collision_body_vtable[];

void *destroy_enemy_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = collision_body_vtable;
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
