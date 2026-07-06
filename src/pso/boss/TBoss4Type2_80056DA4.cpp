#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__sub_80056DA4(void *arg0, void *arg1);

extern const f32 lbl_805D8BF4;
extern const f32 lbl_805D8BF8;

void TBoss4Type2__sub_80056DA4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8BF8);
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8BF8);
}

}
