#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_grabbed_state__10TObjPlayerFi(s32 arg0);
void update_if_active__15TObjEneMe1GiGueFPv(void*, M2C_UNK);
void *TPhotonMylla__sub_80154CB4(u16);

extern u16 lbl_805D271C;

void set_grabbed_state__10TObjPlayerFi(s32 arg0) {
    void *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4(lbl_805D271C);
    if ((temp_r3 != NULL) && ((s16) M2C_FIELD(temp_r3, s16 *, 0x326) != 0xA)) {
        update_if_active__15TObjEneMe1GiGueFPv(temp_r3, 0xA);
        M2C_FIELD(temp_r3, s32 *, 0x3C4) = arg0;
    }
}

}
