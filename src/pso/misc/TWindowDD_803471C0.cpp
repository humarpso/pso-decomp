#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowDD__sub_80347238(s16 arg0);
u8 is_id_in_special_range__9TWindowDDFs(s16 id);
}

extern "C" {

void open__9TWindowDDFii(s32 arg0, s32 arg1);
M2C_UNK open__11TWindowCtrlFiii(s32, s32, M2C_UNK);
M2C_UNK update_state__9TWindowDDFv(s32, s32, s32);

extern s32 lbl_805D6E10;

void open__9TWindowDDFii(s32 arg0, s32 arg1) {
    update_state__9TWindowDDFv(arg0, lbl_805D6E10, arg1);
    open__11TWindowCtrlFiii(arg1, lbl_805D6E10, 0x4F);
}

u8 is_id_in_special_range__9TWindowDDFs(s16 id) {
    s32 r = 0;
    if (id >= 0x45d && id <= 0x46f && id != 0x46d && id != 0x46e) {
        r = 1;
    }
    return r;
}

s32 TWindowDD__sub_80347238(s16 arg0) {
    u8 var_r3;
    var_r3 = 0;
    if ((arg0 >= 0x300) && (arg0 <= 0x395)) {
        var_r3 = 1;
    }
    return var_r3;
}

}
