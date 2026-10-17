#include "types.h"

struct RecoveredGlobal_802993F0_lbl_80465150 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802993F0_lbl_805409C8 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void fn_80299420(void *p, void *q);
extern RecoveredGlobal_802993F0_lbl_80465150 lbl_80465150;
extern RecoveredGlobal_802993F0_lbl_805409C8 creation_input_state;
void fn_802993F0(void);
typedef char RecoveredGlobal_802993F0_lbl_80465150_size[sizeof(RecoveredGlobal_802993F0_lbl_80465150) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802993F0_lbl_805409C8_size[sizeof(RecoveredGlobal_802993F0_lbl_805409C8) == 0x18 ? 1 : -1];
void fn_802993F0(void) {
    fn_80299420((&creation_input_state.value), (&lbl_80465150.value));
}

}
