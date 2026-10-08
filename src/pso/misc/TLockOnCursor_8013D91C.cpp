#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013DC38_lbl_804A7140 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8013DC38_lbl_804A7140_size[sizeof(RecoveredGlobal_8013DC38_lbl_804A7140) == 0x10 ? 1 : -1];

typedef s32 M2C_UNK;
struct Base_8013DCCC { u8 pad[0x18]; };

struct Obj_8013DCCC : Base_8013DCCC {
    virtual ~Obj_8013DCCC();
};

struct Obj_8013DCCC;
struct Elem_8013DAB0 { u8 b[0x124]; };

struct Cur_8013DAB0 { u8 pad[0x5C]; Elem_8013DAB0 arr[4]; };

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern u8 *lbl_805D5640;
extern s32 lbl_805D5644;
extern s32 TLockOnCursor__data_805D5648;
void free_cursor_resources__13TLockOnCursorFv(void);
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8013DC38_lbl_804A7140 target_cursor_resource_descriptor;
extern u8 *lbl_805D5640;
extern s32 lbl_805D5644;
extern s32 TLockOnCursor__data_805D5648;
extern s32 lbl_805D564C;
void load_target_cursor_models(void);
M2C_UNK __dt__7TObjectFv(void *, int);
s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1);
Obj_8013DCCC *release_target__13TLockOnCursorFPv(void *);
Obj_8013DCCC *cleanup_field__13TLockOnCursorFPv(void *);
Obj_8013DCCC *cleanup_field_3c__13TLockOnCursorFPv(void *);
M2C_UNK __dt__13TLockOnCursorFis(void *, int);
M2C_UNK destroy__13TLockOnCursorFis(void *, int);
M2C_UNK destroy__13TLockOnCursorFPvs(void *, int);
M2C_UNK destroy__11TMainCursorFPvs(void *, int);
M2C_UNK __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
extern M2C_UNK __dt_deleting__13TLockOnCursorFis[];
extern M2C_UNK __vt__13TLockOnCursor[];
u8 *__dt__13TLockOnCursorFv(u8 *arg0, s16 arg1);
void clear_id__10TObjPlayerFPv(void *);
s32 init_lockon__11TMainCursorFPv(s32, s32, s32);
s32 init_vtable__11TMainCursorFPv(s32, s32, s32);
s32 init__11TMainCursorFPv(s32, s32, s32);
M2C_UNK reset_state__11TMainCursorFPv(s32);
M2C_UNK destroy_lock_on__11TMainCursorFPvi(s32, s32);
M2C_UNK set_target__11TMainCursorFPvi(s32, s32);
M2C_UNK reset_nearest_target_record(s32);
M2C_UNK set_sub_cursor_value__11TMainCursorFPvi(s32, s32);
s32 get_target_id__11TMainCursorFPv(s32);
Obj_8013DCCC *release_target__13TLockOnCursorFPv(void *);
Obj_8013DCCC *cleanup_field__13TLockOnCursorFPv(void *);
Obj_8013DCCC *cleanup_field_3c__13TLockOnCursorFPv(void *);
M2C_UNK TLockOnCursor__sub_8013EC1C(s32);
M2C_UNK reset_state__13TLockOnCursorFPv(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
extern s32 tl_loc_start;
extern s32 tl_loc_end;
extern s32 tl_window;
void reset_and_spawn_cursors__13TLockOnCursorFi(s32 arg0);
}

extern "C" {

struct VOff_8013DE3C_arg0_8013D91C { char pad_0[0x1C]; char f_1C[1]; };

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2);
s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1);
void run_task__13TLockOnCursorFv(s32 arg0);
M2C_UNK TLockOnCursor__sub_8013EB80(s32);
M2C_UNK TLockOnCursor__sub_8013EB8C(s32);
void TLockOnCursor__sub_8013EEC0(void *, void *);
s32 is_channel_active__11TMainCursorFPv(s32);
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
    if (is_channel_active__11TMainCursorFPv(arg0 + 0x520) != 0) {
        TLockOnCursor__sub_8013EB8C(arg0 + 0x520);
        return;
    }
    TLockOnCursor__sub_8013EB80(arg0 + 0x520);
}

void reset_and_spawn_cursors__13TLockOnCursorFi(s32 arg0) {
    s32 var_r31_2;
    s32 var_r31_3;
    s32 var_r31_4;
    s32 var_r30;
    clear_id__10TObjPlayerFPv((void *)(arg0 + 0x1C));
    for (var_r30 = 0; var_r30 < 4; var_r30++) {
        reset_state__11TMainCursorFPv((s32)&((Cur_8013DAB0 *)arg0)->arr[var_r30]);
    }
    reset_state__13TLockOnCursorFPv(arg0 + 0x4EC);
    TLockOnCursor__sub_8013EC1C(arg0 + 0x508);
    reset_nearest_target_record(arg0 + 0x510);
    if (cleanup_field_3c__13TLockOnCursorFPv((void *)arg0) == NULL) {
        var_r31_2 = __nw__7TObjectFUl(0x24);
        if (var_r31_2 != 0) {
            var_r31_2 = init__11TMainCursorFPv(var_r31_2, tl_loc_start, get_target_id__11TMainCursorFPv(arg0));
        }
        set_sub_cursor_value__11TMainCursorFPvi(arg0, var_r31_2);
    }
    if (cleanup_field__13TLockOnCursorFPv((void *)arg0) == NULL) {
        var_r31_3 = __nw__7TObjectFUl(0x24);
        if (var_r31_3 != 0) {
            var_r31_3 = init_vtable__11TMainCursorFPv(var_r31_3, tl_loc_end, get_target_id__11TMainCursorFPv(arg0));
        }
        set_target__11TMainCursorFPvi(arg0, var_r31_3);
    }
    if (release_target__13TLockOnCursorFPv((void *)arg0) == NULL) {
        var_r31_4 = __nw__7TObjectFUl(0x24);
        if (var_r31_4 != 0) {
            var_r31_4 = init_lockon__11TMainCursorFPv(var_r31_4, tl_window, get_target_id__11TMainCursorFPv(arg0));
        }
        destroy_lock_on__11TMainCursorFPvi(arg0, var_r31_4);
    }
}

void free_cursor_resources__13TLockOnCursorFv(void) {
    if ((void *) lbl_805D5640 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5640, 1);
        lbl_805D5640 = NULL;
    }
    lbl_805D5644 = 0;
    TLockOnCursor__data_805D5648 = 0;
}

void load_target_cursor_models(void) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) lbl_805D5640 == NULL) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &target_cursor_resource_descriptor.value, 0, 0, 0));
        }
        lbl_805D5640 = (unsigned char *) ((void *) var_r0);
        if ((u32) var_r0 != 0U) {
            lbl_805D5644 = get_bml_model((void *) var_r0, 0);
            TLockOnCursor__data_805D5648 = get_bml_model(lbl_805D5640, 0);
            lbl_805D564C = get_bml_model(lbl_805D5640, 2);
        }
    }
}

u8 *__dt__13TLockOnCursorFv(u8 *arg0, s16 arg1) {
    Obj_8013DCCC *p;
    if (arg0 != NULL) {
        *(M2C_UNK **)(arg0 + 0x18) = __vt__13TLockOnCursor;
        p = cleanup_field_3c__13TLockOnCursorFPv(arg0);
        if (p != NULL) {
            delete p;
        }
        p = cleanup_field__13TLockOnCursorFPv(arg0);
        if (p != NULL) {
            delete p;
        }
        p = release_target__13TLockOnCursorFPv(arg0);
        if (p != NULL) {
            delete p;
        }
        destroy__13TLockOnCursorFPvs(arg0 + 0x520, -1);
        destroy__13TLockOnCursorFis(arg0 + 0x4EC, -1);
        __destroy_arr(arg0 + 0x5C, __dt_deleting__13TLockOnCursorFis, 0x124, 4);
        destroy__11TMainCursorFPvs(arg0 + 0x48, -1);
        __dt__13TLockOnCursorFis(arg0 + 0x3C, -1);
        dt__13TLockOnCursorFis((s32)(arg0 + 0x24), -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
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
