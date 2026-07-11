#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_subobject__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_80068714(void *);

extern M2C_UNK lbl_80488D70[];

void *init_subobject__11TCameraCtrlFPv(void *arg0) {
    TCameraCtrl__sub_80068714(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
    M2C_FIELD(arg0, u32 *, 0x38) = 4;
    return arg0;
}

}
