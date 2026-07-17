#include "types.h"

extern "C" {

void TFontSmallTask__sub_800FD5F4(void* p, s32 v);
s32 get_task_id__14TFontSmallTaskFPv(void* p);
void TFontSmallTask__sub_800FD604(void* p);

void TFontSmallTask__sub_800FD5F4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 get_task_id__14TFontSmallTaskFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TFontSmallTask__sub_800FD604(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
