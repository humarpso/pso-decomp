#include "types.h"

struct RecoveredGlobal_800F8A0C_lbl_80501178 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_800F8A0C_lbl_80501178 player_name_copy_buffer;
s32 *get_player_name_copy_buffer(void);
typedef char RecoveredGlobal_800F8A0C_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A0C_lbl_80501178) == 0x10 ? 1 : -1];
s32 *get_player_name_copy_buffer(void) {
    return &player_name_copy_buffer.value;
}

}
