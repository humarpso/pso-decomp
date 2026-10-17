#include "types.h"

struct RecoveredGlobal_80364C40_lbl_804F2B60 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80364C40_lbl_804F2B60 lbl_804F2B60;
u8 *fn_80364C40(u8 *arg0, s16 arg1, u8 *arg2, f32 farg0);
typedef char RecoveredGlobal_80364C40_lbl_804F2B60_size[sizeof(RecoveredGlobal_80364C40_lbl_804F2B60) == 0x18 ? 1 : -1];
u8 *fn_80364C40(u8 *arg0, s16 arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804F2B60.value;
    *(f32 *)((s8 *)arg0 + 0x1C) = farg0;
    *(s16 *)((s8 *)arg0 + 0x20) = arg1;
    return arg0;
}

}
