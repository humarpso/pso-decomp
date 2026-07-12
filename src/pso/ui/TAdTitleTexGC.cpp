#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TAdTitleTexGCFv(void *arg0);

s32 TMainTask__sub_8001A430();
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_802A4D74(void *, s32, s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_802A4DE8(void *, s32);

void render__13TAdTitleTexGCFv(void *arg0) {
    s32 temp_r31;

    if (TMainTask__sub_8001A430() != 1) {
        TWindowSubStatusDisp__sub_802A4DE8(arg0, (M2C_FIELD(arg0, s32 *, 0x7C) << 0x18) | 0xFF0000 | 0xFFFF);
        fn_802A4D74(arg0, (M2C_FIELD(arg0, s32 *, 0x7C) << 0x18) | 0xFF0000 | 0xFFFF, TAdSinglePlyChrSelectGC__sub_80132F2C(0x28, 0), TAdSinglePlyChrSelectGC__sub_80132F2C(0x28, 1));
    }
}

}
