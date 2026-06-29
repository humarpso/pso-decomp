#include "types.h"

extern "C" {

void TEffIndirectCtrl__sub_802A955C(void* p);
void TEffIndirectCtrl__sub_802A9548(void* p);
u8 TEffIndirectCtrl__sub_802A9554(void* p);

void TEffIndirectCtrl__sub_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 TEffIndirectCtrl__sub_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void TEffIndirectCtrl__sub_802A955C(void* p) { *(s16*)((char*)p + 0x46) = 1; }

}
