#include "types.h"

extern "C" {

void save_position__12TBoss8DragonFPv(void* p);
void restore_target_pos__12TBoss8DragonFPv(void* p);
void sync_target_pos__12TBoss8DragonFPv(void* p);

void save_position__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x39c); }
void restore_target_pos__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x694); }

}
