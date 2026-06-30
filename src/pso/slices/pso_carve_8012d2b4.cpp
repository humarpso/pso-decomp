#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010853C(s32, void *, M2C_UNK, M2C_UNK);
u8 TItemProShield__sub_8010B734();
M2C_UNK fn_8011E2FC(void *, f32);
s32 fn_8011E384(void *);
M2C_UNK fn_8011F5E0(void *);
s32 fn_801207E8(void *, M2C_UNK, M2C_UNK *);
M2C_UNK TTecMegid__sub_80235638(void *, M2C_UNK *, s32, M2C_UNK);
extern s32 tl_05;
extern f32 lbl_805DAF18;

void fn_8012D2B4(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    if (TItemProShield__sub_8010B734() == 1) {
        fn_8010853C(tl_05, arg0, 2, 0x101);
        if (fn_8011E384(arg0) != 0) {
            if (fn_801207E8(arg0, 2, &sp8) != 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
                TTecMegid__sub_80235638(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 0);
                fn_8011E2FC(arg0, lbl_805DAF18);
            }
        } else {
            fn_8011F5E0(arg0);
        }
    }
}

}
