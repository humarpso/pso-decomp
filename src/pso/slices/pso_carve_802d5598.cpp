#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_802D5ECC(void *);
extern M2C_UNK lbl_804E2000[];
extern M2C_UNK fn_802D5558[];
extern M2C_UNK fn_802D551C[];

void *fn_802D5598(void *arg0) {
    fn_802D5ECC(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 341;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = fn_802D5558;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = fn_802D551C;
    return arg0;
}

}
