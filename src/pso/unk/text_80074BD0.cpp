#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80074BD0_lbl_8048D208 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void fn_80074C70(void);
void strncpy(s32, s32, s32);
extern RecoveredGlobal_80074BD0_lbl_8048D208 lbl_8048D208;
void fn_80074BD0(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80074BD0_lbl_8048D208_size[sizeof(RecoveredGlobal_80074BD0_lbl_8048D208) == 0x18 ? 1 : -1];
void fn_80074BD0(s32 arg0) {
    fn_80074C70();
    strncpy((s32) &lbl_8048D208.value, arg0, 0x10);
    M2C_FIELD(&lbl_8048D208.value, s8 *, 0x10) = 0;
}

}
