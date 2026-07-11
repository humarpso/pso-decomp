#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_elapsed_scaled__9TObjEneDDFv(void);
f32 TObjPlayer__sub_80011014();

extern f32 lbl_805D9E98;
extern f32 lbl_805D9E9C;

f32 calc_elapsed_scaled__9TObjEneDDFv(void) {
    return lbl_805D9E98 * (TObjPlayer__sub_80011014() - lbl_805D9E9C);
}

}
