#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubSymbolChat__sub_8007728C(void);
int TWindowSubSymbolChat__sub_800772D8(void);
u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0);
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_800770D0(void);
M2C_UNK TWindowSubSymbolChat__sub_800773BC(s32);
s32 TWindowSubSymbolChat__sub_80077464();
int TWindowSubSymbolChat__sub_80077480(void);
int get_instance__20TWindowSubSymbolChatFv(void*);
u8 *get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 is_initialized__20TWindowSubSymbolChatFPv();

int TWindowSubSymbolChat__sub_8007728C(void) { return 0; }
int TWindowSubSymbolChat__sub_800772D8(void) { return 0; }

void refresh_parts__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_80077098(); }

void update_layout__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_800770D0(); }

    extern int lbl_805D4E50;
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void) { lbl_805D4E50 = TWindowSubSymbolChat__sub_80077480(); }

void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    if (is_initialized__20TWindowSubSymbolChatFPv() != 0) {
        TWindowSubSymbolChat__sub_800773BC(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF);
    }
}

u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0) {
    if (TWindowSubSymbolChat__sub_80077464() == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCC);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCD);
    }
    return arg0 + 4;
}

}
