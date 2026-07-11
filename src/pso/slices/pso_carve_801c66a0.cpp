#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv();
u32 TParticleCtrl__sub_801C6650(void *);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804C3FF0[];

void *fn_801C66A0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FF0;
        if (TParticleCtrl__sub_801C6650(arg0) != 0U) {
            queue_destruction__7TObjectFv();
        }
        __dt__7TObjectFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
