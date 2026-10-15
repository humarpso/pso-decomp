#include "types.h"

struct Desc_80290D1C { void *verts; u32 *colors; int start; int count; };

extern "C" {
s32 draw_line_list(void *, int, int);
void draw_tri_fan_3d__10TObjPlayerFPviUi(void *, int, int);
s32 __cvt_fp2unsigned(f32);
extern s32 lbl_80464CB0[];
extern u32 lbl_804DA97C[4];
extern s32 lbl_804DA98C[];
extern const f32 lbl_805DD958;
extern const f32 lbl_805DD95C;
void draw_creation_ruler_lines(f32 farg0);
}

extern "C" {

void draw_creation_ruler_lines(f32 farg0) {
    Desc_80290D1C d;
    u32 colors[32];
    u32 c;
    s32 i;
    c = ((u32)__cvt_fp2unsigned(lbl_805DD958 * farg0) << 24) | 0xFF0000 | 0xFFA0;
    for (i = 0; i < 32; i++) {
        colors[i] = c;
    }
    d.verts = lbl_80464CB0;
    d.colors = colors;
    d.start = 0;
    d.count = 32;
    draw_line_list(&d, 0x10, 5);
    c = __cvt_fp2unsigned(lbl_805DD95C * farg0) | 0x40400000 | 0x4000;
    lbl_804DA97C[0] = lbl_804DA97C[1] = c;
    draw_tri_fan_3d__10TObjPlayerFPviUi(lbl_804DA98C, 4, 7);
}

}
