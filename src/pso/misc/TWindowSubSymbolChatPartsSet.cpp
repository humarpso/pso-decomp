#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
s32 TWindowSubSymbolChat__sub_802838F4();
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8028783C(s32, M2C_UNK);

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    if (TWindowSubSymbolChat__sub_802838F4() == 0) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 2);
    }
}

void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    fn_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 1);
    fn_8028783C(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

}
