#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1);
void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1);
void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80248088(s32, void *, s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);
M2C_UNK TWindowSubSymbolChat__sub_802484C0();
M2C_UNK fn_80248324(s32, u16, s32);
M2C_UNK fn_802483C8(s32, u8);

    extern const float lbl_805DCB94;
    extern const float lbl_805DCB98;
void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1) { *(float*)((char*)a1 + 0x0) = lbl_805DCB94; *(float*)((char*)a1 + 0x4) = lbl_805DCB98; }

void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1) {
    s32 i;
    s32 j;
    s32 off;

    fn_802483C8(arg0, (u8) M2C_FIELD(arg1, s32 *, 0));
    for (i = 0; i < 4; i += 1) {
        fn_80248324(arg0, ((u16 *)arg1)[i + 2], i);
    }
    j = 0;
    off = 0;
    do {
        TWindowSubSymbolChatPartsSet__sub_80248088(arg0, (s8 *)arg1 + off + 0xC, j);
        off += 4;
        j += 1;
    } while (j < 0xC);
}

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        TWindowSubSymbolChat__sub_802484C0();
    }
}

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubSymbolChat__sub_80077480(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi((void *)(arg0), (u32)((s32)tmp));
}

}
