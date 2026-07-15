#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__17TMedicalCenterMesFPvs(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CA27C[];

void *destroy__17TMedicalCenterMesFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = lbl_804CA27C;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20C));
            M2C_FIELD(arg0, u32 *, 0x20C) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
