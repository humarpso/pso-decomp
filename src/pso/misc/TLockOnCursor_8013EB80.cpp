#include "types.h"

struct Obj_8013EC1C { u16 a; u16 b; u16 c; };

struct Obj_8013EC38 { u16 h0; s16 h2; f32 f4; u8 f8[4]; u8 fc[8]; u8 f14[8]; };

extern "C" {
void TLockOnCursor__sub_8013EC1C(Obj_8013EC1C *self);
extern const f32 TMainCursor__data_805DB0C0;
void reset_target__11TMainCursorFi(void *p);
void init__6gc_tagFv(void *p);
void TLockOnCursor__sub_8013EC38(Obj_8013EC38 *self);
}

extern "C" {

void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p);
s32 cleanup_field__13TLockOnCursorFPv(void* p);
s32 release_target__13TLockOnCursorFPv(void* p);
int test_flags_any(void*, int);
s32 get_target__13TLockOnCursorFPv(void* p);
int test_flag_1_at_8__13TLockOnCursorFPv(void* p);

void TLockOnCursor__sub_8013EB80(void* p) { *(s32*)((char*)p + 0x4) = 0; }
void TLockOnCursor__sub_8013EB8C(void* p) { *(s32*)((char*)p + 0x4) = 1; }
s32 release_target__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBBC((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EBBC(void* p) { return *(s32*)((char*)p + 0x8); }
s32 cleanup_field__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBE8((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EBE8(void* p) { return *(s32*)((char*)p + 0x4); }
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EC14((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EC14(void* p) { return *(s32*)((char*)p + 0x0); }
void TLockOnCursor__sub_8013EC1C(Obj_8013EC1C *self) {
    self->a = 0xffff;
    self->b = 0;
    self->c = 0;
}
void TLockOnCursor__sub_8013EC38(Obj_8013EC38 *self) {
    reset_target__11TMainCursorFi(self->fc);
    reset_target__11TMainCursorFi(self->f14);
    init__6gc_tagFv(self->f8);
    self->h0 = 0xffff;
    self->h2 = 0;
    self->f4 = TMainCursor__data_805DB0C0;
}

}
