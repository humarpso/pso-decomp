#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 fn_8001C5E8();
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E1B50(void*);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
s32 fn_801FE75C();
extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 fn_801FECDC(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) fn_8001C5E8();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = fn_801FE75C();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

}
