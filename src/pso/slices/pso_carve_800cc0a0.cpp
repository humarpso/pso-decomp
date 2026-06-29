#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *lbl_805D51B0;

void TObjEneMe1Gee__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D51B0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D51B0, void **, 0x42C), s32 *, 0xC);
}

}
