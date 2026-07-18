#include "types.h"

extern "C" {

u8 get_page_index__20TWindowSubQuestBoardFPv(void* p);
int is_open__20TWindowSubQuestBoardFPv(void* p);
int TWindowSubQuestBoard__sub_8027D1DC(void* p);

u8 get_page_index__20TWindowSubQuestBoardFPv(void* p) { return *(u8*)((char*)p + 0x61); }
int is_open__20TWindowSubQuestBoardFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubQuestBoard__sub_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
