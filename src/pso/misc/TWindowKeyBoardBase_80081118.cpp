#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(u32);
M2C_UNK __dl__FPv(u32 *);

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
