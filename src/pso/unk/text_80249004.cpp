#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80249004_lbl_804CE7E8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
void TWindowCheckBox__ct(void *, s16);
u8 * fn_802683F4(void *, s32, s32, s32);
extern RecoveredGlobal_80249004_lbl_804CE7E8 lbl_804CE7E8;
u8 *fn_80249004(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80249004_lbl_804CE7E8_size[sizeof(RecoveredGlobal_80249004_lbl_804CE7E8) == 0x20 ? 1 : -1];
u8 *fn_80249004(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4(arg0, arg1, 5, (s32) arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CE7E8.value;
    TWindowCheckBox__ct(arg0, arg2);
    return arg0;
}

}
