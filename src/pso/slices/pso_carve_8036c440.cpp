#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TObjRoomId__sub_801A1DB8(u16);
s32 fn_8036CDA8();

s32 fn_8036C440(void *arg0) {
    if (fn_8036CDA8() == 0) {
        return 0;
    }
    return (u32) __cntlzw(TObjRoomId__sub_801A1DB8(M2C_FIELD(arg0, u16 *, 4))) >> 5;
}

}
