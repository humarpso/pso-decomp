#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rect_801E317C { f32 x0, y0, x1, y1; };

extern "C" {
extern f32 lbl_805D3588;
extern f32 lbl_805D358C;
void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1);
extern f32 lbl_805D3588;
extern f32 lbl_805D358C;
void GXSetScissor(u32, u32, u32, u32);
void TCameraCtrl__sub_801E317C(s32 mode, Rect_801E317C *r);
}

extern "C" {

void TCameraCtrl__sub_801E32E4(void);
int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);

void TCameraCtrl__sub_801E317C(s32 mode, Rect_801E317C *r) {
    f32 adj;
    f32 x;
    f32 y;
    f32 ox;
    f32 w;
    f32 h;
    f32 oy;
    if (mode == 2) {
        x = 32.0f * r->x0;
        y = 32.0f * r->y0;
        w = 32.0f * (r->x1 - r->x0);
        h = 32.0f * (1.0f + (r->y1 - r->y0));
        if (h >= 480.0f) {
            h = 480.0f;
        }
        if (w >= 640.0f) {
            w = 640.0f;
        }
        oy = lbl_805D358C - 240.0f;
        ox = lbl_805D3588 - 320.0f;
        if (oy >= 0.0f) {
            adj = -oy;
            oy = 0.0f;
        }
        GXSetScissor(x - ox, y + adj, w, h - oy);
    } else {
        GXSetScissor(0, 0, 640, 480);
    }
}

void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1) {
    lbl_805D3588 = farg0;
    lbl_805D358C = farg1;
}

void TCameraCtrl__sub_801E32E4(void) {  }

}
