#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__sub_8005951C(void *arg0);
M2C_UNK TBoss4Type3__sub_80242EBC(M2C_UNK, M2C_UNK, s16);
s32 fn_80019690();
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 lbl_805D53A0;

void TBoss4Type3__sub_8005951C(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (fn_80019690() != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, u16 *, 0x3BA) != (s32) lbl_805D53A0) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x3D8) % 39;
    if (temp_r30 == 0) {
        TBoss4Type3__sub_80242EBC(0x60, 0xF, (s16) M2C_FIELD(arg0, u16 *, 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        fn_8022675C(0x4003C133, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
}

}
