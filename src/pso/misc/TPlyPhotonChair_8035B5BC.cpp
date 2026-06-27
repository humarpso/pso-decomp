#include "types.h"

extern "C" {

void TPlyPhotonChair__sub_8035B5BC(void* p, s32 v);
void TPlyPhotonChair__sub_8035B5C4(void* p, s32 v);

void TPlyPhotonChair__sub_8035B5BC(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void TPlyPhotonChair__sub_8035B5C4(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
