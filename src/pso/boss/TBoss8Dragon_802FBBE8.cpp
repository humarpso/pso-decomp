#include "types.h"

extern "C" {

void save_position__12TBoss8DragonFPv(void* p);
void restore_target_pos__12TBoss8DragonFPv(void* p);
void sync_target_pos__12TBoss8DragonFPv(void* p);

void sync_target_pos__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x394) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x39c) = *(f32*)((char*)p + 0x694); }

}
