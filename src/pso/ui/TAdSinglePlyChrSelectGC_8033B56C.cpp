#include "types.h"

extern "C" {

void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
int TAdSinglePlyChrSelectGC__sub_8033B4B4(void);
int TObjCityMainWarp__sub_80266354(void*, void*, void*, void*);
int fn_8006EF6C(void*);
int fn_80265E60(void*, float);
int fn_80266508(void*, void*);

    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0) { TAdSinglePlyChrSelectGC__sub_8033B4B4(); *(int*)((char*)a0 + 0x3c) = fn_80266508(lbl_80477D58, (void*)2); TObjCityMainWarp__sub_80266354((void*)(*(int*)((char*)a0 + 0x3c)), (void*)fn_8006EF6C((void*)13), (void*)6, (void*)0); TObjCityMainWarp__sub_80266354((void*)(*(int*)((char*)a0 + 0x3c)), (void*)fn_8006EF6C((void*)14), (void*)6, (void*)1); fn_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

}
