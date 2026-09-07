#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802EFEA8_lbl_80541918 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_802EFEA8_lbl_80541918 lbl_80541918;
extern s32 lbl_805D6948;
void fn_802EFEA8(void);
}

extern "C" {

typedef char RecoveredGlobal_802EFEA8_lbl_80541918_size[sizeof(RecoveredGlobal_802EFEA8_lbl_80541918) == 0x10 ? 1 : -1];
void fn_802EFEA8(void) {
    M2C_FIELD(&lbl_80541918.value, s32 *, 0) = 0;
    lbl_805D6948 = 0;
    M2C_FIELD(&lbl_80541918.value, s32 *, 4) = 0;
    M2C_FIELD(&lbl_80541918.value, s32 *, 8) = 0;
}

}
