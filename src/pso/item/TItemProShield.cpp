#include "types.h"

extern "C" {

u8 TItemProShield__sub_8010B734(void* p);
void* TItemEquipBase__sub_8010B73C(void* p);

int TItemEquipBase__sub_8010B76C(void*);

u8 TItemProShield__sub_8010B734(void* p) { return *(u8*)((char*)p + 0xee); }
void* TItemEquipBase__sub_8010B73C(void* p) { TItemEquipBase__sub_8010B76C(p); return p; }

}
