#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__19TWindowKeyBoardSoftFPv(u8 *arg0);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);

void init__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv(arg0 + 0x84);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & ~0x86);
}

}
