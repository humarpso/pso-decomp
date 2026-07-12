#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0);

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFE);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = -1;
}

}
