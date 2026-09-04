#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__25TWindowSubSymbolChatPartsFPv(void *arg0);
void add_part__25TWindowSubSymbolChatPartsFPv(void *arg0);
void handle_add__25TWindowSubSymbolChatPartsFPv(void *arg0);
s32 refresh_parts__20TWindowSubSymbolChatFPv();
s32 TWindowSubSymbolChat__sub_80283974();
s32 calc_symbol_index__20TWindowSubSymbolChatFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    if (TWindowSubSymbolChat__sub_80283974() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 2);
    }
}

void add_part__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = calc_symbol_index__20TWindowSubSymbolChatFPv();
    if (((s8) M2C_FIELD(arg0, u8 *, 0x71) != 0) || (temp_r3 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) || (refresh_parts__20TWindowSubSymbolChatFPv() < 2)) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    *M2C_FIELD(arg0, s32 **, 0x84) = 1;
    M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

void handle_add__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    if (calc_symbol_index__20TWindowSubSymbolChatFPv() >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

}
