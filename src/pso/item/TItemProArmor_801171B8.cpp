#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_801171B8(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FD48[];

void *TItemProArmor__sub_801171B8(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
    return arg0;
}

}
