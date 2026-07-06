#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 dispatch_quest_opcode();
M2C_UNK fn_801F2EF4(s32);
M2C_UNK fn_801F301C();

s32 fn_801F2D44(s32 arg0) {
    s32 temp_r31;

    fn_801F301C();
    temp_r31 = dispatch_quest_opcode();
    fn_801F2EF4(arg0);
    return temp_r31;
}

}
