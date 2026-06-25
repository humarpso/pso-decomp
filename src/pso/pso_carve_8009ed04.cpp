#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_8002ADE4(f32);
M2C_UNK fn_8009E334(void *);
M2C_UNK fn_8009E350(void *);

void fn_8009ED04(void *arg0) {
    if ((s32) fn_8002ADE4(M2C_FIELD(arg0, f32 *, 0x354)) == 0) {
        fn_8009E350(arg0);
        return;
    }
    fn_8009E334(arg0);
}

}
