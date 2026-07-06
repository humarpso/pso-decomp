#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOBoss4Rock__sub_8039C880();
extern M2C_UNK lbl_80435620;
extern const f32 lbl_805D8244;
extern const f32 lbl_805D8248;

s32 fn_8002EF8C(void) {
    return (s32) (lbl_805D8248 * (lbl_805D8244 * (f32) TOBoss4Rock__sub_8039C880()));
}

}
