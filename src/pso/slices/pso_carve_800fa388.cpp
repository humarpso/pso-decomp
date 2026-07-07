#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Ent;
u8 *fn_800F9F74(M2C_UNK);
u8 *fn_800FA848();
M2C_UNK strncpy(void *, s32, M2C_UNK);
s32 fn_803CC500(s32);
s32 fn_803CC53C(s32);
M2C_UNK fn_803CCE9C(s32);
s32 fn_803CD3A8(s32, M2C_UNK);

s32 fn_800FA388(s32 arg0, s32 arg1, s32 *arg2, void **arg3) {
    struct Ent *var_r31;
    s32 temp_r3;

    if (arg3 != NULL) {
        *arg3 = NULL;
    }
    temp_r3 = fn_803CD3A8(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = (struct Ent *)fn_800F9F74(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent *)fn_800FA848();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = fn_803CC500(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x30) = fn_803CC53C(temp_r3);
    fn_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 **, 0x34) = arg2;
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    M2C_FIELD(var_r31, s32 *, 0x40) = 0;
    if (arg3 != NULL) {
        *arg3 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
