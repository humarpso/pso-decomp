#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjCMAssignMenu__sub_80291064(f32, f32);
extern const f32 lbl_805DD964;
void TChCrEffWall__sub_802910C8(void);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TChCrEffWall__sub_802910C8(void) {
    f32 unused;
    TObjCMAssignMenu__sub_80291064(unused, lbl_805DD964);
}
#pragma pop

}
