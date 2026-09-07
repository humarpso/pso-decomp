#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802430E8_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

extern "C" {
extern RecoveredGlobal_802430E8_lbl_80518580 lbl_80518580;
M2C_UNK *TAdSinglePlyChrSelectGC__sub_802430E8(void);
}

extern "C" {

typedef char RecoveredGlobal_802430E8_lbl_80518580_size[sizeof(RecoveredGlobal_802430E8_lbl_80518580) == 0x180 ? 1 : -1];
M2C_UNK *TAdSinglePlyChrSelectGC__sub_802430E8(void) {
    return &lbl_80518580.value;
}

}
