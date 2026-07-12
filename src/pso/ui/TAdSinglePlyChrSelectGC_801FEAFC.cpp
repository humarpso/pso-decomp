#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF14();
M2C_UNK create_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80242D2C();

extern u32 lbl_805D5F68;
extern u32 lbl_805D5F98;

s32 check_ready__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    TAdSinglePlyChrSelectGC__sub_80242D2C();
    var_r3 = 0;
    if (((u32) lbl_805D5F68 != 0U) && ((u32) lbl_805D5F98 != 0U)) {
        TAdSinglePlyChrSelectGC__sub_801FFF14();
        var_r3 = 1;
    }
    return var_r3;
}

extern u32 lbl_805D5F6C;
extern u32 lbl_805D5F9C;

s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r3;

    TAdSinglePlyChrSelectGC__sub_80242D2C();
    var_r3 = 0;
    if (((u32) lbl_805D5F6C != 0U) && ((u32) lbl_805D5F9C != 0U)) {
        create_instance__23TAdSinglePlyChrSelectGCFv();
        var_r3 = 1;
    }
    return var_r3;
}

}
