#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6Type2__sub_802BB498(void);
int TBoss6Type2__sub_802BB4DC(void* p);
int TBoss6Type2__sub_802BB554(void);
int TBoss6Type2__sub_802BB5B4(void);
int TBoss6Type2__sub_802BB694(void);
int TBoss6Type2__sub_802BB768(void);
int TBoss6Type2__sub_802BB7C0(void);
void advance_position__11TBoss6Type2FPv(u8 *arg0);
void init_range__11TBoss6Type2Fv(void);
void set_child_flags__11TBoss6Type2FPv(void *arg0);
void set_owner_flag_bit0__11TBoss6Type2FPv(void *arg0);
void trigger_screen_pos__11TBoss6Type2FPv(void *arg0);
void update_parts_flags__11TBoss6Type2FPv(void *arg0);
void update_segments__11TBoss6Type2FPv(void *arg0);
void update_target__11TBoss6Type2FPv(void *arg0);
int TBoss6Type2__sub_802B9F3C(void*, int);
M2C_UNK TBoss6Type2__sub_802BB1E0(f32, f32);
M2C_UNK TBoss6Type2__sub_802BBD88();
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

void init_range__11TBoss6Type2Fv(void) {
    TBoss6Type2__sub_802BB1E0(TBoss6Type2__data_805DE460, lbl_805DE47C);
}

int TBoss6Type2__sub_802BB498(void) { return 0; }

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

int TBoss6Type2__sub_802BB554(void) { return 0; }
int TBoss6Type2__sub_802BB5B4(void) { return 0; }
int TBoss6Type2__sub_802BB694(void) { return 0; }
int TBoss6Type2__sub_802BB768(void) { return 0; }
int TBoss6Type2__sub_802BB7C0(void) { return 0; }

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

void update_parts_flags__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BBD88();
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

}
