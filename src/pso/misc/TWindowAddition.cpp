#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1);
void TWindowAddition__ct(void *, void *);
void TWindowDD__sub_802466E0(void *);

extern M2C_UNK lbl_804CDFE8[];

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1) {
    TWindowDD__sub_802466E0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CDFE8;
    TWindowAddition__ct(arg0, arg1);
    return arg0;
}

}
