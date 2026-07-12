#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shot_charge__10TObjPlayerFPv(u8 *arg0);
void approach_and_notify__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAED0;
extern const f32 lbl_805DAED4;

void update_shot_charge__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BC0((void *) (arg0 + 0x278), (int) (0x38E), (int) (0x2AAA));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x278) == 0x2AAA) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED0), (f32) (lbl_805DAED4));
    }
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAED8;

void approach_and_notify__10TObjPlayerFPv(u8 *arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED8), (f32) (lbl_805DAEC8));
    if (lbl_805DAEC8 == M2C_FIELD(arg0, f32 *, 0x274)) {
        TObjPlayer__sub_80115BC0((void *) (arg0 + 0x278), (int) (-0x71C), (int) (0));
    }
}

}
