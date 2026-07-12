#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
M2C_UNK TWindowSubStatusDisp__sub_802589AC(s32, u8, u8, int, s32, s32);
M2C_UNK fn_80266BD0(s32, u8 *, u8 *, s16);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    u8 sp9;
    u8 sp8;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_80266BD0(arg1, &sp9, &sp8, M2C_FIELD(arg0, s16 *, 0x20));
        TWindowSubStatusDisp__sub_802589AC(get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x72)), sp9, sp8, arg2, arg3, arg4);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
