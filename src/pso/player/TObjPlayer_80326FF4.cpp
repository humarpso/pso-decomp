#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_80327020(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805DF684;
extern const f32 lbl_805DF688;

void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DF684, lbl_805DF688);
}

extern const f32 lbl_805DF680;
extern const f32 lbl_805DF68C;

void TObjPlayer__sub_80327020(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1F8, lbl_805DF68C, lbl_805DF680);
}

}
