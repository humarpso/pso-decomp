#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_80199410_lbl_804B8E00 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80199410_lbl_804B8E00_size[sizeof(RecoveredGlobal_80199410_lbl_804B8E00) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80199470_lbl_8050DDAC {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct G_80199078 { u8 pad[0x10]; s16 flags; };

extern "C" {
void TWindowTimer__sub_801992EC(u8 *arg0, u8 *arg1);
s32 get_minutes__6TLobbyFv(void);
void set_timer_value__12TWindowTimerFii(s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
void create_timer__11TWindowCtrlFv(void);
extern M2C_UNK lbl_804B8E00[];
u8 *TWindowTimer__sub_80199410(u8 *arg0, u8 *arg1);
M2C_UNK bswap_6x79_gogo_ball__12TWindowTimerFi();
extern RecoveredGlobal_80199470_lbl_8050DDAC lbl_8050DDAC;
extern const f32 lbl_805DBF58;
void handle_6x79_gogo_ball(u8 *arg0);
extern RecoveredGlobal_80199470_lbl_8050DDAC lbl_8050DDAC;
void TWindowTimer__sub_80199078(void);
}

extern "C" {

void *dt__12TWindowTimerFPvs(void *arg0, s16 arg1);
void TWindowTimer__sub_8019A770();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804B8E00[];

void TWindowTimer__sub_80199078(void) {
    (*(G_80199078 *)&lbl_8050DDAC).flags &= ~1;
    (*(G_80199078 *)&lbl_8050DDAC).flags &= ~2;
    (*(G_80199078 *)&lbl_8050DDAC).flags &= ~0x10;
    (*(G_80199078 *)&lbl_8050DDAC).flags &= ~0x20;
}

void TWindowTimer__sub_801992EC(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) M2C_FIELD(arg1, u8 *, 0x16);
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) M2C_FIELD(arg1, u8 *, 0x17);
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg1, u8 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg1, u8 *, 0x19);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    *(M2CCopy_C *)((s32) arg0 + 0x20) = *(const M2CCopy_C *)((s32) arg1 + 0x20);
    *(M2CCopy_C *)((s32) arg0 + 0x2C) = *(const M2CCopy_C *)((s32) arg1 + 0x2C);
    *(M2CCopy_C *)((s32) arg0 + 0x38) = *(const M2CCopy_C *)((s32) arg1 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    M2C_FIELD(arg0, u16 *, 0x48) = (u16) M2C_FIELD(arg1, u16 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
}

void *dt__12TWindowTimerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8E00;
        TWindowTimer__sub_8019A770();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowTimer__sub_80199410(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80199410_lbl_804B8E00 *)&lbl_804B8E00).value;
    M2C_FIELD(arg0, s32 *, 0x1C) = get_minutes__6TLobbyFv();
    create_timer__11TWindowCtrlFv();
    set_timer_value__12TWindowTimerFii(1, 0);
    set_timer_value__12TWindowTimerFii(0, 0);
    return arg0;
}
typedef char RecoveredGlobal_80199470_lbl_8050DDAC_size[sizeof(RecoveredGlobal_80199470_lbl_8050DDAC) == 0x1C ? 1 : -1];
void handle_6x79_gogo_ball(u8 *arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi();
    M2C_FIELD(&lbl_8050DDAC.value, s16 *, 0x12) = 0;
    M2C_FIELD(&lbl_8050DDAC.value, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(&lbl_8050DDAC.value, f32 *, 4) = (f32) lbl_805DBF58;
    M2C_FIELD(&lbl_8050DDAC.value, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(&lbl_8050DDAC.value, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&lbl_8050DDAC.value, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 0x14);
    M2C_FIELD(&lbl_8050DDAC.value, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 4);
}

}
