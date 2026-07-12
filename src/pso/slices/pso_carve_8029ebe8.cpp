#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TAdSinglePlyChrSelectGC__sub_8007EB94(M2C_UNK);
s32 fn_8029E764();
M2C_UNK fn_8029F6C0();
extern s32 lbl_805D65F0;
extern s32 lbl_805D65F4;
extern u32 lbl_805D65FC;

void fn_8029EBE8(void) {
    u32 temp_r3;

    if (fn_8029E764() != 0) {
        lbl_805D65F4 = 0;
        temp_r3 = TAdSinglePlyChrSelectGC__sub_8007EB94(0x28);
        lbl_805D65FC = temp_r3;
        if (temp_r3 != 0U) {
            fn_8029F6C0();
            lbl_805D65F0 = lbl_805D65FC + 0x1C;
        }
    }
}

}
