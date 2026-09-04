#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowDD__sub_80341AE0(u8 *arg0);
void TWindowDD__sub_80341AF8(u8 *arg0);
}

extern "C" {

s32 TWindowDD__sub_80341AC0(void);
void set_mode_2__9TWindowDDFPv(void* p);
void reset_cursor__9TWindowDDFPv(void* p);

s32 TWindowDD__sub_80341AC0(void) { return 0; }

void TWindowDD__sub_80341AE0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 1);
    M2C_FIELD(arg0, s32 *, 0x8C) = 1;
}

void TWindowDD__sub_80341AF8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x8C) = 1;
}

}
