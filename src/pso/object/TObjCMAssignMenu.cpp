#include "pso/TObjCMAssignMenu.h"

TObjCMAssignMenu::~TObjCMAssignMenu() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V2_80296560 {
    f32 x;
    f32 y;
};

struct Menu_80296560 {
    u8 pad[0x30];
    s32 count;
    u32 mask;
    u8 pad2[0x8];
    f32 timer;
};

struct V2_80296648 {
    f32 x;
    f32 y;
};

struct Menu_80296648 {
    u8 pad[0x30];
    s32 count;
    u32 mask;
    u8 pad2[0x8];
    f32 timer;
};

extern "C" {
void draw_ui_sprite(s32, void *, f32, f32);
extern s32 lbl_8046507C[];
extern const f32 lbl_805DDA74;
extern const f32 lbl_805DDA94;
extern const f32 lbl_805DDB10;
extern const f32 TObjCMAssignMenu__data_805DDB20;
extern const f32 lbl_805DDB48;
extern const f32 lbl_805DDB4C;
void TObjCMAssignMenu__sub_80296560(Menu_80296560 *self);
void draw_ui_sprite(s32, void *, f32, f32);
extern s32 lbl_80465060[];
extern const f32 lbl_805DDA74;
extern const f32 lbl_805DDA94;
extern const f32 lbl_805DDB10;
extern const f32 TObjCMAssignMenu__data_805DDB20;
extern const f32 lbl_805DDB48;
extern const f32 lbl_805DDB4C;
void TObjCMAssignMenu__sub_80296648(Menu_80296648 *self);
}

extern "C" {

void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0);
void * create__16TObjCMAssignMenuFPvPv(void *arg0, void *arg1);
void *__ct__16TObjCMAssignMenuFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

#pragma push
#pragma fp_contract on
void TObjCMAssignMenu__sub_80296560(Menu_80296560 *self) {
    s32 idx;
    u32 bit;
    s32 i;
    f32 step;
    f32 a;
    V2_80296560 pos;
    if (!(self->timer <= lbl_805DDA74)) {
        a = (self->timer - lbl_805DDA74) / lbl_805DDB10;
        pos.x = lbl_805DDB48;
        step = TObjCMAssignMenu__data_805DDB20;
        idx = 0;
        pos.y = lbl_805DDB4C;
        bit = 1;
        a = a * a;
        for (i = 0; i < self->count; i++, pos.x += step) {
            while (!(bit & self->mask)) {
                bit <<= 1;
                idx++;
            }
            draw_ui_sprite(lbl_8046507C[idx], &pos, lbl_805DDA94, a);
            bit <<= 1;
            idx++;
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjCMAssignMenu__sub_80296648(Menu_80296648 *self) {
    s32 off;
    s32 idx;
    u32 bit;
    s32 i;
    f32 step;
    f32 a;
    V2_80296648 pos;
    if (!(self->timer <= lbl_805DDA74)) {
        a = (self->timer - lbl_805DDA74) / lbl_805DDB10;
        pos.x = lbl_805DDB48;
        step = TObjCMAssignMenu__data_805DDB20;
        idx = 0;
        off = 0;
        pos.y = lbl_805DDB4C;
        bit = 1;
        a = a * a;
        for (i = 0; i < self->count; bit <<= 1, off += 4, idx++, i++, pos.x += step) {
            while (!(bit & self->mask)) {
                bit <<= 1;
                idx++;
                off += 4;
            }
            if (idx < 7) draw_ui_sprite(*(s32 *)((u8 *)lbl_80465060 + off), &pos, lbl_805DDA94, a);
        }
    }
}
#pragma pop

void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;
    s32 var_r6;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    var_r6 = 0;
    var_r4 = 0;
    for (var_ctr = temp_r0; var_ctr > 0; var_ctr--) {
        if (var_r4 == (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
            break;
        }
        var_r6 += 1;
        var_r4 += 1;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x54) = var_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0xA) {
        M2C_FIELD(arg0, s32 *, 0x44) = 9;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (var_r6 / 9);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x30) + 8) / 9);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (var_r6 % 9);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - (M2C_FIELD(arg0, s32 *, 0x48) * 9));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50) > 9) {
            M2C_FIELD(arg0, s32 *, 0x50) = 9;
        }
    }
}

void * create__16TObjCMAssignMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x5C);
    if (o != NULL) {
        o = __ct__16TObjCMAssignMenuFv(o, arg0, arg1);
    }
    return o;
}

}
