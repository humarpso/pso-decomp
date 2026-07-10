#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__25TWindowSubSymbolChatPartsFPv(void *arg0);
void add_part__25TWindowSubSymbolChatPartsFPv(void *arg0);
void handle_add__25TWindowSubSymbolChatPartsFPv(void *arg0);
s32 TWindowSubSymbolChat__sub_80077310();
s32 TWindowSubSymbolChat__sub_80283974();
s32 TWindowSubSymbolChat__sub_80284D4C();
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8028783C(s32, M2C_UNK);

void handle_cancel__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    if (TWindowSubSymbolChat__sub_80283974() == 0) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 2);
    }
}

void add_part__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubSymbolChat__sub_80284D4C();
    if (((s8) M2C_FIELD(arg0, u8 *, 0x71) != 0) || (temp_r3 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) || (TWindowSubSymbolChat__sub_80077310() < 2)) {
        fn_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    fn_8022675C(0x52D01, 0, 0, 0);
    *M2C_FIELD(arg0, s32 **, 0x84) = 1;
    M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 1);
    fn_8028783C(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

void handle_add__25TWindowSubSymbolChatPartsFPv(void *arg0) {
    if (TWindowSubSymbolChat__sub_80284D4C() >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    fn_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) | 1);
    fn_8028783C(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

}
