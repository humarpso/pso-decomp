#include "types.h"

extern "C" {

void TBoss2LaserLight__sub_80037474(void* p);
void TBoss2LaserLight__sub_80037480(void* p);

void TBoss2LaserLight__sub_80037474(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss2LaserLight__sub_80037480(void* p) { *(s32*)((char*)p + 0x24) = 1; }

}
