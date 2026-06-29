#include "types.h"

extern "C" {

int fn_80077718(void*);
void TWindowSubSymbolChat__sub_80077310(void* p);
void fn_80077334(void* p);
int fn_80076FE0(void* p);

int fn_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }
int TWindowSubSymbolChat__sub_80076FEC(void) { return 0; }
int TWindowSubSymbolChat__sub_80077034(void) { return 0; }
int TWindowSubSymbolChat__sub_8007706C(void) { return 0; }
int TWindowSubSymbolChat__sub_80077098(void) { return 0; }
int TWindowSubSymbolChat__sub_800770D0(void) { return 0; }
int TWindowSubSymbolChat__sub_80077108(void* a0 = 0, void* a1 = 0) { return 0; }
int TWindowSubSymbolChat__sub_8007714C(void) { return 0; }
int TWindowSubSymbolChat__sub_800771B0(void) { return 0; }
int TWindowSubSymbolChat__sub_800771C4(void) { return 0; }
int TWindowSubSymbolChat__sub_800771E4(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0, void* a4 = 0, void* a5 = 0, void* a6 = 0) { return 0; }
void TWindowSubSymbolChat__sub_80077214(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;

    temp = TWindowSubSymbolChat__sub_80077108((void*)(arg0), (void*)(0));
    if (temp < 0xC) {
        TWindowSubSymbolChat__sub_800771E4((void*)(arg0), (void*)(temp), (void*)(arg1), (void*)(arg2), (void*)(arg3), (void*)(arg4), (void*)(arg5));
        *arg0 |= 1;
    }
}
int TWindowSubSymbolChat__sub_8007728C(void) { return 0; }
int TWindowSubSymbolChat__sub_800772D8(void) { return 0; }
void TWindowSubSymbolChat__sub_80077310(void* p) { fn_80077718(p); TWindowSubSymbolChat__sub_80077098(); }
void fn_80077334(void* p) { fn_80077718(p); TWindowSubSymbolChat__sub_800770D0(); }

}
