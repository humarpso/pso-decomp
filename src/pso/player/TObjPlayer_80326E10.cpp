#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_orga_flow_params__10TObjPlayerFi(s32 arg0);
void approach_positions__10TObjPlayerFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DF664;
extern const f32 lbl_805DF668;
extern const f32 lbl_805DF66C;
extern const f32 lbl_805DF670;

void update_orga_flow_params__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF664), (f32) (lbl_805DF668));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF66C), (f32) (lbl_805DF670));
}

extern const f32 lbl_805DF660;
extern const f32 lbl_805DF670;
extern const f32 lbl_805DF674;

void approach_positions__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF670), (f32) (lbl_805DF660));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF674), (f32) (lbl_805DF660));
}

}
