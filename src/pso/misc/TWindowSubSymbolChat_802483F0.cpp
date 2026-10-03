#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80248494_lbl_804CE2E8 {
    M2C_UNK value;
    u8 remaining[0x4B4];
};

extern "C" {
M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 TWindowSubSymbolChat__sub_80077464(void *);
s32 get_data_ptr__20TWindowSubSymbolChatFPv(u32);
void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
void TWindowSubSymbolChat__sub_802484C0(u8 *arg0);
s32 init_window_layout_entries(void *, void *, void *);
extern RecoveredGlobal_80248494_lbl_804CE2E8 lbl_804CE2E8;
void TWindowSubSymbolChat__sub_80248494(s32 arg0, s32 arg1);
}

extern "C" {

void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1);
void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1);
void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80248088(s32, void *, s32);
s32 TWindowSubSymbolChat__sub_80077480(s32);
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

typedef char RecoveredGlobal_80248494_lbl_804CE2E8_size[sizeof(RecoveredGlobal_80248494_lbl_804CE2E8) == 0x4B8 ? 1 : -1];
void TWindowSubSymbolChat__sub_80248494(s32 arg0, s32 arg1) {
    init_window_layout_entries((void *) (arg0), (void *) (&lbl_804CE2E8.value), (void *) (arg1));
}

void TWindowSubSymbolChat__sub_802484C0(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) && (((u32) M2C_FIELD(arg0, u32 *, 0x60) == 0U) || (TWindowSubSymbolChat__sub_80077464((void *) M2C_FIELD(arg0, u32 *, 0x60)) == 0))) {
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    set_symbol_chat_parts__20TWindowSubSymbolChatFiPv((s32)(arg0 + 0x24), (void *)(get_data_ptr__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, u32 *, 0x60))));
}

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        TWindowSubSymbolChat__sub_802484C0((u8 *)(arg0));
    }
}

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubSymbolChat__sub_80077480(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi((void *)(arg0), (u32)((s32)tmp));
}

}
