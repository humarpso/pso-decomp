#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);
s32 fn_80019248();

s32 obj_getField1c(s32);

void spawn_effect__10TObjPlayerFi(s32 arg0) {
    if (fn_80019248() != 0) {
        spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, obj_getField1c(arg0));
    }
}

}
