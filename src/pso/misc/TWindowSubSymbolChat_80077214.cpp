#include "types.h"

extern "C" {
int TWindowSubSymbolChat__sub_80077108(void* a0 = 0, void* a1 = 0);
int TWindowSubSymbolChat__sub_800771E4(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0, void* a4 = 0, void* a5 = 0, void* a6 = 0);

int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int TWindowSubSymbolChat__sub_80076FE0(void* p);

void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;

    temp = TWindowSubSymbolChat__sub_80077108((void*)(arg0), (void*)(0));
    if (temp < 0xC) {
        TWindowSubSymbolChat__sub_800771E4((void*)(arg0), (void*)(temp), (void*)(arg1), (void*)(arg2), (void*)(arg3), (void*)(arg4), (void*)(arg5));
        *arg0 |= 1;
    }
}

}
