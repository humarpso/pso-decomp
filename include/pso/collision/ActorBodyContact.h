#ifndef PSO_COLLISION_ACTOR_BODY_CONTACT_H
#define PSO_COLLISION_ACTOR_BODY_CONTACT_H
#include "types.h"
extern "C" {
s32 resolve_actor_sphere_contact(u8* actor,s32 otherActor,s32 contactCollider);
void* find_actor_body_contact(u8* actor,u8* otherActor,f32 distanceSquaredLimit);
}
#endif
