#include "types.h"

extern "C" {

void psycho_wand_idle(u8 *arg0);
void psycho_wand_active(u8 *arg0);
s32 add_angle_clamped__10TObjPlayerFPvii(void *, int, int);
s32 approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);

extern const f32 lbl_805DAED0;
extern const f32 lbl_805DAED4;

void psycho_wand_idle(u8 *arg0) {
    add_angle_clamped__10TObjPlayerFPvii((void *) (arg0 + 0x278), (int) (0x38E), (int) (0x2AAA));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x278) == 0x2AAA) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED0), (f32) (lbl_805DAED4));
    }
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAED8;

void psycho_wand_active(u8 *arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x274), (f32) (lbl_805DAED8), (f32) (lbl_805DAEC8));
    if (lbl_805DAEC8 == *(f32 *)((s8 *)arg0 + 0x274)) {
        add_angle_clamped__10TObjPlayerFPvii((void *) (arg0 + 0x278), (int) (-0x71C), (int) (0));
    }
}

}
