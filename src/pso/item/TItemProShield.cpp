#include "types.h"
#include "pso/item/TItemProShield.h"
#include "pso/item/TItemEquipBase.h"

extern "C" {

void* TItemEquipBase__sub_8010B73C(void* p);

u8 TItemProShield::get_slot_count() { return *(u8*)((char*)this + 0xee); }
void* TItemEquipBase__sub_8010B73C(void* p) { ((TItemEquipBase *)p)->init_slot(); return p; }

}
