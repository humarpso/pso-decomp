#include "types.h"

struct Col_802575C0 { u8 r, g, b, a; };

struct Fade_802575C0 {
    u16 flags;
    u8 pad2[0x16];
    Col_802575C0 col;
    u8 pad1c[0x2C - 0x1C];
    u32 rgb;
    u8 pad30[4];
    f32 tr, tg, tb;
    u8 pad40[4];
    f32 cr, cg, cb;
    u8 pad50[4];
    f32 dr, dg, db;
};

extern "C" {
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
extern const f32 lbl_805DCED8;
void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time);
}

extern "C" {

void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2);
int TWindowSubStatusDisp__sub_80256BDC(void*, int);

    extern unsigned char lbl_804CF930[];
    extern const float lbl_805DCE58;
void* init_from__20TWindowSubStatusDispFPvPvi(void* a0, void* a1, int a2) { TWindowSubStatusDisp__sub_80256BDC(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF930; *(float*)((char*)a0 + 0x1c) = lbl_805DCE58; *(float*)((char*)a0 + 0xc) = *(float*)((char*)a1 + 0x4); *(float*)((char*)a0 + 0x10) = *(float*)((char*)a1 + 0x8); *(float*)((char*)a0 + 0x8) = *(float*)((char*)a1 + 0xc); *(float*)((char*)a0 + 0x14) = *(float*)((char*)a1 + 0x18); *(int*)((char*)a0 + 0x18) = *(int*)((char*)a1 + 0x10); *(short*)((char*)a0 + 0x0) = *(int*)((char*)a1 + 0x14); *(float*)((char*)a0 + 0x20) = *(float*)((char*)a1 + 0x1c); *(float*)((char*)a0 + 0x24) = *(float*)((char*)a1 + 0x20); return a0; }
void start_text_color_transition(Fade_802575C0 *arg0, u32 rgb, f32 time) {
    Col_802575C0 c;
    if (arg0->rgb != rgb) {
        arg0->rgb = rgb;
        c.r = rgb >> 16;
        c.g = rgb >> 8;
        c.b = rgb;
        arg0->tr = c.r;
        arg0->tg = c.g;
        arg0->tb = c.b;
        copy4__18TAdChrMoveEffectGCFPvPv(&c, &arg0->col);
        time = lbl_805DCED8 / time;
        arg0->cr = c.r;
        arg0->cg = c.g;
        arg0->cb = c.b;
        arg0->dr = time * (arg0->tr - arg0->cr);
        arg0->dg = time * (arg0->tg - arg0->cg);
        arg0->db = time * (arg0->tb - arg0->cb);
        arg0->flags |= 0x40;
    }
}

}
