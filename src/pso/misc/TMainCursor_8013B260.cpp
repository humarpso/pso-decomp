#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_80044330(void *);
void reset_slot__11TMainCursorFPv(void *);
void set_type__11TMainCursorFPvi(void *, s32);
extern const f32 TMainCursor__data_805DB0C0;
void TMainCursor__sub_8013B3AC(u8 *arg0);
}

extern "C" {

void TMainCursor__sub_8013B2A4(u16 *arg0);
void TMainCursor__sub_8013B398(void *arg0, void *arg1);
void* init__11TMainCursorFPv(void* a0);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7290[];
    extern int lbl_805D2CBC;
void* init__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7290; *(int*)((char*)a0 + 0x0) = lbl_805D2CBC; return a0; }

void TMainCursor__sub_8013B2A4(u16 *arg0) {
    TPlayerBattleCtrl4P__sub_801BA74C(*arg0);
}

void TMainCursor__sub_8013B398(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}
void TMainCursor__sub_8013B3AC(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TMainCursor__data_805DB0C0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TMainCursor__data_805DB0C0;
    set_type__11TMainCursorFPvi(arg0, 0);
    fn_80044330(arg0 + 0x40);
    reset_slot__11TMainCursorFPv(arg0 + 0x9C);
}

}
