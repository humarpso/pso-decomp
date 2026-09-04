#include "types.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFPv(void* p);
void* TItemEquipBase__sub_8010B73C(void* p);

int init_slot__14TItemEquipBaseFPv(void*);

u8 get_slot_count__14TItemProShieldFPv(void* p) { return *(u8*)((char*)p + 0xee); }
void* TItemEquipBase__sub_8010B73C(void* p) { init_slot__14TItemEquipBaseFPv(p); return p; }

}
