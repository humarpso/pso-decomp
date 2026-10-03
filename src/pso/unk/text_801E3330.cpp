#include "types.h"

struct Ctrl_801E352C {
    u8 pad[4];
    u32 *data;
};

struct Vec2_801E3330 { f32 x, y; };

struct Lines_801E3330 {
    Vec2_801E3330 *verts;
    u32 *colors;
};

struct Vec3_801E341C { f32 x, y, z; };

struct Lines_801E341C {
    Vec3_801E341C *positions;
    u32 *colors;
};

struct Strip_801E35C4 {
    Vec2_801E3330 *verts;
    u32 *colors;
    s32 f8;
    s32 count;
};

extern "C" {
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags, f32 _w3);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void TObjPlayer__sub_803E20B0(void);
void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
void fn_801E3330(Lines_801E3330 *l, s32 n, s32 flags, f32 scale);
void reset_line_width(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void load_camera_view_matrix(void);
void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
extern int lbl_805D3580;
void draw_line_list(Lines_801E341C *l, s32 n, u32 flags);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void TObjPlayer__sub_803E20B0(void);
void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
void TObjPlayer__sub_803E2224(void);
void setup_render__10TObjPlayerFv(void);
void fn_801E3330(Lines_801E3330 *l, s32 n, s32 flags, f32 scale);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TObjCMHairMenu__sub_801E3F54(void *, void *);
void fn_801E3F44(f32, f32);
void TObjCMHairMenu__sub_801E35C4(Strip_801E35C4 *self, s32 count, s32 flags, f32 scale);
}

extern "C" {

void reset_line_width(void);
void set_line_width(int a0);
void TCameraCtrl__sub_801E32E4(void);
int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);

    extern int lbl_805D3580;

void fn_801E3330(Lines_801E3330 *l, s32 n, s32 flags, f32 scale) {
    u32 c;
    TObjPlayer__sub_803E20B0();
    if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        TObjPlayer__sub_803E21B8();
    }
    GXSetLineWidth(0xC, 0);
    if (flags & 0x10) {
        GXBegin(0xB0, 4, n);
    } else {
        GXBegin(0xA8, 4, n);
    }
    while (n > 0) {
        n--;
        TObjPlayer__sub_801E3F30(scale * l->verts[n].x, scale * l->verts[n].y, scale);
        c = l->colors[n];
        TObjPlayer__sub_801E3F24((c << 8) | (c >> 24));
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
}

void draw_line_list(Lines_801E341C *l, s32 n, u32 flags) {
    Vec3_801E341C *p;
    u32 *c;
    load_camera_view_matrix();
    if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        TObjPlayer__sub_803E21B8();
    }
    GXSetLineWidth((u8)lbl_805D3580, 0);
    if (flags & 0x10) {
        GXBegin(0xB0, 4, n * 2);
    } else {
        GXBegin(0xA8, 4, n * 2);
    }
    p = l->positions;
    c = l->colors;
    while (n > 0) {
        TObjPlayer__sub_801E3F30(p->x, p->y, p->z);
        TObjPlayer__sub_801E3F24((*c << 8) | (*c >> 24));
        c++;
        p++;
        TObjPlayer__sub_801E3F30(p->x, p->y, p->z);
        TObjPlayer__sub_801E3F24((*c << 8) | (*c >> 24));
        if (!(flags & 0x10)) {
            p++;
            c++;
        }
        n--;
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
    reset_line_width();
}

void reset_line_width(void) { lbl_805D3580 = 12; }

    extern int lbl_805D3580;
void set_line_width(int a0) { lbl_805D3580 = a0; }
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags, f32 _w3) {
    s32 i;
    u32 x;
    u32 *p;
    if (!(flags & 2)) {
        TObjCMHairMenu__sub_801E35C4((Strip_801E35C4 *)(c), (s32)(n), (s32)(flags), _w3);
        return;
    }
    p = c->data;
    for (i = 0; i < n; i++) {
        x = *p;
        *p = (x << 8) | (x >> 24);
        p++;
    }
    TObjCMHairMenu__sub_801E35C4((Strip_801E35C4 *)(c), (s32)(n), (s32)(flags), _w3);
    {
    u32 *q = c->data;
    u32 y;
    for (i = 0; i < n; i++) {
        y = *q;
        *q = (y >> 8) | (y << 24);
        q++;
    }
    }
}
void TObjCMHairMenu__sub_801E35C4(Strip_801E35C4 *self, s32 count, s32 flags, f32 scale) {
    Strip_801E35C4 tmp;
    Vec2_801E3330 v[2];
    u32 c[2];
    u32 tex;
    Vec2_801E3330 *pts;
    s32 i;
    s16 *cols;
    if (!(flags & 2)) {
        tmp.verts = v;
        tmp.colors = c;
        tmp.f8 = self->f8;
        tmp.count = 2;
        fn_801E3330((Lines_801E3330 *)self, count, flags | 0x10, scale);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&v[0], &self->verts[0]);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&v[1], &self->verts[self->count - 1]);
        TObjCMHairMenu__sub_801E3F54(&c[0], &self->colors[0]);
        TObjCMHairMenu__sub_801E3F54(&c[1], &self->colors[self->count - 1]);
        fn_801E3330((Lines_801E3330 *)&tmp, 2, flags, scale);
        return;
    }
    TObjPlayer__sub_803E20B0();
    tex = flags & 8;
    if (tex) {
        if (flags & 4) {
            TObjPlayer__sub_803E2224();
        } else {
            setup_render__10TObjPlayerFv();
        }
    } else if (flags & 4) {
        TObjPlayer__sub_803E21DC();
    } else {
        TObjPlayer__sub_803E21B8();
    }
    GXBegin(0xA0, 4, count);
    pts = self->verts;
    cols = (s16 *)self->colors;
    for (i = 0; i < count; pts++, cols += 2, i++) {
        TObjPlayer__sub_801E3F30(pts->x * scale, pts->y * scale, scale);
        TObjPlayer__sub_801E3F24(*(u32 *)cols);
        if (tex) {
            fn_801E3F44((f32)cols[0] / 255.0f, (f32)cols[1] / 255.0f);
        }
    }
    TObjEneRe4Sorcerer__sub_801E3F20();
}

}
