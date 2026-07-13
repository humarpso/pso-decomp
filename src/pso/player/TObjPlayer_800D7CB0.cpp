#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_and_activate__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_800D9718(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804949A8[];

void *init_and_activate__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_800D9718(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804949A8;
    activate_and_dispatch__10TObjPlayerFPv(arg0);
    return arg0;
}

}
