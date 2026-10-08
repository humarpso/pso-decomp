#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
M2C_UNK play_sound_effect(int, int, int, int);
extern const f32 lbl_805DAF98;
extern const f32 lbl_805DAF9C;
extern const f32 lbl_805DAFA0;
void update_charge_ramp__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void update_charge_ramp__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f2;
    s32 var_r31;
    var_r31 = 0;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1F8);
    if (temp_f2 < lbl_805DAF98) {
        M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) (temp_f2 + lbl_805DAF9C);
        if (lbl_805DAF98 <= M2C_FIELD(arg0, f32 *, 0x1F8)) {
            M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DAF98;
            var_r31 = 1;
        }
    }
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DAFA0), (f32) (lbl_805DAF98));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x200), (f32) (lbl_805DAF9C), (f32) (lbl_805DAF98));
    if (var_r31 == 1) {
        play_sound_effect((int) (0x4001AA24), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
}

}
