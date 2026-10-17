#include "types.h"
#include "pso/unk/text_800F8A78.h"

struct RecoveredGlobal_800F8A78_lbl_80501178 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 memset(void *, int, int);
extern RecoveredGlobal_800F8A78_lbl_80501178 player_name_copy_buffer;
typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void fn_800F8A78(void) {
    memset((void *) (&player_name_copy_buffer.value), 0, 0x10);
}

}
