#include "types.h"

struct RecoveredGlobal_801F43A8_lbl_805127B0 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
extern RecoveredGlobal_801F43A8_lbl_805127B0 offline_quest_filename_buffer_b;
s32 *fn_801F43A8(void);
}

extern "C" {

typedef char RecoveredGlobal_801F43A8_lbl_805127B0_size[sizeof(RecoveredGlobal_801F43A8_lbl_805127B0) == 0x20 ? 1 : -1];
s32 *fn_801F43A8(void) {
    return &offline_quest_filename_buffer_b.value;
}

}
