#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TWindowSubTradeMain__sub_80187CCC();

void handle_6x6A_set_boss_warp_flags(void *arg0) {
    void *temp_r3;

    TWindowSubTradeMain__sub_80187CCC();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0xDC) = (s16) M2C_FIELD(arg0, s16 *, 4);
    }
}

}
