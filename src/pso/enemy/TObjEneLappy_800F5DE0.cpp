#include "types.h"

extern "C" {

int initialize_enemy_photon_effect(void* p);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);
s32 get_target_id__13TWindowLockOnFPv(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);

void set_param__12TObjEneLappyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }

int initialize_enemy_photon_effect(void* p) { return reset_photon_effect__12TBoss3VoloptFPv(p); }

}
