#include "types.h"

extern "C" {

int TWindowSubSymbolChat__sub_80076FE0(void* p);
int TWindowSubSymbolChat__sub_80076FEC(void);
int TWindowSubSymbolChat__sub_80077034(void);
int TWindowSubSymbolChat__sub_8007706C(void);
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_800770D0(void);
int TWindowSubSymbolChat__sub_80077108(void* a0 = 0, void* a1 = 0);
int TWindowSubSymbolChat__sub_8007714C(void);
int TWindowSubSymbolChat__sub_800771B0(void);
int TWindowSubSymbolChat__sub_800771C4(void);
int TWindowSubSymbolChat__sub_800771E4(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0, void* a4 = 0, void* a5 = 0, void* a6 = 0);
void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
int get_instance__20TWindowSubSymbolChatFv(void*);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

int TWindowSubSymbolChat__sub_80076FEC(void) { return 0; }
int TWindowSubSymbolChat__sub_80077034(void) { return 0; }
int TWindowSubSymbolChat__sub_8007706C(void) { return 0; }
int TWindowSubSymbolChat__sub_80077098(void) { return 0; }
int TWindowSubSymbolChat__sub_800770D0(void) { return 0; }
int TWindowSubSymbolChat__sub_80077108(void* a0, void* a1) { return 0; }
int TWindowSubSymbolChat__sub_8007714C(void) { return 0; }
int TWindowSubSymbolChat__sub_800771B0(void) { return 0; }
int TWindowSubSymbolChat__sub_800771C4(void) { return 0; }
int TWindowSubSymbolChat__sub_800771E4(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) { return 0; }

void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;

    temp = TWindowSubSymbolChat__sub_80077108((void*)((void*)(arg0)), (void*)((void*)(0)));
    if (temp < 0xC) {
        TWindowSubSymbolChat__sub_800771E4((void*)((void*)(arg0)), (void*)((void*)(temp)), (void*)((void*)(arg1)), (void*)((void*)(arg2)), (void*)((void*)(arg3)), (void*)((void*)(arg4)), (void*)((void*)(arg5)));
        *arg0 |= 1;
    }
}

}
