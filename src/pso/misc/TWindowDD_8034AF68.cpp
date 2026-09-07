#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034B008_lbl_80478B78 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s32 TWindowDD__sub_8034B050(void *);
extern RecoveredGlobal_8034B008_lbl_80478B78 lbl_80478B78;
s32 TWindowDD__sub_8034B008(s32 arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8034B008_lbl_80478B78_size[sizeof(RecoveredGlobal_8034B008_lbl_80478B78) == 0x30 ? 1 : -1];
s32 TWindowDD__sub_8034B008(s32 arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80478B78.value) + (TWindowDD__sub_8034B050((void *) (arg1)) * 8))) + (arg0 * 4)), s32 *, 0);
}

}
