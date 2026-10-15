#include "types.h"

extern "C" {

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void init_collision_body_parts(void *, void *, void *);
void construct_collider_proxy__10TObjPlayerFPv(void *);

extern s32 collision_body_vtable[];

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    construct_collider_proxy__10TObjPlayerFPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = collision_body_vtable;
    init_collision_body_parts(arg0, arg3, arg4);
    *(void **)((s8 *)arg0 + 0xAC) = arg2;
    return arg0;
}

}
