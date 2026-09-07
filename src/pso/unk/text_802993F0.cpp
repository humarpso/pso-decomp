#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802993F0_lbl_80465150 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802993F0_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_80299420(void *, void *);
extern RecoveredGlobal_802993F0_lbl_80465150 lbl_80465150;
extern RecoveredGlobal_802993F0_lbl_805409C8 lbl_805409C8;
void fn_802993F0(void);
}

extern "C" {

typedef char RecoveredGlobal_802993F0_lbl_80465150_size[sizeof(RecoveredGlobal_802993F0_lbl_80465150) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802993F0_lbl_805409C8_size[sizeof(RecoveredGlobal_802993F0_lbl_805409C8) == 0x18 ? 1 : -1];
void fn_802993F0(void) {
    fn_80299420((void *) (&lbl_805409C8.value), (void *) (&lbl_80465150.value));
}

}
