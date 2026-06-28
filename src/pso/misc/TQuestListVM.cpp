#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestListVM__sub_80218570(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);

s32 TQuestListVM__sub_80218570(void *arg0) {
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    M2C_FIELD(arg0, s32 *, 0x23A4) = 0;
    do {
        if (TAdPlayerLoadGC__sub_801E1E38(var_r30) != 0) {
            M2C_FIELD(arg0, s32 *, 0x23A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x23A4) | (1 << var_r30));
        }
        var_r30 += 1;
    } while (var_r30 < 2);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x23A4);
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x23A8)) {
        M2C_FIELD(arg0, s32 *, 0x23A8) = temp_r3;
        return 1;
    }
    return 0;
}

}
