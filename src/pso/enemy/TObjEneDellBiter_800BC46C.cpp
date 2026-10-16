#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/enemy/TObjEneDellBiter.h"

extern "C" {

void init_collision_body_parts(void *, void *, void *);

extern s32 collision_body_vtable[];

void *TUnk_804928CC::init_instance(void *arg1, void *arg2, void *arg3, void *arg4) {
    construct_collider_proxy();
    *(s32 **)((s8 *)this + 0x18) = collision_body_vtable;
    init_collision_body_parts(this, arg3, arg4);
    *(void **)((s8 *)this + 0xAC) = arg2;
    return this;
}

}
