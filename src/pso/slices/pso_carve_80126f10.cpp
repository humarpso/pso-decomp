#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);
extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void fn_80126F10(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA8, lbl_805DADAC);
}

}
