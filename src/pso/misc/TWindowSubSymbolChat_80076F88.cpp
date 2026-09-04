#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
}

extern "C" {

int TWindowSubSymbolChat__sub_80076FE0(void* p);
int TWindowSubSymbolChat__sub_80076FEC(void);
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

void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1) {
    s32 var_r4;
    var_r4 = arg1;
    if (var_r4 != 0) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (var_r4 << 9));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFE1F);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (arg1 << 5));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

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
