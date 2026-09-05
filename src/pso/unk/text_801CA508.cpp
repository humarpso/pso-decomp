#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void obj_setFlags30(void *, u32);
extern const f32 lbl_805DC388;
void TObjPlayer__sub_801CA8F0(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CA8F0(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x20) = (f32) (lbl_805DC388 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    obj_setFlags30(arg0, 0x800U);
}

}
