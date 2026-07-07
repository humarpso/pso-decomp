#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__sub_80057894(u8 *arg0);
M2C_UNK fn_8022675C(int, void *, int, int, void *);

extern const f32 lbl_805D8BD8;

void TBoss4Type2__sub_80057894(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) lbl_805D8BD8;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    fn_8022675C(0x4003B723, arg0 + 0x38, 0, 1, arg0);
}

}
