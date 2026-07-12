#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK fn_80053504(void *);
M2C_UNK fn_80053914(void *, M2C_UNK *);
M2C_UNK fn_80053A88(void *, M2C_UNK *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
extern const f64 lbl_80437620[];

void fn_80052AE0(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_80437620[0]) {
            fn_80053504(arg0);
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        fn_80053914(arg0, &sp8);
        fn_80053A88(arg0, &sp8);
        TBoss4Type2__sub_80053CEC(arg0, var_r31);
    }
}

}
