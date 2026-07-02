#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_8007DD70(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007DDB0(f32);

extern f32 lbl_805D923C;

void TObjBoss2Tunnel__sub_8007DD70(void *arg0) {
    TObjBoss2Tunnel__sub_8007DDB0(M2C_FIELD(arg0, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805D923C);
}

}
