#include "types.h"

extern "C" {

void TItemEquipBase__sub_8010AFEC(void* p);

int memset(void*, void*, void*);

void TItemEquipBase__sub_8010AFEC(void* p) { memset((char*)p + 0xf8, (void*)0, (void*)36); memset((char*)p + 0x11c, (void*)0, (void*)48); memset((char*)p + 0x14c, (void*)0, (void*)32); memset((char*)p + 0x16c, (void*)0, (void*)4); }

}
