#include "types.h"

extern "C" {

int release__14TItemEquipBaseFPv(void*);
int TObjPlayer__sub_8012107C(void*, void*);
int memset(void*, void*, void*);
void reset_item_equip(void* p);

void reset_item_equip(void* p) { memset((char*)p + 0x18c, (void*)0, (void*)16); TObjPlayer__sub_8012107C(p, (void*)12); release__14TItemEquipBaseFPv(p); }

}
