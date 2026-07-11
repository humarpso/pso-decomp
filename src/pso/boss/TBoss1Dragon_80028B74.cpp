#include "types.h"

extern "C" {

void TBoss1Dragon__sub_80028B74(void* p);
void TBoss1Dragon__sub_80028B80(void* p);
void TBoss1Dragon__sub_80028B8C(void* p);

void TBoss1Dragon__sub_80028B74(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void TBoss1Dragon__sub_80028B80(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void TBoss1Dragon__sub_80028B8C(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
