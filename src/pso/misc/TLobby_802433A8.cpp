#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802433A8(void);
void xfree__FPv(void*);

extern u32 lbl_805D63E0;

void TLobby__sub_802433A8(void) {
    if ((u32) lbl_805D63E0 != 0U) {
        xfree__FPv((void*)lbl_805D63E0);
        lbl_805D63E0 = 0U;
    }
}

}
