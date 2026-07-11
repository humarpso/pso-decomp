#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__sub_8006E6B0(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80488E00[];

void *TCameraCtrl__sub_8006E6B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488E00;
        M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0x100) = 0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
