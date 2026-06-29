#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006DCC8(void* p);

void TCameraCtrl__sub_8006DCC8(void* p) { *(s32*)((char*)p + 0xfc) = 0; }

}
