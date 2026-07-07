#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001BEF8(void *, int);

s32 fn_8012C9D8(u8 *arg0) {
    if (fn_8001BEF8(arg0 + 0x1F8, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}
