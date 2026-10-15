#include "types.h"

struct Obj_8013E020 { u16 a; u16 b; s32 c; };

extern "C" {
void TMainCursor__sub_8013DFC4(u8 *arg0);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
int matches_type_and_enabled__11TMainCursorFiUcUc(s32 arg0, u8 arg1, u8 arg2);
void fn_8013E020(Obj_8013E020 *self);
}

extern "C" {

u16 TMainCursor__sub_8013E03C(void* p);
s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1);
void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
void TLockOnCursor__sub_8013E0D0(void* p, s32 v);
void __dl__7TObjectFPv(void *);
int __dl__FPv();
void __dt__7TObjectFv(void *, int);
int check_visible__11TMainCursorFPv(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);
u8 get_enabled__11TMainCursorFPv(void* p);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);

int matches_type_and_enabled__11TMainCursorFiUcUc(s32 arg0, u8 arg1, u8 arg2) {
    s32 var_r31;
    var_r31 = 0;
    if ((arg1 == get_type__11TMainCursorFPv((void*)(arg0))) && (arg2 == get_enabled__11TMainCursorFPv((void*)(arg0)))) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

void TMainCursor__sub_8013DFC4(u8 *arg0) {
    *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) & 0xFFFFFFFE);
}

s32 get_state__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void set_field_0__13TForceOperateFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

void fn_8013E020(Obj_8013E020 *self) {
    self->a = self->b = 0xffff;
    self->c = 0;
}

u16 TMainCursor__sub_8013E03C(void* p) { return *(u16*)((char*)p + 0x0); }

extern s32 lbl_804A7260[];

void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A7260;
        destroy__13TForceOperateFis((s32)((s8 *)arg0 + 0x1C), (s16)(-1));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1) { TLockOnCursor__sub_8013E0D0((char*)p + 0x3c, a1); }

}
