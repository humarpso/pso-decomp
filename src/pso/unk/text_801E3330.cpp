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

extern "C" {
void TObjCMHairMenu__sub_801E35C4(void *, s32);
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void TObjPlayer__sub_803E20B0(void);
void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
void fn_801E3330(Lines_801E3330 *l, s32 n, s32 flags, f32 scale);
void fn_801E3518(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
void TObjPlayer__sub_801E3F24(u32);
void TObjPlayer__sub_801E3F30(f32, f32, f32);
void GXBegin(s32, s32, u16);
void GXSetLineWidth(s32, s32);
void load_camera_view_matrix(void);
void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
extern int lbl_805D3580;
void TObjPlayer__sub_801E341C(Lines_801E341C *l, s32 n, u32 flags);
}

extern "C" {

void fn_801E3518(void);
void fn_801E3524(int a0);
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

void TObjPlayer__sub_801E341C(Lines_801E341C *l, s32 n, u32 flags) {
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
    fn_801E3518();
}

void fn_801E3518(void) { lbl_805D3580 = 12; }

    extern int lbl_805D3580;
void fn_801E3524(int a0) { lbl_805D3580 = a0; }
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags) {
    s32 i;
    u32 x;
    u32 *p;
    if (!(flags & 2)) {
        TObjCMHairMenu__sub_801E35C4(c, n);
        return;
    }
    p = c->data;
    for (i = 0; i < n; i++) {
        x = *p;
        *p = (x << 8) | (x >> 24);
        p++;
    }
    TObjCMHairMenu__sub_801E35C4(c, n);
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

}
