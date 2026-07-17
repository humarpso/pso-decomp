#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_state__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2);
M2C_UNK TObjPlayer__sub_80120D50();
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804A5550[];

void *init_state__10TObjPlayerFPviPv(void *arg0, M2C_UNK arg1, void *arg2) {
    TObjPlayer__sub_80120D50();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5550;
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
