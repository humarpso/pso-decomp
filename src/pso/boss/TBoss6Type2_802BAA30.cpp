#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802BB180_lbl_804DFAC4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802BB180_lbl_804DFAD0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct T2_802BB498 { u8 pad0[0x374]; s32 f374; };

struct T2_802BB554 { u8 pad0[0x374]; s32 f374; };

struct T2_802BB768 { u8 pad0[0x410]; u32 f410; u32 f414; };

struct T2_802BB7C0 { u8 pad0[0x410]; u32 f410; u32 f414; };

struct Ent_802BBD88 { u8 pad0[0x18]; u32 f; u8 pad1c[0x10]; };

struct T1_802BBD88 { u8 pad0[0xA4]; Ent_802BBD88 *p; };

struct V_802BBF54 { f32 x, y, z; };

struct T2_802BBF54 { u8 pad0[0x59C]; V_802BBF54 a[19]; V_802BBF54 b[19]; };

struct Ent_802BC050 { s16 f0; s16 v[5]; };

struct Obj_802BC050 {
    u8 pad0[0x31C];
    Ent_802BC050 *ent;
    u8 pad320[0x434 - 0x320];
    Ent_802BC050 local;
    u8 pad440[0x454 - 0x440];
    s16 max;
    s16 min;
};

extern "C" {
s32 TBoss6Type2__sub_8032E748(void *);
s32 TBoss6Type2__sub_8035DC60(s32, s32, f32);
extern const f32 TBoss6Type2__data_805DE45C;
extern const f32 TBoss6Type2__data_805DE460;
void TBoss6Type2__sub_802BAD04(s32 arg0);
void TCameraCtrl__sub_8006D2B0(s32, s32, u16);
extern RecoveredGlobal_802BB180_lbl_804DFAC4 lbl_804DFAC4;
extern RecoveredGlobal_802BB180_lbl_804DFAD0 lbl_804DFAD0;
void TBoss6Type2__sub_802BB180(void);
void TBoss6Type2__sub_802BB180(void);
void init_range__11TBoss6Type2Fv(void);
void TBoss6Type2__sub_802BB498(T2_802BB498 *arg0);
int TBoss6Type2__sub_802BB4DC(void* p);
void update_target__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_802BB554(T2_802BB554 *arg0);
void TBoss6Type2__sub_8032E708(u32, int);
void TBoss6Type2__sub_802BB768(T2_802BB768 *arg0);
void TBoss6Type2__sub_8032E708(u32, int);
void TBoss6Type2__sub_802BB7C0(T2_802BB7C0 *arg0);
void TBoss6Type2__sub_802BBD88(T1_802BBD88 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type2__sub_802BBF54(u8 *arg0);
s32 copy_entry__6TLobbyFPvPv(void *, void *);
void update_segments__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_802BC050(Obj_802BC050 *o);
}

extern "C" {

int TBoss6Type2__sub_802BB5B4(void);
int TBoss6Type2__sub_802BB694(void);
void advance_position__11TBoss6Type2FPv(u8 *arg0);
void init_range__11TBoss6Type2Fv(void);
void set_child_flags__11TBoss6Type2FPv(void *arg0);
void set_owner_flag_bit0__11TBoss6Type2FPv(void *arg0);
void trigger_screen_pos__11TBoss6Type2FPv(void *arg0);
void update_parts_flags__11TBoss6Type2FPv(void *arg0);
void update_segments__11TBoss6Type2FPv(void *arg0);
int TBoss6Type2__sub_802B9F3C(void*, int);
M2C_UNK TBoss6Type2__sub_802BB1E0(f32, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_screen_pos__11TBoss6Type2FPv();

extern f32 lbl_805DE448;

void trigger_screen_pos__11TBoss6Type2FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x424) == 0) && (M2C_FIELD(arg0, f32 *, 0x500) < lbl_805DE448)) {
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        set_screen_pos__11TBoss6Type2FPv();
    }
}

extern const f32 TBoss6Type2__data_805DE460;
extern const f32 lbl_805DE47C;

void TBoss6Type2__sub_802BAD04(s32 arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    TBoss6Type2__sub_8035DC60(arg0, arg0 + 0x38, TBoss6Type2__data_805DE45C);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x410));
    if ((temp_r3 != NULL) && (TBoss6Type2__sub_8032E748(temp_r3) != 0)) {
        TBoss6Type2__sub_8035DC60(arg0, (s32) (M2C_FIELD(arg0, u8 **, 0x410) + 0x38), TBoss6Type2__data_805DE460);
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x414));
    if ((temp_r3_2 != NULL) && (TBoss6Type2__sub_8032E748(temp_r3_2) != 0)) {
        TBoss6Type2__sub_8035DC60(arg0, (s32) (M2C_FIELD(arg0, u8 **, 0x414) + 0x38), TBoss6Type2__data_805DE460);
    }
}

typedef char RecoveredGlobal_802BB180_lbl_804DFAC4_size[sizeof(RecoveredGlobal_802BB180_lbl_804DFAC4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802BB180_lbl_804DFAD0_size[sizeof(RecoveredGlobal_802BB180_lbl_804DFAD0) == 0xC ? 1 : -1];
void TBoss6Type2__sub_802BB180(void) {
    TCameraCtrl__sub_8006D2B0((s32) &lbl_804DFAC4.value, (s32) &lbl_804DFAD0.value, 0xFFFFU);
}

void init_range__11TBoss6Type2Fv(void) {
    TBoss6Type2__sub_802BB1E0(TBoss6Type2__data_805DE460, lbl_805DE47C);
}

void TBoss6Type2__sub_802BB498(T2_802BB498 *arg0) {
    switch (arg0->f374) {
    case 0xE:
    case 0x1C:
        TBoss6Type2__sub_802BB180();
        break;
    default:
        init_range__11TBoss6Type2Fv();
        break;
    }
}

int TBoss6Type2__sub_802BB4DC(void* p) { return TBoss6Type2__sub_802B9F3C(p, 0); }
void update_target__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (temp_r3 != 0) {
        TBoss6Type2__sub_802B9F3C(arg0, temp_r3 + 0x38);
        return;
    }
    TBoss6Type2__sub_802B9F3C(arg0, 0);
}

void TBoss6Type2__sub_802BB554(T2_802BB554 *arg0) {
    switch (arg0->f374) {
    case 3:
    case 6: case 7: case 8: case 9: case 10: case 11:
    case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x21:
        update_target__11TBoss6Type2FPv((void *)(arg0));
        break;
    default:
        TBoss6Type2__sub_802BB4DC((void*)(arg0));
        break;
    }
}

int TBoss6Type2__sub_802BB5B4(void) { return 0; }
int TBoss6Type2__sub_802BB694(void) { return 0; }

void TBoss6Type2__sub_802BB768(T2_802BB768 *arg0) {
    if (arg0->f410 == 0 || arg0->f414 == 0) {
        return;
    }
    TBoss6Type2__sub_8032E708(arg0->f410, 1);
    TBoss6Type2__sub_8032E708(arg0->f414, 1);
}

void TBoss6Type2__sub_802BB7C0(T2_802BB7C0 *arg0) {
    if (arg0->f410 == 0 || arg0->f414 == 0) {
        return;
    }
    TBoss6Type2__sub_8032E708(arg0->f410, 0);
    TBoss6Type2__sub_8032E708(arg0->f414, 0);
}

void set_owner_flag_bit0__11TBoss6Type2FPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x70) | 1);
    }
}

void set_child_flags__11TBoss6Type2FPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
    }
}

void TBoss6Type2__sub_802BBD88(T1_802BBD88 *arg0) {
    Ent_802BBD88 *p = arg0->p;
    if (p != NULL) {
        Ent_802BBD88 *end = (Ent_802BBD88 *)((u8 *)p + 0x84);
        for (; p < end; p++) {
            p->f &= ~1;
        }
    }
}

void update_parts_flags__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BBD88((T1_802BBD88 *)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x474) & 1) {
        set_child_flags__11TBoss6Type2FPv((void *)(arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) & 2) {
        set_owner_flag_bit0__11TBoss6Type2FPv((void *)(arg0));
    }
}

extern const f32 lbl_805DE4A4;

void advance_position__11TBoss6Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DE4A4);
}

void TBoss6Type2__sub_802BBF54(u8 *arg0) {
    V_802BBF54 *src;
    V_802BBF54 *end;
    V_802BBF54 *dst;
    src = (V_802BBF54 *)(arg0 + 0x59C);
    dst = (V_802BBF54 *)(arg0 + 0x680);
    end = (V_802BBF54 *)((u8 *)src + 0xE4);
    for (; src < end; src++, dst++) {
        VecCopy__FP3VecPC3Vec(dst, src);
    }
}

void update_segments__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x454);
    M2C_FIELD(arg0, s16 *, 0x43E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x438) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x436) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x42C);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x436) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x438) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x43A) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x43C) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x43E) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x436);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x43A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x438);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x43E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x43C);
}
void TBoss6Type2__sub_802BC050(Obj_802BC050 *o) {
    Ent_802BC050 *e = o->ent;
    s32 min;
    s32 max;
    max = e->v[0];
    min = max;
    if (min > e->v[1]) { min = e->v[1]; } else if (max < e->v[1]) { max = e->v[1]; }
    if (min > e->v[2]) { min = e->v[2]; } else if (max < e->v[2]) { max = e->v[2]; }
    if (min > e->v[3]) { min = e->v[3]; } else if (max < e->v[3]) { max = e->v[3]; }
    if (min > e->v[4]) { min = e->v[4]; } else if (max < e->v[4]) { max = e->v[4]; }
    o->min = min;
    o->max = max;
    copy_entry__6TLobbyFPvPv(&o->local, o->ent);
    o->ent = &o->local;
    update_segments__11TBoss6Type2FPv(o);
}

}
