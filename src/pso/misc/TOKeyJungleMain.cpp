#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1);

s32 get_main_phase();
M2C_UNK fn_801F3778(int, M2C_UNK, s32);
M2C_UNK fn_801F469C(s32, u16);

void dispatch_by_phase__15TOKeyJungleMainFiUs(s32 arg0, u16 arg1) {
    if (get_main_phase() == 0xF) {
        fn_801F3778(arg1, 0, arg0);
        return;
    }
    fn_801F469C(arg0, arg1);
}

}
