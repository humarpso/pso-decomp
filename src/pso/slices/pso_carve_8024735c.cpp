#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
M2C_UNK fn_8024792C(void *);
M2C_UNK fn_80247DFC(void *);
M2C_UNK fn_80247E50(void *);
s32 fn_80247EB4();

void fn_8024735C(void *arg0) {
    if (fn_80247EB4() != 0) {
        fn_80247E50(arg0);
        fn_80247DFC(arg0);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
        fn_8024792C(arg0);
    }
}

}
