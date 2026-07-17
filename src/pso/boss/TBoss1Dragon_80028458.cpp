#include "types.h"

extern "C" {

void save_pos__12TBoss1DragonFPv(void* p);
void restore_position__12TBoss1DragonFPv(void* p);
void save_position__12TBoss1DragonFPv(void* p);

void save_pos__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x39c); }
void restore_position__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x69c); }

}
