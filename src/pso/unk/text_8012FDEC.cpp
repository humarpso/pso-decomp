#include "types.h"
#include "pso/item/TUnk_804A67D0.h"
#include "pso/unk/text_8012FDEC.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {
s32 play_sound_effect(int, int, int, int);
extern const f32 lbl_805DAFD0;
extern const f32 lbl_805DAFD4;
extern const f32 lbl_805DAFD8;
void TUnk_804A67D0::update_idle() {
    f32 temp_f2;
    s32 var_r31;
    var_r31 = 0;
    temp_f2 = *(f32 *)((s8 *)((u8 *)this) + 0x1F8);
    if (temp_f2 < lbl_805DAFD0) {
        *(f32 *)((s8 *)((u8 *)this) + 0x1F8) = (f32) (temp_f2 + lbl_805DAFD4);
        if (lbl_805DAFD0 <= *(f32 *)((s8 *)((u8 *)this) + 0x1F8)) {
            *(f32 *)((s8 *)((u8 *)this) + 0x1F8) = (f32) lbl_805DAFD0;
            var_r31 = 1;
        }
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x1FC), (f32)lbl_805DAFD8, (f32)lbl_805DAFD0);
    TItemEffOrgaFlowShot::approach_value((f32 *)(((u8 *)this) + 0x200), (f32)lbl_805DAFD4, (f32)lbl_805DAFD0);
    if (var_r31 == 1) {
        play_sound_effect(0x4001AA24, (int) (*(s32 *)((s8 *)((u8 *)this) + 0xF0) + 0x38), 0, 0);
    }
}

}
