#include "types.h"

extern "C" {

int release__14TItemEquipBaseFPv(void*);
int clear_equip_flags__10TObjPlayerFPvUi(void*, void*);
int memset(void*, void*, void*);
void reset_item_equip(void* p);

void reset_item_equip(void* p) { memset((char*)p + 0x18c, (void*)0, (void*)16); clear_equip_flags__10TObjPlayerFPvUi(p, (void*)12); release__14TItemEquipBaseFPv(p); }

}
