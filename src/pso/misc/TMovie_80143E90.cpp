#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 stop_if_advanced__6TMovieFPv(void *arg0);
M2C_UNK fn_80084038(M2C_UNK, M2C_UNK, f32);

extern f32 lbl_805DB178;

s32 stop_if_advanced__6TMovieFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) >= 2) {
        fn_80084038(-1, 0, lbl_805DB178);
    }
    return 1;
}

}
