#include "types.h"

extern "C" {

void TPacket__sub_801A558C(void* p);

int fn_801A5544(void) { return 0; }
void TPacket__sub_801A558C(void* p) { *(s32*)((char*)p + 0x8b8) = 0; }

}
