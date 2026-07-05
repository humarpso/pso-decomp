#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjRoomId__sub_800FD8C8(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TObjNpcEnemy__sub_803D8090(M2C_UNK);
M2C_UNK fn_803D853C(s32, s32, ...);

extern u32 lbl_805D53BC;

void TObjRoomId__sub_800FD8C8(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == (u32) lbl_805D53BC) {
        TObjNpcEnemy__sub_803D8090(0xFF00FF);
        fn_803D853C((arg1 << 0x10) | arg2, arg3);
        TObjNpcEnemy__sub_803D8090(0xF0F0F0FF);
    }
}

}
