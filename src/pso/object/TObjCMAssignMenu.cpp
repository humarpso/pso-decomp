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

struct Chara_80297128 {
    u8 pad0[0x34];
    u32 flags;
    s16 f38[4];
};

struct Menu_80297128 {
    const char *name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Chara_80297128 *chara;
    s32 f20;
    s32 kind;
    s32 f28;
    s32 count;
    s32 n;
    u32 mask;
    s32 f38;
    s32 f3C;
    f32 f40;
    u8 pad44[0x48 - 0x44];
    s32 f48;
    u8 pad4C[0x58 - 0x4C];
    f32 f58;
};

struct Row_80297128 { s16 v[0x16]; };

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
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_display_index__12TCharaMakingFPv(void *);
void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0);
void set_eff_tag__11TChCrEffTagFi(s32);
extern void *__vt__16TObjCMAssignMenu[];
extern const char *lbl_805D3CDC;
extern Chara_80297128 *lbl_805D6520;
extern Row_80297128 lbl_804D8E20[];
extern const f32 lbl_805DDA90;
void *__ct__16TObjCMAssignMenuFv(void *arg0, void *parent, void *kind);
}

extern "C" {

void calc_grid_layout__16TObjCMAssignMenuFPv(void *arg0);
void * create__16TObjCMAssignMenuFPvPv(void *arg0, void *arg1);
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
        o = __ct__16TObjCMAssignMenuFv((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}
void *__ct__16TObjCMAssignMenuFv(void *arg0, void *parent, void *kind) {
#define self ((Menu_80297128 *)arg0)
    u32 bit;
    s32 i;
    __ct__7TObjectFP7TObject(arg0, parent);
    self->vt = __vt__16TObjCMAssignMenu;
    self->name = lbl_805D3CDC;
    self->chara = lbl_805D6520;
    self->f20 = 0;
    self->kind = (s32)kind;
    self->count = lbl_804D8E20[get_display_index__12TCharaMakingFPv(self->chara)].v[self->kind];
    self->f28 = self->chara->f38[self->kind];
    self->n = 0;
    self->mask = 0;
    bit = 1;
    for (i = 0; i < self->count; i++) {
        self->n++;
        self->mask |= bit;
        bit <<= 1;
    }
    calc_grid_layout__16TObjCMAssignMenuFPv(arg0);
    self->f58 = self->f48;
    self->f3C = 1;
    self->f40 = lbl_805DDA90;
    switch (self->kind) {
    case 0:
        set_eff_tag__11TChCrEffTagFi(6);
        break;
    case 1:
        if (self->chara->flags & 0x10) {
            set_eff_tag__11TChCrEffTagFi(8);
        } else {
            set_eff_tag__11TChCrEffTagFi(7);
        }
        break;
    case 2:
        set_eff_tag__11TChCrEffTagFi(4);
        break;
    case 3:
        set_eff_tag__11TChCrEffTagFi(3);
        break;
    }
    return arg0;
#undef self
}

}
