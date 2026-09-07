#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F498C_lbl_805127F8 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_801F498C_lbl_805127F8 lbl_805127F8;
void fn_801F498C(void);
}

extern "C" {

typedef char RecoveredGlobal_801F498C_lbl_805127F8_size[sizeof(RecoveredGlobal_801F498C_lbl_805127F8) == 0x200 ? 1 : -1];
void fn_801F498C(void) {
    memset((void *) (&lbl_805127F8.value), (int) (0), (int) (0x200));
}

}
