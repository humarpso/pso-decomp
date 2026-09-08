#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D7758;
void TObjPlayer__sub_803DA6E0(u8 *arg0);
}

extern "C" {

void set_render_rect__10TObjPlayerFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void set_render_rect__10TObjPlayerFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}
void TObjPlayer__sub_803DA6E0(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x24) <= 0) {
        M2C_FIELD(temp_r4, s32 *, 0) = -1;
        M2C_FIELD(temp_r4, s32 *, 4) = 0;
        M2C_FIELD(temp_r4, s32 *, 8) = 0;
        M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
        lbl_805D7758 -= 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, u8 **, 0xC) = NULL;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}

}
