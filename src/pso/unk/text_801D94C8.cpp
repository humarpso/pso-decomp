#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801D94C8_lbl_804C4A20 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s8 TObjPlayer__sub_801AFDBC(s8);
extern RecoveredGlobal_801D94C8_lbl_804C4A20 lbl_804C4A20;
f32 get_class_technique_boost(s8 arg0, s16 arg1);
}

extern "C" {

typedef char RecoveredGlobal_801D94C8_lbl_804C4A20_size[sizeof(RecoveredGlobal_801D94C8_lbl_804C4A20) == 0x30 ? 1 : -1];
f32 get_class_technique_boost(s8 arg0, s16 arg1) {
    M2C_UNK *var_r3;
    s16 var_r31;
    s32 var_r4;
    var_r31 = arg1;
    var_r3 = (M2C_UNK *)(&lbl_804C4A20.value);
    var_r4 = TObjPlayer__sub_801AFDBC(arg0) * 4;
    var_r3 = (M2C_UNK *)(&lbl_804C4A20.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(((u8 *)(&lbl_804C4A20.value) + var_r4), M2C_UNK **, 0));
    return M2C_FIELD(((u8 *)(var_r3) + (var_r31 * 4)), f32 *, 0);
}

}
