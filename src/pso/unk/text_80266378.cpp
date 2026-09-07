#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80266378_lbl_804D05A8 {
    M2C_UNK value;
    u8 remaining[0x20];
};

extern "C" {
extern RecoveredGlobal_80266378_lbl_804D05A8 lbl_804D05A8;
void fn_80266378(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80266378_lbl_804D05A8_size[sizeof(RecoveredGlobal_80266378_lbl_804D05A8) == 0x24 ? 1 : -1];
void fn_80266378(s32 arg0) {
    M2C_FIELD(&lbl_804D05A8.value, s32 *, 4) = arg0;
}

}
