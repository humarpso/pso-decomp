#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80298F8C_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
extern RecoveredGlobal_80298F8C_lbl_805409C8 creation_input_state;
u8 TChCrCharSelect__sub_80298F8C(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80298F8C_lbl_805409C8_size[sizeof(RecoveredGlobal_80298F8C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TChCrCharSelect__sub_80298F8C(s32 arg0) {
    return (u8) ((M2C_FIELD(&creation_input_state.value, s32 *, 0x14) & arg0) != 0);
}

}
