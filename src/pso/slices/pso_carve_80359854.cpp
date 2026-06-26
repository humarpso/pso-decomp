#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80351DFC();

void TObjStendGlassLobby__sub_80359854(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) < 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) == fn_80351DFC()) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
}

}
