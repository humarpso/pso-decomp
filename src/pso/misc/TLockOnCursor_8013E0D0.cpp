#include "types.h"

extern "C" {

struct VOff_8013E0D8_arg0_8013e0d8_8013E0D0 { char pad_0[0x1C]; char f_1C[1]; };

void TLockOnCursor__sub_8013E0D0(void* p, s32 v);
void *init__13TLockOnCursorFPvPvPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);
void disallow_rendering__7TObjectFv(void *);
void fn_8013E020(void *);
void set_field_0__13TForceOperateFPvs(void *, void *);

void TLockOnCursor__sub_8013E0D0(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

extern s32 lbl_804A7260[];

void *init__13TLockOnCursorFPvPvPv(void *arg0, void *arg1, void *arg2) {
    struct VOff_8013E0D8_arg0_8013e0d8_8013E0D0 *self = (struct VOff_8013E0D8_arg0_8013e0d8_8013E0D0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A7260;
    fn_8013E020(self->f_1C);
    disallow_rendering__7TObjectFv(arg0);
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

}
