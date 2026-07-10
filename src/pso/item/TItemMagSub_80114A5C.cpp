#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_stats__11TItemMagSubFPv(u8 *arg0);

M2C_UNK memset(void *, int, int);
extern const f32 lbl_805DABC8;

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) lbl_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DABC8;
}

}
