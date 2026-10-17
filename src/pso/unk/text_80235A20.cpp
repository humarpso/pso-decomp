#include "types.h"

struct RecoveredGlobal_80235A20_lbl_804CCA78 { s32 value; u8 remaining[0x14]; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void stop_sound_request(s32);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_80235A20_lbl_804CCA78 lbl_804CCA78;
u8 *__dt__13TUnk_804CCA78Fv(u8 *arg0, s16 arg1);
u8 *__dt__13TUnk_804CCA78Fv(u8 *arg0, s16 arg1) {
    s32 temp_r3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804CCA78.value;
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x24);
        if (temp_r3 >= 0) {
            stop_sound_request(temp_r3);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
