#include "types.h"
#include "pso/unk/text_8012F0F8.h"
#include "pso/item/TItemEffOrgaFlowShot.h"

extern "C" {
s32 play_sound_effect(int, int, int, int);
extern const f32 lbl_805DAF98;
extern const f32 lbl_805DAF9C;
extern const f32 lbl_805DAFA0;
void madam_parasol_close(u8 *arg0) {
    f32 temp_f2;
    s32 var_r31;
    var_r31 = 0;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x1F8);
    if (temp_f2 < lbl_805DAF98) {
        *(f32 *)((s8 *)arg0 + 0x1F8) = (f32) (temp_f2 + lbl_805DAF9C);
        if (lbl_805DAF98 <= *(f32 *)((s8 *)arg0 + 0x1F8)) {
            *(f32 *)((s8 *)arg0 + 0x1F8) = (f32) lbl_805DAF98;
            var_r31 = 1;
        }
    }
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x1FC), (f32)((f32) (lbl_805DAFA0)), (f32)((f32) (lbl_805DAF98)));
    TItemEffOrgaFlowShot::approach_value((f32 *)(arg0 + 0x200), (f32)((f32) (lbl_805DAF9C)), (f32)((f32) (lbl_805DAF98)));
    if (var_r31 == 1) {
        play_sound_effect(0x4001AA24, (int) (*(s32 *)((s8 *)arg0 + 0xF0) + 0x38), 0, 0);
    }
}

}
