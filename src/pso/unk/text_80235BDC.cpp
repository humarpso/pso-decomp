#include "types.h"

struct RecoveredGlobal_80235BDC_lbl_804CCA90 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80235BDC_lbl_804CCA90 lbl_804CCA90;
u8 *construct_delayed_point_sound(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3, u8 *arg4);
typedef char RecoveredGlobal_80235BDC_lbl_804CCA90_size[sizeof(RecoveredGlobal_80235BDC_lbl_804CCA90) == 0x18 ? 1 : -1];
u8 *construct_delayed_point_sound(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3, u8 *arg4) {
    __ct__7TObjectFP7TObject(arg0, arg4);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804CCA90.value;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x1E) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x24, arg1);
    return arg0;
}

}
