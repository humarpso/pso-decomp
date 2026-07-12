#include "types.h"

extern "C" {

f32 TPlyPhotonChair__sub_80143928(void* p);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 TPlyPhotonChair__sub_80143938(void* p);
void TPlyPhotonChair__sub_80143940(void* p);

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TPlyPhotonChair__sub_80143938(void* p) { return *(s32*)((char*)p + 0x0); }
void TPlyPhotonChair__sub_80143940(void* p) { *(s32*)((char*)p + 0x18) = 1; }

}
