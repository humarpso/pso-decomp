#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80044498();
f32 fn_803D64C0(s32);
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;

void fn_80047344(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        fn_80044498();
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D8818 * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x46C) * 0x3000));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x46C) - 1;
        M2C_FIELD(arg0, s32 *, 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x380);
            M2C_FIELD(arg0, s32 *, 0x374) = temp_r0_3;
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) temp_r0_3;
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x470);
        }
        break;
    case -1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}

}
