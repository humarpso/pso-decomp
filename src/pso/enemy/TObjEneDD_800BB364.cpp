#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800BB45C_lbl_80500B98 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 TObjEneDD__sub_800BB484(s32, void *, f32);
extern RecoveredGlobal_800BB45C_lbl_80500B98 lbl_80500B98;
void TObjEneDD__sub_800BB45C(s32 arg0, f32 farg0);
}

extern "C" {

void set_squared_value__9TObjEneDDFf(f32 farg0);
M2C_UNK TObjEneDD__sub_800BB388(f32);

void set_squared_value__9TObjEneDDFf(f32 farg0) {
    TObjEneDD__sub_800BB388(farg0 * farg0);
}
typedef char RecoveredGlobal_800BB45C_lbl_80500B98_size[sizeof(RecoveredGlobal_800BB45C_lbl_80500B98) == 0x20 ? 1 : -1];
void TObjEneDD__sub_800BB45C(s32 arg0, f32 farg0) {
    TObjEneDD__sub_800BB484(arg0, &lbl_80500B98.value, farg0);
}

}
