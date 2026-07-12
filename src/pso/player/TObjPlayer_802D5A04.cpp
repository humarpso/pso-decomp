#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_type_447__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_802D5ECC(void *);

extern M2C_UNK lbl_804E22F4[];
extern M2C_UNK fn_8032DEB4[];
extern M2C_UNK fn_8032DF0C[];

void *init_type_447__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_802D5ECC(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E22F4;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 447;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = fn_8032DEB4;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = fn_8032DF0C;
    return arg0;
}

}
