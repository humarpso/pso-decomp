#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjGrass__vt58(void *arg0);
M2C_UNK TObjGrass__sub_800BFB68();

extern const f32 lbl_805D9EB8;

void TObjGrass__vt58(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x39E);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x39E) = 0;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) lbl_805D9EB8;
        TObjGrass__sub_800BFB68();
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

}
