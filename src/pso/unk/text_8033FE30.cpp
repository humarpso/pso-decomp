#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8033FE30_lbl_80478554 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern RecoveredGlobal_8033FE30_lbl_80478554 lbl_80478554;
extern const f32 lbl_805DFAFC;
extern const f32 lbl_805DFB00;
extern const f32 lbl_805DFB04;
void fn_8033FE30(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8033FE30_lbl_80478554_size[sizeof(RecoveredGlobal_8033FE30_lbl_80478554) == 0xC ? 1 : -1];
void fn_8033FE30(u8 *arg0) {
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    temp_f29 = (lbl_805DFB00 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x5C))) + lbl_805DFAFC;
    temp_f30 = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x58));
    temp_f31 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x58));
    VecCopy__FP3VecPC3Vec(arg0 + 0x40, &lbl_80478554.value);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((temp_f30 * temp_f29) + M2C_FIELD(arg0, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((temp_f31 * temp_f29) + M2C_FIELD(arg0, f32 *, 0x48));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) + lbl_805DFB04);
}
#pragma pop

}
