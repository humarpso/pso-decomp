#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_static_field4_as_float__12TObjWarpJungFv(void);

extern M2C_UNK lbl_80446708;
extern void *lbl_805D5CAC;

f32 get_static_field4_as_float__12TObjWarpJungFv(void) {
    return (f32) M2C_FIELD(lbl_805D5CAC, u32 *, 4);
}

}
