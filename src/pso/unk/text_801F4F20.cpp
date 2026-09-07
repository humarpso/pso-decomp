#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F4F20_lbl_80512B18 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_801F4F20_lbl_80512B18 lbl_80512B18;
void fn_801F4F20(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_801F4F20_lbl_80512B18_size[sizeof(RecoveredGlobal_801F4F20_lbl_80512B18) == 0x10 ? 1 : -1];
void fn_801F4F20(s32 arg0) {
    strncpy((void *) (&lbl_80512B18.value), (void *) (arg0), (int) (8));
    M2C_FIELD(&lbl_80512B18.value, s8 *, 8) = 0;
}

}
