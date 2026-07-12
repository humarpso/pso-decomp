#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all_and_init__9TItemBuffFv(void);
M2C_UNK TItemBuff__ct();
M2C_UNK free__11TOBoss4RockFUi(s32);

extern M2C_UNK lbl_80506200[];

void free_all_and_init__9TItemBuffFv(void) {
    s32 var_r28;
    M2C_UNK *var_r29;
    M2C_UNK var_r30;
    s32 var_r31;

    TItemBuff__ct();
    var_r31 = 0;
    var_r30 = var_r31;
    var_r28 = 0;
    var_r29 = lbl_80506200;
    do {
        free__11TOBoss4RockFUi(var_r29[var_r31]);
        var_r28 += 1;
        var_r29[var_r31] = var_r30;
        var_r31 += 1;
    } while (var_r28 != 2);
}

}
