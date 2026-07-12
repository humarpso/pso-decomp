#include "types.h"

extern "C" {

void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
int close_window__23TAdSinglePlyChrSelectGCFPv(void);
int TObjCityMainWarp__sub_80266354(void*, void*, void*, void*);
int TQuestVmDownLoadServer__sub_8006EF6C(void*);
int TWindowSubComCard__sub_80265E60(void*, float);
int TAdChrSelASlotGC__sub_80266508(void*, void*);

    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv(); *(int*)((char*)a0 + 0x3c) = TAdChrSelASlotGC__sub_80266508(lbl_80477D58, (void*)2); TObjCityMainWarp__sub_80266354((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)13), (void*)6, (void*)0); TObjCityMainWarp__sub_80266354((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)14), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

}
