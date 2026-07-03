#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
M2C_UNK fn_802D50B0(s32, M2C_UNK);
M2C_UNK fn_802DE094(void *);
M2C_UNK fn_802E001C(s32, M2C_UNK);
M2C_UNK fn_802E0064(s32, M2C_UNK);
M2C_UNK fn_802E006C(s32, M2C_UNK, M2C_UNK);

void fn_802DE120(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    fn_802E006C(M2C_FIELD(arg0, s32 *, 0x5C), 2, 2);
    fn_802E0064(M2C_FIELD(arg0, s32 *, 0x5C), 2);
    fn_802E001C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    fn_802D50B0(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    fn_802DE094(arg0);
}

}
