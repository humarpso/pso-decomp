#include "types.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TMainCursor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void TMainCursor__sub_8013F114(void* p);
extern s32 TMainCursor__sub_8013E2B0[];
void __construct_array(void *, void *, int, int, int);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F104(void* p, s32 v);
void *fn_8013F0A0(void *arg0);
int init_gc_tag(void*);
void * TLockOnCursor__sub_8013EFB8(void *arg0);
void __construct_array(void *, void *, int, int, int);
void* init_sub__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EDC4(void *p);
int TLockOnCursor__sub_8013F000(void *self);
}

extern "C" {

void* init_sub__13TLockOnCursorFPv(void* p);
int TLockOnCursor__sub_8013EC1C(void*);
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
int init_gc_tag(void*);

extern s32 lbl_804A7248[];

void *TLockOnCursor::init_vtable() {
    init_gc_tag((void*)(this));
    *(s32 **)((s8 *)this + 0x8) = lbl_804A7248;
    *(u32 *)((s8 *)this + 0x4) = 0;
    return this;
}

void*TLockOnCursor::init_cursor() { reset_nearest_target_record(this); return this; }
void*TLockOnCursor::init_forward() { TLockOnCursor__sub_8013EC1C(this); return this; }
void*TLockOnCursor::cleanup() { init_gc_tag((void*)((char*)this + 0x8)); ((TMainCursor *)((char*)this + 0xc))->reset(); ((TMainCursor *)((char*)this + 0x14))->reset(); reset_state(); return this; }

void *TLockOnCursor__sub_8013EFB8(void *arg0) {
    init_gc_tag((void*)(arg0));
    ((TObjPlayer *)((char *)arg0 + 64))->construct_target_cursor_records();
    TLockOnCursor__sub_8013F000((void *)((void *)((void *)((char *)arg0 + 156))));
    ((TMainCursor *)arg0)->reset_state();
    return arg0;
}

int TLockOnCursor__sub_8013F000(void *self) {
    __construct_array((char *)self + 4, (void *)init_sub__13TLockOnCursorFPv, (int)TLockOnCursor__sub_8013EDC4, 0xc, 0xb);
    ((TMainCursor *)self)->reset_slot();
    return (int)self;
}

void* init_sub__13TLockOnCursorFPv(void* p) { fn_8004438C(p); ((TObjPlayer *)((char*)p + 0x8))->init_forward(); return p; }
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
