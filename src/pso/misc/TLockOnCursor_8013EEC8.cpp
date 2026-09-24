#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void TMainCursor__sub_8013F114(void* p);
extern M2C_UNK TMainCursor__sub_8013E2B0[];
void __construct_array(void *, void *, int, int, int);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F104(void* p, s32 v);
void *fn_8013F0A0(void *arg0);
int init_gc_tag(void*);
void TObjPlayer__sub_8004433C(void *);
void TMainCursor__sub_8013B3AC(void *);
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
int TLockOnCursor__sub_8013EC38(void*);
int TMainCursor__sub_8013E240(void*);
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

extern M2C_UNK lbl_804A7248[];

void *init_vtable__13TLockOnCursorFPv(void *arg0) {
    init_gc_tag((void*)(arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804A7248;
    M2C_FIELD(arg0, u32 *, 0x4) = 0;
    return arg0;
}

void* init_cursor__13TLockOnCursorFPv(void* p) { TMainCursor__sub_8013E240(p); return p; }
void* init_forward__13TLockOnCursorFPv(void* p) { TLockOnCursor__sub_8013EC1C(p); return p; }
void* cleanup__13TLockOnCursorFPv(void* p) { init_gc_tag((void*)((char*)p + 0x8)); reset__11TMainCursorFi((char*)p + 0xc); reset__11TMainCursorFi((char*)p + 0x14); TLockOnCursor__sub_8013EC38(p); return p; }

void *TLockOnCursor__sub_8013EFB8(void *arg0) {
    init_gc_tag((void*)(arg0));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 64));
    TLockOnCursor__sub_8013F000((void *)((void *)((void *)((char *)arg0 + 156))));
    TMainCursor__sub_8013B3AC(arg0);
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
