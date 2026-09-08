#include "types.h"

struct M2CCopy_50 { u8 bytes[0x50]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

extern "C" {
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
int TWindowKeyBoardSoft__sub_80076E2C(s32);
s32 fn_80076D68(s32 arg0, s32 arg1);
int TWindowKeyBoardSoft__sub_80076E2C(s32 _w0);
bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0);
}

extern "C" {

int fn_80076D40(void);
s32 TLobby__sub_80076BC8(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
int fn_80076CD0(void);

int fn_80076D40(void) { return 0; }

s32 fn_80076D68(s32 arg0, s32 arg1) { return TAdSinglePlyChrSelectGC__sub_80076D9C(((s32)TWindowKeyBoardSoft__sub_80076E2C((s32)(arg0))), arg1); }

s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1) {
    TAdSinglePlyChrSelectGC__sub_80076DF4((void*)(arg0), (void*)(arg1));
    *(M2CCopy_50 *)(arg0 + 4) = *(const M2CCopy_50 *)(arg1 + 4);
    return arg0;
}

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0) {
    return *((s32 *)TWindowKeyBoardSoft__sub_80076E2C(arg0)) != 0;
}

int TWindowKeyBoardSoft__sub_80076E2C(s32 _w0) { return 0; }

}
