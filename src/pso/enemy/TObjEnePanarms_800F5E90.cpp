#include "types.h"

extern "C" {

int get_enemy_name__14TObjEnePanarmsFPv(void* p);
void copy_target_state__14TObjEnePanarmsFPvPv(void* p, void* a1);
int TObjPlayer__sub_800F06B4(void*, void*);
int enemy_name_for_rt_index(void*);

int get_enemy_name__14TObjEnePanarmsFPv(void* p) { return enemy_name_for_rt_index(*(void**)((char*)p + 0x370)); }
void copy_target_state__14TObjEnePanarmsFPvPv(void* p, void* a1) { TObjPlayer__sub_800F06B4(a1, *(void**)((char*)p + 0x370)); }

}
