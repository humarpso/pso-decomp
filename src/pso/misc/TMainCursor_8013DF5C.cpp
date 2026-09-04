#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TMainCursor__sub_8013DFC4(u8 *arg0);
}

extern "C" {

int TMainCursor__sub_8013DF5C(void);
u16 TMainCursor__sub_8013E03C(void* p);
s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1);
void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);
int fn_8013E020(void);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
void TLockOnCursor__sub_8013E0D0(void* p, s32 v);
void __dl__7TObjectFPv(void *);
int __dl__FPv();
void __dt__7TObjectFv(void *, int);
int check_visible__11TMainCursorFPv(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);

int TMainCursor__sub_8013DF5C(void) { return 0; }

void TMainCursor__sub_8013DFC4(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) & 0xFFFFFFFE);
}

s32 get_state__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void set_field_0__13TForceOperateFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

int fn_8013E020(void) { return 0; }

u16 TMainCursor__sub_8013E03C(void* p) { return *(u16*)((char*)p + 0x0); }

extern M2C_UNK lbl_804A7260[];

void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7260;
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
