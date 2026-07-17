#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all_units__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TItemProUnit__sub_801D98F8(s32, s16, s32);
s32 is_invalid_slot__10TObjPlayerFUc();
M2C_UNK fn_801D9870(s32, s16);

void update_all_units__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = 0;
    do {
        fn_801D9870(arg0, (s16) var_r31);
        if (is_invalid_slot__10TObjPlayerFUc() == 0) {
            TItemProUnit__sub_801D98F8(arg0, (s16) var_r31, arg1);
        }
        var_r31 += 1;
    } while (var_r31 < 0x13);
}

}
