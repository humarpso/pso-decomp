#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_800822B0(void);
int TObjPlayer__sub_800822B8(void);
f32 TObjPlayer__sub_800822C0(void);
f32 TObjPlayer__sub_800822C8(void);

int TObjPlayer__sub_800822B0(void) { return 1; }
int TObjPlayer__sub_800822B8(void) { return 1; }

extern f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C0(void) {
    return lbl_805D9378;
}

extern f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C8(void) {
    return lbl_805D9378;
}

}
