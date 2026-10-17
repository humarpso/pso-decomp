#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
struct V2_80293D84 {
    f32 x;
    f32 y;
};

struct Prim_80293D84 {
    V2_80293D84 *pts;
    u32 *colors;
    s32 start;
    s32 count;
};

struct V2_80293E58 {
    f32 x;
    f32 y;
};

extern "C" {
u32 __cvt_fp2unsigned(f32);
extern V2_80293D84 lbl_80464ED8[6];
extern const f32 lbl_805DD9E0;
extern const f32 lbl_805DD9E4;
void fn_80293D84(void *arg0, void *arg1, u32 color, f32 scale, f32 alpha);
extern f32 lbl_80464F10[];
extern f32 lbl_80464F18[];
extern const f32 lbl_805DD9E8;
extern const f32 lbl_805DD9EC;
extern const f32 lbl_805DD9F0;
extern const f32 lbl_805DD9F4;
void fn_80293E58(void *arg0, f32 scale);
#pragma push
#pragma fp_contract on
void fn_80293D84(void *arg0, void *arg1, u32 color, f32 scale, f32 alpha) {
    V2_80293D84 *pos = (V2_80293D84 *)arg1;
    Prim_80293D84 prim;
    u32 colors[6];
    V2_80293D84 pts[6];
    s32 i;
    u32 c;
    for (i = 0; i < 6; i++) {
        pts[i].x = scale * lbl_80464ED8[i].x + pos->x;
        pts[i].y = scale * lbl_80464ED8[i].y + pos->y;
    }
    c = (color & 0x00FFFFFF) | (__cvt_fp2unsigned(lbl_805DD9E0 * alpha) << 24);
    for (i = 0; i < 6; i++) {
        colors[i] = c;
    }
    prim.colors = colors;
    prim.start = 0;
    prim.count = 6;
    prim.pts = pts;
    ((TWindowCtrlMain *)(&prim))->draw_strip_swap_color(6, 6, lbl_805DD9E4);
}
#pragma pop

void fn_80293E58(void *arg0, f32 scale) {
    f32 limY;
    f32 stepY;
    f32 limX;
    f32 stepX;
    f32 startX;
    V2_80293E58 p;
    f32 s = lbl_805DD9E8 * scale;
    s32 odd = 1;
    ((TWindowSubSymbolChatPartsSet *)(&p))->copy_vec2(lbl_80464F10);
    limX = lbl_80464F18[0];
    stepX = lbl_805DD9F0;
    startX = lbl_80464F10[0];
    stepY = lbl_805DD9F4;
    limY = lbl_80464F18[1];
    for (; p.y < limY; p.y += stepY) {
        p.x = startX;
        if (odd == 0) {
            p.x = startX + lbl_805DD9EC;
        }
        for (; p.x < limX; p.x += stepX) {
            fn_80293D84(arg0, &p, 0, s, scale);
        }
        odd ^= 1;
    }
}

}
