#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
M2C_UNK fn_80257CB8(s32);
M2C_UNK TWindowLockOn__update_for_enemy(s32, s32);
M2C_UNK TWindowLockOn__update_for_item(s32, s32);
M2C_UNK TWindowLockOn__update_for_other_player(s32, s32);

void TWindowLockOn__sub_802635D0(s32 arg0, s32 arg1) {
    fn_80257CB8(arg0 + 0x24);
    if (obj_testFlags30(arg1, 0x10000000) != 0) {
        TWindowLockOn__update_for_other_player(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x80000000) != 0) {
        TWindowLockOn__update_for_item(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x20000000) != 0) {
        TWindowLockOn__update_for_enemy(arg0, arg1);
    }
}

}
