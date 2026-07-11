#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_801C29A0(void *arg0);
s32 fn_8002ADC8();

extern s32 lbl_805D5DB0;

u8 TLobby__sub_801C29A0(void *arg0) {
    if ((s32) lbl_805D5DB0 >= fn_8002ADC8()) {
        M2C_FIELD(arg0, s32 *, 0x270) = 2;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x270) == 2);
}

}
