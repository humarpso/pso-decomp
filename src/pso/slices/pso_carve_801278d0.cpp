#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80108620(s32, void *, M2C_UNK, M2C_UNK);
s32 fn_8011E384(void *);
M2C_UNK fn_8011E618(void *);
M2C_UNK fn_8011F5E0(void *);
s32 fn_8011F63C();
s32 fn_80121CA8(void *);
M2C_UNK create__9TTecJelinFiiii(s32, s32, s32, M2C_UNK);
M2C_UNK create_instance__9TTecZaruaFiiii(s32, s32, s32, M2C_UNK);
extern s32 tl_05;

void fn_801278D0(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (fn_8011F63C() == 0) {
        fn_80108620(tl_05, arg0, 2, 1);
    }
    if (fn_8011E384(arg0) != 0) {
        if (fn_80121CA8(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4 = temp_r3 + 0x38;
            create__9TTecJelinFiiii(temp_r3, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4_2 = temp_r3_2 + 0x38;
            create_instance__9TTecZaruaFiiii(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        fn_8011E618(arg0);
        return;
    }
    fn_8011F5E0(arg0);
}

}
