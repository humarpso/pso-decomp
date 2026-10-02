#include "types.h"
#include "pso/misc/PaletteCursorAction.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8013B2C8 { s32 w; };

extern "C" {
void fn_80044330(void *);
void reset_slot__11TMainCursorFPv(void *);
void set_type__11TMainCursorFPvi(void *, s32);
extern const f32 TMainCursor__data_805DB0C0;
void TMainCursor__sub_8013B3AC(u8 *arg0);
s32 TMainCursor__sub_8013DF08(PaletteCursorOverride*);
s32 can_start_technique__10TObjPlayerFPvi(TObjPlayer*, s32);
s32 canSetMenuCursorAction(PaletteCursorOverride* cursor, TObjPlayer* player, u8 kind, u8 parameter);
void TMainCursor__sub_8013B398(void *arg0, void *arg1);
s16 TMainCursor__sub_8013E298(Ent_8013B2C8 *);
s32 TMainCursor__sub_8013E2A0(void *);
Ent_8013B2C8 *get_index__11TMainCursorFPv(void *);
void TMainCursor__sub_8013E2B0(void *);
s32 TMainCursor__sub_8013B2C8(void *arg0);
}

extern "C" {

void TMainCursor__sub_8013B2A4(u16 *arg0);
void TMainCursor__sub_8013B398(void *arg0, void *arg1);
void* init__11TMainCursorFPv(void* a0);
M2C_UNK get_player_by_client_id(u16);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7290[];
    extern int lbl_805D2CBC;
void* init__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7290; *(int*)((char*)a0 + 0x0) = lbl_805D2CBC; return a0; }

void TMainCursor__sub_8013B2A4(u16 *arg0) {
    get_player_by_client_id(*arg0);
}

s32 TMainCursor__sub_8013B2C8(void *arg0) {
    s32 k;
    s32 n;
    s32 i;
    Ent_8013B2C8 *p;
    Ent_8013B2C8 *q;
    Ent_8013B2C8 tmp;
    TMainCursor__sub_8013E2B0(&tmp);
    if (get_index__11TMainCursorFPv(arg0) == NULL) {
        return 0;
    }
    n = TMainCursor__sub_8013E2A0(arg0);
    while (--n > 0) {
        p = get_index__11TMainCursorFPv(arg0);
        for (i = 0; i < n; p++, i++) {
            q = p + 1;
            k = TMainCursor__sub_8013E298(q);
            if (TMainCursor__sub_8013E298(p) > k) {
                TMainCursor__sub_8013B398(&tmp, p);
                TMainCursor__sub_8013B398(p, q);
                TMainCursor__sub_8013B398(q, &tmp);
            }
        }
    }
    return 1;
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
s32 canSetMenuCursorAction(PaletteCursorOverride* cursor, TObjPlayer* player, u8 kind, u8 parameter) {
    if (TMainCursor__sub_8013DF08(cursor) != 0) {
        return 0;
    }
    switch ((s32) kind) {
    case 4:
        switch (parameter) {
        case 9: case 10: return 1;
        default: return 0;
        }
    case 3:
        return can_start_technique__10TObjPlayerFPvi(player, parameter);
    default:
        return 0;
    }
}

}
