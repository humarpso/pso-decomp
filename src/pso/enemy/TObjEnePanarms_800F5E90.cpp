#include "types.h"

extern "C" {

int TObjEnePanarms__sub_800F5E90(void* p);
void TObjEnePanarms__sub_800F5EB4(void* p, void* a1);
int TObjPlayer__sub_800F06B4(void*, void*);
int enemy_name_for_rt_index(void*);

int TObjEnePanarms__sub_800F5E90(void* p) { return enemy_name_for_rt_index(*(void**)((char*)p + 0x370)); }
void TObjEnePanarms__sub_800F5EB4(void* p, void* a1) { TObjPlayer__sub_800F06B4(a1, *(void**)((char*)p + 0x370)); }

}
