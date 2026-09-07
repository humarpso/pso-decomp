#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8036A450_lbl_8047AC1C { M2C_UNK value; u8 remaining[0x20]; };
typedef char RecoveredGlobal_8036A450_lbl_8047AC1C_size[sizeof(RecoveredGlobal_8036A450_lbl_8047AC1C) == 0x24 ? 1 : -1];

extern "C" {
s32 fn_8036A514(int);
s32 check_flag_index_set(int);
extern RecoveredGlobal_8036A450_lbl_8047AC1C lbl_8047AC1C;
void fn_8036A450(s32 arg0);
}

extern "C" {

void fn_8036A450(s32 arg0) {
    s32 temp_r31;
    if ((arg0 >= 0) && (arg0 < 9)) {
        temp_r31 = M2C_FIELD(&lbl_8047AC1C.value, M2C_UNK *, (arg0 * 4));
        if (check_flag_index_set((int) (temp_r31)) != 1) {
            fn_8036A514((int) (temp_r31));
        }
    }
}

}
