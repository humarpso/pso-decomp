#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_random_scaled__11TBoss4Type3Fv(void);
f32 TObjPlayer__sub_80011014();

extern f32 lbl_805D8C80;

s32 get_random_scaled__11TBoss4Type3Fv(void) {
    return (s32) (lbl_805D8C80 * TObjPlayer__sub_80011014());
}

}
