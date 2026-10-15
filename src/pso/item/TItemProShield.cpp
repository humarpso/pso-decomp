#include "types.h"
#include "pso/item/TItemProShield.h"

extern "C" {

void* TItemEquipBase__sub_8010B73C(void* p);

int init_slot__14TItemEquipBaseFv(void*);

u8 TItemProShield::get_slot_count() { return *(u8*)((char*)this + 0xee); }
void* TItemEquipBase__sub_8010B73C(void* p) { init_slot__14TItemEquipBaseFv(p); return p; }

}
