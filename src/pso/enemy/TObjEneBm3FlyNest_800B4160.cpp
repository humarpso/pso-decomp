#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm3FlyNest__sub_800B4160(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneBm3Fly__sub_800B2214();

extern u32 lbl_805D5108;

void TObjEneBm3FlyNest__sub_800B4160(void) {
    TObjEneBm3Fly__sub_800B2214();
    if ((u32) lbl_805D5108 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5108, 1);
        lbl_805D5108 = 0U;
    }
}

}
