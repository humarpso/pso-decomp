#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80330384(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;

void TObjPlayer__sub_80330384(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805DF7F4;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    TBoss3Volopt__sub_8022675C(0x6A816, arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
}

}
