#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116C44(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FA50[];

void *TItemProShield__sub_80116C44(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
    return arg0;
}

}
