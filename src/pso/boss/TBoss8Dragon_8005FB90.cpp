#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805D8D5C;
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_8005FB90(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
}

}
