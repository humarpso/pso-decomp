#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnePanarms.h"

extern "C" {

s32 remap_area_sound_id(s32 arg0, s32 arg1);
int enemy_name_for_rt_index(void*);

int TObjEnemy::vfunc_12() { return enemy_name_for_rt_index(this->control); }
void TObjEnePanarms::copy_target_state(void* a1) { remap_area_sound_id((s32)a1, (s32)this->control); }

}
