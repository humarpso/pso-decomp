#include "types.h"
#include "pso/misc/TWindowLockOn.h"

extern "C" {

void set_param__12TObjEneLappyFl(void* p, s32 v);
int initialize_enemy_photon_effect(void* p);
int reset_photon_effect__12TBoss3VoloptFv(void*);

s32 TWindowLockOn::get_target_id() { return *(s32*)((char*)this + 0x370); }

}
