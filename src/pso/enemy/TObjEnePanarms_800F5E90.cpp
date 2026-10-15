#include "types.h"
#include "pso/enemy/TObjEnePanarms.h"

extern "C" {

int remap_area_sound_id(void*, void*);
int enemy_name_for_rt_index(void*);

int TObjEnePanarms::get_enemy_name() { return enemy_name_for_rt_index(*(void**)((char*)this + 0x370)); }
void TObjEnePanarms::copy_target_state(void* a1) { remap_area_sound_id(a1, *(void**)((char*)this + 0x370)); }

}
