#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowMenuMainMenuFv(u8 *arg0);
M2C_UNK fn_80246258(void *);
M2C_UNK fn_8024664C(void *);
M2C_UNK fn_802AD7F0(void *);
M2C_UNK fn_802AE380(void *);
M2C_UNK fn_802AE59C(void *);

void run_task__19TWindowMenuMainMenuFv(u8 *arg0) {
    s32 var_r31;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *var_r30;

    temp_r3 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3 | 4);
    }
    var_r30 = arg0 + 0x64;
    var_r31 = 0;
    do {
        fn_802AD7F0(var_r30);
        var_r31 += 1;
        var_r30 += 0x18;
    } while (var_r31 < 8);
    fn_802AE59C(arg0);
    fn_8024664C(arg0);
    fn_802AE380(arg0);
    fn_80246258(arg0);
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3_2 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3_2 & 0xFFFFFFF3);
    }
}

}
