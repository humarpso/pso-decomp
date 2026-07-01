#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80101048();
s32 fn_80121200();
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void fn_8012BB84(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80121200();
    switch (temp_r3) {
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 1:
        fn_803D9624(0, lbl_805DAEC8, lbl_805DAECC * M2C_FIELD(arg0, f32 *, 0x274), lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        fn_80101048();
        return;
    }
}

}
