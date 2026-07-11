#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__10TAdTitleGCFv(u8 *arg0);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
s32 TMainTask__sub_8001A430();
s32 fn_80132F2C(M2C_UNK, s32);
M2C_UNK fn_80141A30();
s32 fn_8022A564();
M2C_UNK fn_802A0A30(void *, void *, s32, s32, s32);
M2C_UNK TAdTitleGC__sub_802A0A60(void *, s32, M2C_UNK);
M2C_UNK set_depth_buffer_settings_2__Fv();

void render__10TAdTitleGCFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 1) {
        if (TMainTask__sub_8001A430() == 1) {
            return;
        }
        goto block_5;
    }
    if (fn_8022A564() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdTitleGC__sub_802A0A60(arg0, M2C_FIELD(arg0, s32 *, 0x1C), 0x1FFFFFFF);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        fn_802A0A30(arg0, arg0 + 0x120, M2C_FIELD(arg0, s32 *, 0x1C), (M2C_FIELD(arg0, s32 *, 0x12C) << 0x18) | 0xFF0000 | 0xFFFF, fn_80132F2C(0x13, M2C_FIELD(arg0, s32 *, 0x1C)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 0) {
            fn_80141A30();
        }
    }
}

}
