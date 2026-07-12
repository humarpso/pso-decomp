#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80222CBC(s32);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, s32, s32);

void fn_80222848(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        TWindowMessagePage__sub_8026AE20(M2C_FIELD(arg0, u32 *, 0x20C), TLobby__sub_80222CBC(arg1), arg2 | 0x80);
    }
}

}
