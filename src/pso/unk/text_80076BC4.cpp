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
s32 fn_80076D68(s32 arg0, s32 arg1);
bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0);
void fn_80076D40(s32 i);
s32 get_card_window__17TWindowSubComCardFUi(u32);
int TWindowKeyBoardSoft__sub_80076E2C(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
int fn_80076CD0(void);

void fn_80076D40(s32 i) {
    void **p = ((void **)TWindowKeyBoardSoft__sub_80076E2C((s32)(i)));
    *p = 0;
}

s32 fn_80076D68(s32 arg0, s32 arg1) { return TAdSinglePlyChrSelectGC__sub_80076D9C(((s32)TWindowKeyBoardSoft__sub_80076E2C((s32)((s32)(arg0)))), arg1); }

s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1) {
    TAdSinglePlyChrSelectGC__sub_80076DF4((void*)(arg0), (void*)(arg1));
    *(M2CCopy_50 *)(arg0 + 4) = *(const M2CCopy_50 *)(arg1 + 4);
    return arg0;
}

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0) {
    return *((s32 *)TWindowKeyBoardSoft__sub_80076E2C((s32)(arg0))) != 0;
}
typedef struct { u8 b[0x54]; } Rec_80076E2C;
int TWindowKeyBoardSoft__sub_80076E2C(s32 arg0) {
    u8 *p = (u8 *)((Rec_80076E2C *)get_card_window__17TWindowSubComCardFUi(0xFFFF) + arg0);
    return (s32)(p + 0x19C0);
}

}
