#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F8A78_lbl_80501178 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_800F8A78_lbl_80501178 player_name_copy_buffer;
void fn_800F8A78(void);
}

extern "C" {

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void fn_800F8A78(void) {
    memset((void *) (&player_name_copy_buffer.value), (int) (0), (int) (0x10));
}

}
