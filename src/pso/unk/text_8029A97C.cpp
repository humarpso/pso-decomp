#include "types.h"
#include "pso/TChCrEffTag.h"

struct Stack_8029A97C {
    f32 sp8;
    f32 spC;
};

struct A_8029A9B8 { u8 pad[0x20]; f32 f20; };

extern "C" {
s32 draw_default_sprite__12TChCrEffWallFv(s32, f32 *, f32);
extern const f32 lbl_805DDC70;
extern const f32 lbl_805DDC74;
extern const f32 lbl_805DDC78;
void draw_chcr_tag_heading_frame(void);
void fn_802910A4(int, void *, void *, f32, f32, f32);
extern const f32 lbl_805DDC7C;
extern const f32 lbl_805DDC80;
extern const f32 lbl_805DDC84;
extern const f32 lbl_805DDC88;
extern const f32 lbl_805DDC8C;
void draw_chcr_tag_heading_frame(void) {
    Stack_8029A97C stack;
    stack.sp8 = lbl_805DDC70;
    stack.spC = lbl_805DDC74;
    draw_default_sprite__12TChCrEffWallFv(0x36, &stack.sp8, lbl_805DDC78);
}
void TChCrEffTag::draw_chcr_tag_frame() {
    A_8029A9B8 *arg0 = (A_8029A9B8 *)this;
    f32 sp10[2];
    f32 sp8[2];
    f32 a;
    f32 b;
    sp10[1] = lbl_805DDC7C;
    sp10[0] = lbl_805DDC80;
    a = arg0->f20;
    b = a * lbl_805DDC84;
    sp8[1] = lbl_805DDC88;
    sp8[0] = b;
    fn_802910A4(0x34, sp10, sp8, lbl_805DDC8C, b, a);
    sp10[0] = arg0->f20;
    draw_default_sprite__12TChCrEffWallFv((s32)(0x35), (f32 *)(sp10), lbl_805DDC8C);
}

}
