#include "types.h"

extern "C" {
void TMainCursor__sub_8013F114(void* p);
extern s32 TMainCursor__sub_8013E2B0[];
void __construct_array(void *, void *, int, int, int);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F104(void* p, s32 v);
void *fn_8013F0A0(void *arg0);
int init_gc_tag(void*);
void construct_target_cursor_records__10TObjPlayerFi(void *);
void reset_state__11TMainCursorFPv(void *);
void * TLockOnCursor__sub_8013EFB8(void *arg0);
void __construct_array(void *, void *, int, int, int);
void* init_sub__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EDC4(void *p);
void reset_slot__11TMainCursorFPv(void *p);
int TLockOnCursor__sub_8013F000(void *self);
}

extern "C" {

void* cleanup__13TLockOnCursorFPv(void* p);
void* init_cursor__13TLockOnCursorFPv(void* p);
void* init_forward__13TLockOnCursorFPv(void* p);
void* init_sub__13TLockOnCursorFPv(void* p);
void *init_vtable__13TLockOnCursorFPv(void *arg0);
void reset_fields__13TLockOnCursorFPv(void* p);
int TLockOnCursor__sub_8013EC1C(void*);
int reset_state__13TLockOnCursorFPv(void*);
int reset_nearest_target_record(void*);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
void TMainCursor__sub_8013F180(void* p, f32 v);
int copy_vec4__13TRaderMapCoreFPvPv(void*);
int fn_8004438C(void*);
f32 get_pos__11TMainCursorFPv(void* p);
int get_rader_map__11TMainCursorFPv(void* p);
int init_forward__10TObjPlayerFPv(void*);
int init_gc_tag(void*);
int reset__11TMainCursorFi(void*);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);

extern s32 lbl_804A7248[];

void *init_vtable__13TLockOnCursorFPv(void *arg0) {
    init_gc_tag((void*)(arg0));
    *(s32 **)((s8 *)arg0 + 0x8) = lbl_804A7248;
    *(u32 *)((s8 *)arg0 + 0x4) = 0;
    return arg0;
}

void* init_cursor__13TLockOnCursorFPv(void* p) { reset_nearest_target_record(p); return p; }
void* init_forward__13TLockOnCursorFPv(void* p) { TLockOnCursor__sub_8013EC1C(p); return p; }
void* cleanup__13TLockOnCursorFPv(void* p) { init_gc_tag((void*)((char*)p + 0x8)); reset__11TMainCursorFi((char*)p + 0xc); reset__11TMainCursorFi((char*)p + 0x14); reset_state__13TLockOnCursorFPv(p); return p; }

void *TLockOnCursor__sub_8013EFB8(void *arg0) {
    init_gc_tag((void*)(arg0));
    construct_target_cursor_records__10TObjPlayerFi((void *)((char *)arg0 + 64));
    TLockOnCursor__sub_8013F000((void *)((void *)((void *)((char *)arg0 + 156))));
    reset_state__11TMainCursorFPv(arg0);
    return arg0;
}

int TLockOnCursor__sub_8013F000(void *self) {
    __construct_array((char *)self + 4, (void *)init_sub__13TLockOnCursorFPv, (int)TLockOnCursor__sub_8013EDC4, 0xc, 0xb);
    reset_slot__11TMainCursorFPv(self);
    return (int)self;
}

void* init_sub__13TLockOnCursorFPv(void* p) { fn_8004438C(p); init_forward__10TObjPlayerFPv((char*)p + 0x8); return p; }
void reset_fields__13TLockOnCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

struct VOff_8013F0A0_arg0 { char pad_0[0x8]; char f_8[1]; };
void *fn_8013F0A0(void *arg0) {
    struct VOff_8013F0A0_arg0 *self = (struct VOff_8013F0A0_arg0 *)arg0;
    TMainCursor__sub_8013F114((void*)(arg0));
    __construct_array(self->f_8, TMainCursor__sub_8013E2B0, 0, 4, 4);
    TMainCursor__sub_8013F10C((void*)(arg0), (s32)(4));
    TMainCursor__sub_8013F104((void*)(arg0), (s32)(self->f_8));
    return arg0;
}

}
