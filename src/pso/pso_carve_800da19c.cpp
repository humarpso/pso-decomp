#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8006A088(M2C_UNK);
u32 fn_801BA74C(M2C_UNK);

void fn_800DA19C(void *arg0, u32 arg1) {
    if ((arg1 == fn_801BA74C(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3DC) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 0x1E;
        fn_8006A088(1);
    }
}

}
