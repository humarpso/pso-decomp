#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2);
void TLockOnCursor__sub_8013EEC0(void *, void *);
void init_vtable__13TLockOnCursorFPv(void *);
void init_cursor__13TLockOnCursorFPv(void *);
void TLockOnCursor__sub_8013EF3C(void *);
void cleanup__13TLockOnCursorFPv(void *);
void reset_fields__13TLockOnCursorFPv(void *);
void TObjPlayer__sub_8001BF10(void *);
void __ct__7TObjectFP7TObject(void *);
void TObjPlayer__sub_8001BF40(void *);
void fn_8013F0A0(void *);
void TMainCursor__sub_8013F1F0(void *);

extern M2C_UNK __vt__13TLockOnCursor[];
extern M2C_UNK TLockOnCursor__sub_8013EFB8[];
extern M2C_UNK __dt_deleting__13TLockOnCursorFis[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2CB4;
struct VOff_8013DE3C_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8013DE3C_arg0 *self = (struct VOff_8013DE3C_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TLockOnCursor;
    TObjPlayer__sub_8001BF10(self->f_1C);
    fn_8013F0A0((void *)((char *)arg0 + 36));
    reset_fields__13TLockOnCursorFPv((void *)((char *)arg0 + 60));
    TMainCursor__sub_8013F1F0((void *)((char *)arg0 + 72));
    __construct_array((void *)((char *)arg0 + 92), TLockOnCursor__sub_8013EFB8, __dt_deleting__13TLockOnCursorFis, 292, 4);
    cleanup__13TLockOnCursorFPv((void *)((char *)arg0 + 1260));
    TLockOnCursor__sub_8013EF3C((void *)((char *)arg0 + 1288));
    init_cursor__13TLockOnCursorFPv((void *)((char *)arg0 + 1296));
    init_vtable__13TLockOnCursorFPv((void *)((char *)arg0 + 1312));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CB4;
    TLockOnCursor__sub_8013EEC0(arg0, arg2);
    TObjPlayer__sub_8001BF40(self->f_1C);
    return arg0;
}

}
