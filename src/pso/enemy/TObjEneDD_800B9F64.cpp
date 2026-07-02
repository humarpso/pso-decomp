#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDD__sub_800B9F64(void);
f32 fn_80011014();

extern f32 lbl_805D9E94;

s32 TObjEneDD__sub_800B9F64(void) {
    return (s32) (lbl_805D9E94 * fn_80011014());
}

}
