#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__sub_80014108();
extern f32 lbl_805DF7FC;

f32 fn_803302D8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
        return TObjPlayer__sub_80014108();
    }
    return lbl_805DF7FC;
}

}
