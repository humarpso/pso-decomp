#include "types.h"

struct RecoveredGlobal_800A02AC_lbl_80490458 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800A02AC_lbl_80490458 lbl_80490458;
extern s32 TObjEneMe1Canadin_EffLineFade__class_name;
u8 *fn_800A02AC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
typedef char RecoveredGlobal_800A02AC_lbl_80490458_size[sizeof(RecoveredGlobal_800A02AC_lbl_80490458) == 0x18 ? 1 : -1];
u8 *fn_800A02AC(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_80490458.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneMe1Canadin_EffLineFade__class_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg3);
    *(s32 *)((s8 *)arg0 + 0x34) = 0xFFFF0033;
    *(s32 *)((s8 *)arg0 + 0x38) = 0xFFFF0033;
    return arg0;
}

}
