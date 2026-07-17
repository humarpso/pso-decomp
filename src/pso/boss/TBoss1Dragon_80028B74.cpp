#include "types.h"

extern "C" {

void set_phase_2__12TBoss1DragonFPv(void* p);
void set_active__12TBoss1DragonFPv(void* p);
void clear_state__12TBoss1DragonFPv(void* p);

void set_phase_2__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void set_active__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void clear_state__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
