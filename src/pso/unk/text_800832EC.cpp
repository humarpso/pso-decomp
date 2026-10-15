#include "types.h"

struct RecoveredGlobal_800832EC_lbl_8048E5DC {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800832EC_lbl_8048E5DC lbl_8048E5DC;
u8 *fn_800832EC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_800832EC_lbl_8048E5DC_size[sizeof(RecoveredGlobal_800832EC_lbl_8048E5DC) == 0x18 ? 1 : -1];
u8 *fn_800832EC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_8048E5DC.value;
    *(f32 *)((s8 *)arg0 + 0x38) = farg0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2C), (void *) (arg4));
    *(s8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
