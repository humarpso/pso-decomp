#include "types.h"

extern "C" {

f32 get_float_c__15TPlyPhotonChairFPv(void* p);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 get_id__15TPlyPhotonChairFPv(void* p);
void activate__15TPlyPhotonChairFPv(void* p);

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 get_id__15TPlyPhotonChairFPv(void* p) { return *(s32*)((char*)p + 0x0); }
void activate__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 1; }

}
