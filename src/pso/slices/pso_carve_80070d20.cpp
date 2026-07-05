#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80070AB0();
s32 fn_80072B30();
M2C_UNK fn_800733C4(void*);
extern u32 lbl_805D4E28;

void fn_80070D20(void) {
    if ((fn_80070AB0() != 0) && (fn_80072B30() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

}
