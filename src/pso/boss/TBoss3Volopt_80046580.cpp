#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_notify__12TBoss3VoloptFv(void);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_80048C04();

extern u16 TBoss3Volopt__data_805D2710;

void check_and_notify__12TBoss3VoloptFv(void) {
    if (TPhotonMylla__sub_80154CB4(TBoss3Volopt__data_805D2710) != 0U) {
        fn_80048C04();
    }
}

}
