#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0);
s32 TBoss6Type2__sub_802BC364();
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK var_r3;
    s32 temp_r0;

    if (TBoss6Type2__sub_802BC364() == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x42C);
        switch (temp_r0) {
        case 1:
            var_r3 = 0x6852C;
            break;
        case 2:
            var_r3 = 0x6852D;
            break;
        case 3:
            var_r3 = 0x6852E;
            break;
        case 4:
            var_r3 = 0x6852F;
            break;
        case 5:
        default:
            var_r3 = 0x6852B;
            break;
        }
        fn_8022675C(var_r3, arg0 + 0x38, 0, 1);
    }
}

}
