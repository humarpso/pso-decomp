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

struct V2_80296744 {
    f32 x;
    f32 y;
};

struct Menu_80296744 {
    u8 pad[0x30];
    s32 total;
    u8 pad34[0x40 - 0x34];
    f32 timer;
    s32 per;
    u8 pad48[4];
    s32 pages;
    u8 pad50[0x58 - 0x50];
    f32 scroll;
};

struct V2_80296928 {
    f32 x;
    f32 y;
};

struct Owner_80296928 {
    u8 pad[0x34];
    u32 flags;
};

struct Menu_80296928 {
    u8 pad0[0x1C];
    Owner_80296928 *owner;
    u8 pad20[4];
    s32 state;
    u8 pad28[0x38 - 0x28];
    s32 frame;
    u8 pad3C[4];
    f32 timer;
    s32 level;
    s32 page;
    s32 pages;
    s32 count;
    s32 cursor;
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
void draw_ui_sprite_scaled(s32, void *, void *, f32, f32);
extern u8 lbl_80465050[];
extern u8 lbl_80465058[];
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDA78;
extern const f32 lbl_805DDA98;
extern const f32 TObjCMAssignMenu__data_805DDB20;
extern const f32 lbl_805DDB50;
extern const f32 lbl_805DDB54;
extern const f32 lbl_805DDB58;
extern const f32 lbl_805DDB5C;
extern const f32 lbl_805DDB60;
extern const f32 lbl_805DDB64;
extern const f32 lbl_805DDB68;
extern const f32 lbl_805DDB6C;
extern const f32 lbl_805DDB70;
extern const f32 lbl_805DDB74;
extern const f32 lbl_805DDB78;
void render_assign_slots__16TObjCMAssignMenuFv(Menu_80296744 *self);
void render_assign_slots__16TObjCMAssignMenuFv(Menu_80296744 *self);
void TObjCMAssignMenu__sub_80296560(Menu_80296560 *self);
void TObjCMAssignMenu__sub_80296648(Menu_80296648 *self);
f32 sin_table_lookup(s32);
f32 get_random_float__8TObjFishFv(f32);
void fn_802910A4(s32, void *, void *, f32);
void draw_ui_sprite(s32, void *, f32, f32);
void draw_ui_sprite_scaled(s32, void *, void *, f32, f32);
extern s32 lbl_805D6558;
extern f32 lbl_80465020[];
extern u8 lbl_80465048[];
extern u8 lbl_804DBCC8[];
void render__16TObjCMAssignMenuFv(Menu_80296928 *self);
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

#pragma push
#pragma fp_contract on
void render_assign_slots__16TObjCMAssignMenuFv(Menu_80296744 *self) {
    f32 zero;
    f32 a;
    f32 step;
    f32 d;
    f32 t;
    s32 i;
    s32 n;
    s32 j;
    V2_80296744 pos;
    if (self->pages == 1) return;
    t = self->timer;
    a = t * (t * (lbl_805DDB50 * t));
    if (a <= lbl_805DDB54) return;
    zero = 0.0f;
    for (i = 0; i < self->pages; i++) {
        n = self->per;
        d = (f32)i - self->scroll;
        if (i == self->pages - 1) {
            n = self->total - i * self->per;
        }
        if (zero == d) continue;
        if (d < zero) {
            t = lbl_805DDA70 - d;
            pos.x = lbl_805DDB5C * t + lbl_805DDB58;
            pos.y = lbl_805DDB64 * t + lbl_805DDB60;
        } else if (d > zero) {
            t = lbl_805DDA70 + d;
            pos.x = lbl_805DDB68 * t + lbl_805DDA78;
            pos.y = lbl_805DDB6C * t + lbl_805DDA98;
        }
        step = TObjCMAssignMenu__data_805DDB20;
        for (j = 0; j < n; j++) {
            draw_ui_sprite_scaled(0x1F, &pos, lbl_80465050, lbl_805DDB70, a);
            pos.x += step;
        }
        pos.x += lbl_805DDB74;
        pos.y += lbl_805DDB78;
        draw_ui_sprite_scaled(i + 0x14, &pos, lbl_80465058, lbl_805DDB70, a);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_loop_invariants off
void render__16TObjCMAssignMenuFv(Menu_80296928 *self) {
    V2_80296928 pos;
    V2_80296928 scl;
    V2_80296928 pos2;
    V2_80296928 pos3;
    f32 pulse;
    f32 base;
    f32 alpha;
    f32 w;
    f32 t;
    f32 a;
    f32 step;
    s32 idx;
    s32 i;
    s32 sprite;
    render_assign_slots__16TObjCMAssignMenuFv((Menu_80296744 *)(self));
    pulse = 0.25f * sin_table_lookup(self->frame << 10) + 1.0f;
    if (pulse > 1.0f) {
        pulse = 1.0f;
    }
    idx = self->level - 1;
    if (idx < 0) {
        idx = 0;
    } else if (idx >= 10) {
        idx = 9;
    }
    base = lbl_80465020[idx];
    if (!(self->timer <= 0.33f)) {
        if (self->timer >= 0.66f) {
            t = 1.0f;
        } else {
            t = (self->timer - 0.33f) / 0.33f;
        }
        scl.y = 1.0f;
        pos.y = 146.0f;
        w = t * (base - 75.0f) + 75.0f;
        pos.x = 75.0f;
        pos.x = 9.0f * sin_table_lookup(self->frame << 10) + pos.x;
        scl.x = (w - pos.x) / 48.0f;
        fn_802910A4(8, &pos, &scl, -2.75f);
        pos.x = w;
        scl.x = 1.0f;
        fn_802910A4(9, &pos, &scl, -2.75f);
    }
    if (!(self->timer <= 0.0f)) {
        draw_ui_sprite(0, lbl_804DBCC8, -2.4375f,
                       self->timer >= 0.33f ? 1.0f : self->timer / 0.33f);
    }
    if (!(self->timer <= 0.66f)) {
        a = (self->timer - 0.66f) / 0.33999997f;
        pos2.x = 103.0f;
        pos2.y = 150.0f;
        step = 17.0f;
        alpha = a * a;
        for (i = 0; i < self->count; i++) {
            f32 s = alpha;
            sprite = 0x1F;
            if (i == self->cursor) {
                sprite = 0x20;
                if (lbl_805D6558 != 2) {
                    s = alpha * (0.2f * get_random_float__8TObjFishFv(sin_table_lookup(self->frame << 12)) + 0.2f);
                } else {
                    s = alpha * pulse;
                }
            }
            draw_ui_sprite(sprite, &pos2, -2.4375f, s);
            pos2.x += step;
        }
        if (self->pages > 1) {
            s32 n = self->page;
            pos2.x += 6.0f;
            pos2.y += 20.0f;
            draw_ui_sprite_scaled(n + 0x14, &pos2, lbl_80465048, -2.4375f, alpha);
        }
        w = base - 347.0f;
        pos3.x = 299.0f + w;
        pos3.y = 149.0f;
        draw_ui_sprite(self->cursor + 0x14, &pos3, -2.4375f, alpha * pulse);
        pos3.x = 305.0f + w;
        pos3.y = 150.0f;
        draw_ui_sprite(0x1E, &pos3, -2.4375f, alpha);
        pos3.x = 324.0f + w;
        pos3.y = 167.0f;
        draw_ui_sprite(self->count + 0x13, &pos3, -2.4375f, alpha);
    }
    switch (self->state) {
    case 0:
        TObjCMAssignMenu__sub_80296648((Menu_80296648 *)(self));
        break;
    case 1:
        if (self->owner->flags & 0x10) {
            TObjCMAssignMenu__sub_80296648((Menu_80296648 *)(self));
        } else {
            TObjCMAssignMenu__sub_80296560((Menu_80296560 *)(self));
        }
        break;
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
