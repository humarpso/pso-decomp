#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scale_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053504(void *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
M2C_UNK TRaderMapCore__sub_80053914(void *, M2C_UNK *);
M2C_UNK set_map_position__13TRaderMapCoreFPvPv(void *, M2C_UNK *);
f32 calc_boss4_scale__10TObjPlayerFi();

extern const f64 lbl_80437620[];

void update_scale_state__11TBoss4Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_80437620[0]) {
            TBoss4Type2__sub_80053504(arg0);
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        TRaderMapCore__sub_80053914(arg0, &sp8);
        set_map_position__13TRaderMapCoreFPvPv(arg0, &sp8);
        TBoss4Type2__sub_80053CEC(arg0, var_r31);
    }
}

}
