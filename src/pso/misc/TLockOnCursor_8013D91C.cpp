#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013DC38_lbl_804A7140 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8013DC38_lbl_804A7140_size[sizeof(RecoveredGlobal_8013DC38_lbl_804A7140) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern u8 *lbl_805D5640;
extern s32 lbl_805D5644;
extern s32 TLockOnCursor__data_805D5648;
void TLockOnCursor__sub_8013DBF4(void);
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8013DC38_lbl_804A7140 lbl_804A7140;
extern u8 *lbl_805D5640;
extern s32 lbl_805D5644;
extern s32 TLockOnCursor__data_805D5648;
extern s32 lbl_805D564C;
void TLockOnCursor__sub_8013DC38(void);
}

extern "C" {

struct VOff_8013DE3C_arg0_8013D91C { char pad_0[0x1C]; char f_1C[1]; };

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2);
s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1);
void run_task__13TLockOnCursorFv(s32 arg0);
M2C_UNK TLockOnCursor__sub_8013EB80(s32);
M2C_UNK TLockOnCursor__sub_8013EB8C(s32);
void TLockOnCursor__sub_8013EEC0(void *, void *);
s32 TMainCursor__sub_8013DF08(s32);
void TMainCursor__sub_8013F1F0(void *);
void __construct_array(void *, void *, void *, int, int);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__FPv(s32);
void cleanup__13TLockOnCursorFPv(void *);
void clear_id__10TObjPlayerFPv(void *);
void fn_8013F0A0(void *);
M2C_UNK free_if_owned__13TLockOnCursorFis(s32, s32);
void init_cursor__13TLockOnCursorFPv(void *);
void init_forward__10TObjPlayerFPv(void *);
void init_forward__13TLockOnCursorFPv(void *);
void init_vtable__13TLockOnCursorFPv(void *);
void reset_fields__13TLockOnCursorFPv(void *);

void run_task__13TLockOnCursorFv(s32 arg0) {
    if (TMainCursor__sub_8013DF08(arg0 + 0x520) != 0) {
        TLockOnCursor__sub_8013EB8C(arg0 + 0x520);
        return;
    }
    TLockOnCursor__sub_8013EB80(arg0 + 0x520);
}

void TLockOnCursor__sub_8013DBF4(void) {
    if ((void *) lbl_805D5640 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5640, 1);
        lbl_805D5640 = NULL;
    }
    lbl_805D5644 = 0;
    TLockOnCursor__data_805D5648 = 0;
}

void TLockOnCursor__sub_8013DC38(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) lbl_805D5640 == NULL) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804A7140.value, 0, 0, 0));
        }
        lbl_805D5640 = (unsigned char *) ((void *) var_r0);
        if ((u32) var_r0 != 0U) {
            lbl_805D5644 = TObjFish__sub_8001EDC4((void *) var_r0, 0);
            TLockOnCursor__data_805D5648 = TObjFish__sub_8001EDC4(lbl_805D5640, 0);
            lbl_805D564C = TObjFish__sub_8001EDC4(lbl_805D5640, 2);
        }
    }
}

s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_owned__13TLockOnCursorFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TLockOnCursor[];
extern M2C_UNK TLockOnCursor__sub_8013EFB8[];
extern M2C_UNK __dt_deleting__13TLockOnCursorFis[];
extern void *lbl_805D2CB4;

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8013DE3C_arg0_8013D91C *self = (struct VOff_8013DE3C_arg0_8013D91C *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TLockOnCursor;
    init_forward__10TObjPlayerFPv(self->f_1C);
    fn_8013F0A0((void *)((char *)arg0 + 36));
    reset_fields__13TLockOnCursorFPv((void *)((char *)arg0 + 60));
    TMainCursor__sub_8013F1F0((void *)((char *)arg0 + 72));
    __construct_array((void *)((char *)arg0 + 92), TLockOnCursor__sub_8013EFB8, __dt_deleting__13TLockOnCursorFis, 292, 4);
    cleanup__13TLockOnCursorFPv((void *)((char *)arg0 + 1260));
    init_forward__13TLockOnCursorFPv((void *)((char *)arg0 + 1288));
    init_cursor__13TLockOnCursorFPv((void *)((char *)arg0 + 1296));
    init_vtable__13TLockOnCursorFPv((void *)((char *)arg0 + 1312));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CB4;
    TLockOnCursor__sub_8013EEC0(arg0, arg2);
    clear_id__10TObjPlayerFPv(self->f_1C);
    return arg0;
}

}
