#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(void *);
M2C_UNK bswap_32__FPUl(void *);
M2C_UNK fn_801E4AB0(void *, M2C_UNK);
s32 fn_801E4AF0();
u16 fn_801E4B40();
extern s32 lbl_805D5E58;

u16 fn_801E4A44(s32 arg0, u8 *arg1) {
    lbl_805D5E58 = arg0;
    fn_801E4AB0(arg1, 4);
    M2C_FIELD(arg1, s32 *, 4) = fn_801E4AF0();
    M2C_FIELD(arg1, u16 *, 8) = fn_801E4B40();
    M2C_FIELD(arg1, u16 *, 0xA) = fn_801E4B40();
    bswap_32__FPUl(arg1 + 4);
    bswap_16__FPUs(arg1 + 8);
    bswap_16__FPUs(arg1 + 0xA);
    return M2C_FIELD(arg1, u16 *, 0xA);
}

}
