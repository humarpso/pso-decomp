#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F0918(void* p);

int TBoss7Tentacle__sub_802F0904(void) { return 0; }
void TBoss7Tentacle__sub_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

}
