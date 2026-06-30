#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 to_be_uint16_t__FUs(u16);
M2C_UNK memcpy(s32, void *, u16);
extern s32 lbl_805D5CF8;
extern s32 lbl_805D5CFC;

void copy_packet__FP6packet(void *arg0) {
    s32 len;

    len = (u16) to_be_uint16_t__FUs(M2C_FIELD(arg0, u16 *, 2));
    if (lbl_805D5CFC + len <= 0x10000) {
        memcpy(lbl_805D5CF8 + lbl_805D5CFC, arg0, len);
        lbl_805D5CFC += len;
    }
}

}
