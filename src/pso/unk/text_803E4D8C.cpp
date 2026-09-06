#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_803E5378(s32);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0);
}

extern "C" {

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0) {
    M2C_FIELD(lbl_805D7818, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(lbl_805D7818, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(lbl_805D7818, f32 *, 0x14) = farg0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x1C) = 0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x20) = (s32) M2C_FIELD(arg0, u16 *, 8);
    TObjPlayer__sub_803E5378(M2C_FIELD(arg0, u16 *, 0xA) & 0xFFFFFF3F);
}
#pragma pop

}
