#include "types.h"

struct RecoveredGlobal_800F8A78_lbl_80501178 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 memset(void *, int, int);
extern RecoveredGlobal_800F8A78_lbl_80501178 player_name_copy_buffer;
void fn_800F8A78(void);
}

extern "C" {

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void fn_800F8A78(void) {
    memset((void *) (&player_name_copy_buffer.value), (int) (0), (int) (0x10));
}

}
