#include "types.h"

extern "C" {

u8 TWindowSubQuestBoard__sub_8027D1C8(void* p);
int TWindowSubQuestBoard__sub_8027D1D0(void* p);
int TWindowSubQuestBoard__sub_8027D1DC(void* p);

u8 TWindowSubQuestBoard__sub_8027D1C8(void* p) { return *(u8*)((char*)p + 0x61); }
int TWindowSubQuestBoard__sub_8027D1D0(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubQuestBoard__sub_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
