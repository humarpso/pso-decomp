#include "types.h"
#include "pso/unk/text_801E4E4C.h"

struct RecoveredGlobal_801E4E4C_lbl_804C57E0 {
    s32 value;
    u8 remaining[0xC];
};

extern RecoveredGlobal_801E4E4C_lbl_804C57E0 lbl_804C57E0;
typedef char RecoveredGlobal_801E4E4C_lbl_804C57E0_size[sizeof(RecoveredGlobal_801E4E4C_lbl_804C57E0) == 0x10 ? 1 : -1];
void construct_texture_wave(u8 *arg0, s32 arg1) {
    *(s32 **)((s8 *)arg0 + 0x50) = &lbl_804C57E0.value;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0) = 0;
    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = arg1;
}
