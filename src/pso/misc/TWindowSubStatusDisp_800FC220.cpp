#include "types.h"

struct E_800FC220 { f32 w; f32 x; };

struct Quad_800FC310 { f32 x0; f32 y0; f32 x1; f32 y1; f32 u0; f32 v0; f32 u1; f32 v1; };

extern "C" {
extern E_800FC220 *lbl_805D5398;
s32 TWindowSubStatusDisp__sub_800FC220(u8 c);
extern E_800FC220 *lbl_805D5398;
extern const f32 lbl_805DA9B8;
void TWindowSubStatusDisp__sub_800FC310(u8 c, Quad_800FC310 *q);
}

extern "C" {

void TWindowSubStatusDisp__sub_800FC248(void);

s32 TWindowSubStatusDisp__sub_800FC220(u8 c) {
    return (s32)lbl_805D5398[c - 0x20].w;
}

void TWindowSubStatusDisp__sub_800FC248(void) {  }
void TWindowSubStatusDisp__sub_800FC310(u8 c, Quad_800FC310 *q) {
    f32 a = (f32)((c << 4) & 0xF0);
    f32 b = (f32)(c & 0xF0);
    E_800FC220 *g = &lbl_805D5398[c - 0x20];
    q->y0 = q->y0 + g->x;
    q->x1 = q->x0 + g->w;
    q->y1 = lbl_805DA9B8 + q->y0;
    q->u0 = a / 256.0f;
    q->v0 = b / 256.0f;
    q->u1 = (a + g->w) / 256.0f;
    q->v1 = (lbl_805DA9B8 + b) / 256.0f;
}

}
