#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);
extern const f32 lbl_805DE7A8;
extern const f32 lbl_805DE7B8;

void fn_802D6488(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DE7B8, lbl_805DE7A8);
}

}
