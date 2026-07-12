#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorMachine01__vt15(u8 *arg0);
M2C_UNK TObjPlayer__sub_80154764(void *, M2C_UNK, M2C_UNK);
s32 fn_80158360(f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DB4F0;

void TODoorMachine01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (fn_80158360(lbl_805DB4F0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        TObjPlayer__sub_80154764(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

}
