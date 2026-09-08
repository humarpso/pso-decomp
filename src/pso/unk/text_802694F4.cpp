#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredFields_802698C4_arg0 {
    u8 unknown_0[0x6C];
    f32 field_6C;
    u8 unknown_70[0x14];
    f32 field_84;
};

extern "C" {
extern const f32 lbl_805DD224;
extern const f32 lbl_805DD228;
void fn_802698C4(struct RecoveredFields_802698C4_arg0 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_802698C4(struct RecoveredFields_802698C4_arg0 *arg0) {
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f1;
    temp_f3 = arg0->field_84;
    temp_f2 = temp_f3 - arg0->field_6C;
    var_f1 = lbl_805DD224 * temp_f2;
    if (var_f1 < lbl_805DD228) {
        var_f1 = lbl_805DD228;
    }
    if (temp_f2 < var_f1) {
        arg0->field_6C = temp_f3;
        return;
    }
    arg0->field_6C += var_f1;
}
#pragma pop

}
