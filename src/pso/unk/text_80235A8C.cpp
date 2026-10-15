#include "types.h"

struct RecoveredGlobal_80235A8C_lbl_804CCA78 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80235A8C_lbl_804CCA78_size[sizeof(RecoveredGlobal_80235A8C_lbl_804CCA78) == 0x18 ? 1 : -1];

extern "C" {
s32 update_technique_slot__10TTecRaFoieFl(int, void *, int);
s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80235A8C_lbl_804CCA78 lbl_804CCA78;
u8 *construct_timed_sound_voice(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5);
}

extern "C" {

u8 *construct_timed_sound_voice(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg5));
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804CCA78.value;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x1E) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = arg3;
    *(s32 *)((s8 *)arg0 + 0x24) = play_sound_effect((int) (*(s32 *)((s8 *)arg0 + 0x20)), (void *) (arg1), (int) (0), (int) (0));
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x24);
    if ((temp_r3 >= 0) && (arg4 != 0)) {
        update_technique_slot__10TTecRaFoieFl((int) (temp_r3), (void *) (arg4), (int) (0));
    }
    return arg0;
}

}
