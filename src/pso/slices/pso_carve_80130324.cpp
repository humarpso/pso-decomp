#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);
extern M2C_UNK lbl_804A69C0[];

void *fn_80130324(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69C0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

}
