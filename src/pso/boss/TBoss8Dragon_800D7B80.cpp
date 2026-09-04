#include "types.h"

extern "C" {

void set_visible__12TBoss8DragonFPv(void* p);
void clear_render_state__12TBoss8DragonFPv(void* p);

void set_visible__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x18) = 1; }
void clear_render_state__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x18) = 0; }

}
