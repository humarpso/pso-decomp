#include "types.h"

extern "C" {

void TBoss7LaserLight__sub_802EF120(void* p);
void TBoss7LaserLight__sub_802EF12C(void* p);

void TBoss7LaserLight__sub_802EF120(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss7LaserLight__sub_802EF12C(void* p) { *(s32*)((char*)p + 0x24) = 1; }

}
