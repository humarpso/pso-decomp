#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct MojaCollision_800ADE48 {
    u8 pad[0x18];
    u32 flags;
} MojaCollision_800ADE48;

typedef struct Moja_800ADE48 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0xA4 - 0x34];
    MojaCollision_800ADE48 *collision;
    u8 padA8[0xB8 - 0xA8];
    s16 action;
    u8 padBA[0x326 - 0xBA];
    s16 mode;
    s16 phase;
    u8 pad32A[0x374 - 0x32A];
    s32 f374;
    u8 pad378[0x380 - 0x378];
    s32 attack_kind;
} Moja_800ADE48;

extern "C" {
void TObjPlayer__sub_800ADE48(Moja_800ADE48 *self);
s32 TObjPlayer__sub_80016D78();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 TObjPlayer__sub_800AED14(void *arg0);
}

extern "C" {

void enter_state_3__10TObjPlayerFPv(void *arg0);
void update_down_state__10TObjPlayerFPv(void *arg0);
void update_invincibility__10TObjPlayerFPv(void *arg0);
void update_meseta_anim_state__10TObjPlayerFPv(void *arg0);
void update_state_flags__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void update_state_flags__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FFF9FF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDBFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

extern const f32 lbl_805D9BD8;
extern const s32 lbl_805D9BFC;

void update_invincibility__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    void *temp_r4_2;

    TBoss1Dragon__sub_80143504();
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9BD8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

extern const s32 lbl_805D9BFC;

void update_down_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s32 gbits;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r6, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

void TObjPlayer__sub_800ADE48(Moja_800ADE48 *self) {
    switch (self->attack_kind) {
    case 2:
        self->mode = 6;
        self->action = 5;
        break;
    case 1:
        self->mode = 5;
        self->action = 2;
        break;
    case 0:
    default:
        self->mode = 4;
        self->action = 3;
        break;
    }
    self->phase = 0;
    self->flags |= 0x200000;
    self->flags &= 0xF9FBFFFF;
    self->collision->flags |= 1;
    self->f374 = 0;
}

void enter_state_3__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        switch ((s32) M2C_FIELD(arg0, s32 *, 0x388)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            break;
        default:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

void update_meseta_anim_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 0)) {
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        return;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
}
s32 TObjPlayer__sub_800AED14(void *arg0) {
    void *temp_r3;
    if (TObjPlayer__sub_80016D78() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x388) = 1;
            M2C_FIELD(arg0, s32 *, 0x384) = -1;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            M2C_FIELD(arg0, s32 *, 0x374) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            obj_clearFlags30(arg0, 0x06040000);
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
            break;
        }
        return 1;
    }
    return 0;
}

}
