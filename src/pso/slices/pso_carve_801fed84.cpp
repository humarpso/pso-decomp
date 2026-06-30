#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 fn_8001C5E8();
s32 TAdPlayerLoadGC__sub_80076BBC();
M2C_UNK fn_801FDA4C();
M2C_UNK fn_801FF58C();
M2C_UNK fn_80200470();
M2C_UNK fn_802015F4();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 fn_801FED84(void) {
    lbl_805D5F7C = (s32) fn_8001C5E8();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        fn_801FF58C();
        fn_802015F4();
        fn_80200470();
        fn_801FDA4C();
        lbl_805D5F78 = 6;
        return 7;
    }
    return 0xFFFF0000;
}

}
