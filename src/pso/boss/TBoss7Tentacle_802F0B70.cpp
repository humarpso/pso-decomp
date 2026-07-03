#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802F0B70(void* p);
void TBoss7Tentacle__sub_802F0B80(void* p);

void TBoss7Tentacle__sub_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }
void TBoss7Tentacle__sub_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

}
