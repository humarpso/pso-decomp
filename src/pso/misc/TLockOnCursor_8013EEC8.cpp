#include "types.h"
#include "pso/misc/TLockOnCursor.h"

extern "C" {
void TMainCursor__sub_8013F114(void* p);
extern s32 TMainCursor__sub_8013E2B0[];
void __construct_array(void *, void *, int, int, int);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F104(void* p, s32 v);
void *fn_8013F0A0(void *arg0);
int init_gc_tag(void*);
void construct_target_cursor_records__10TObjPlayerFv(void *);
void reset_state__11TMainCursorFv(void *);
void * TLockOnCursor__sub_8013EFB8(void *arg0);
void __construct_array(void *, void *, int, int, int);
void* init_sub__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EDC4(void *p);
void reset_slot__11TMainCursorFv(void *p);
int TLockOnCursor__sub_8013F000(void *self);
}

extern "C" {

void* init_sub__13TLockOnCursorFPv(void* p);
int TLockOnCursor__sub_8013EC1C(void*);
int reset_state__13TLockOnCursorFv(void*);
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
f32 get_pos__11TMainCursorFv(void* p);
int get_rader_map__11TMainCursorFv(void* p);
int init_forward__10TObjPlayerFv(void*);
int init_gc_tag(void*);
int reset__11TMainCursorFv(void*);
void set_cursor_id__11TMainCursorFs(void* p, s16 v);
void set_field2__11TMainCursorFs(void* p, s16 v);
void set_size__11TMainCursorFf(void* p, f32 v);

extern s32 lbl_804A7248[];

void *TLockOnCursor::init_vtable() {
    init_gc_tag((void*)(this));
    *(s32 **)((s8 *)this + 0x8) = lbl_804A7248;
    *(u32 *)((s8 *)this + 0x4) = 0;
    return this;
}

void*TLockOnCursor::init_cursor() { reset_nearest_target_record(this); return this; }
void*TLockOnCursor::init_forward() { TLockOnCursor__sub_8013EC1C(this); return this; }
void*TLockOnCursor::cleanup() { init_gc_tag((void*)((char*)this + 0x8)); reset__11TMainCursorFv((char*)this + 0xc); reset__11TMainCursorFv((char*)this + 0x14); reset_state__13TLockOnCursorFv(this); return this; }

void *TLockOnCursor__sub_8013EFB8(void *arg0) {
    init_gc_tag((void*)(arg0));
    construct_target_cursor_records__10TObjPlayerFv((void *)((char *)arg0 + 64));
    TLockOnCursor__sub_8013F000((void *)((void *)((void *)((char *)arg0 + 156))));
    reset_state__11TMainCursorFv(arg0);
    return arg0;
}

int TLockOnCursor__sub_8013F000(void *self) {
    __construct_array((char *)self + 4, (void *)init_sub__13TLockOnCursorFPv, (int)TLockOnCursor__sub_8013EDC4, 0xc, 0xb);
    reset_slot__11TMainCursorFv(self);
    return (int)self;
}

void* init_sub__13TLockOnCursorFPv(void* p) { fn_8004438C(p); init_forward__10TObjPlayerFv((char*)p + 0x8); return p; }
void TLockOnCursor::reset_fields() { *(s32*)((char*)this + 0x0) = 0; *(s32*)((char*)this + 0x4) = 0; *(s32*)((char*)this + 0x8) = 0; }

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
