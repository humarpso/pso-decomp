#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012E550(void *arg0);
s32 TObjPlayer__sub_80121200();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern f32 lbl_805DAF7C;
extern f32 lbl_805DAF80;

void TObjPlayer__sub_8012E550(void *arg0) {
    if (TObjPlayer__sub_80121200() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805DAF7C, lbl_805DAF80 * M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DAF7C);
    }
}

}
