#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_rand_below_threshold__10TObjPlayerFv(void);
s32 rand();

extern M2C_UNK lbl_8043E980;
extern f32 lbl_805DAE78;
extern f32 lbl_805DAE7C;

s32 is_rand_below_threshold__10TObjPlayerFv(void) {
    return (u32)__cntlzw(((lbl_805DAE78 * (f32) rand()) < lbl_805DAE7C)) >> 5;
}

}
