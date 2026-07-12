#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16 arg0);
M2C_UNK fn_801F37CC(int, M2C_UNK);
M2C_UNK fn_801F4790(u16);
s32 get_main_phase();

void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16 arg0) {
    if (get_main_phase() == 0xF) {
        fn_801F37CC(arg0, 0);
        return;
    }
    fn_801F4790(arg0);
}

}
