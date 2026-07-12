#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012DEB8(u8 *arg0);
void TObjPlayer__sub_8012DF0C(u8 *arg0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, M2C_UNK, M2C_UNK);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void TObjPlayer__sub_8012DEB8(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x220) < 0x2000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x220, 0x2D8, 0x2000);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF5C, lbl_805DAF60);
}

extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF64;

void TObjPlayer__sub_8012DF0C(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x220) > 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x220, -0x2000, 0);
    }
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x224, lbl_805DAF64, lbl_805DAF58);
}

}
