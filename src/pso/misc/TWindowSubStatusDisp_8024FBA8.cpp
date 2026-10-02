#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Quad_8024FBB0 {
    f32 x;
    f32 y;
    f32 x2;
    f32 y2;
    f32 u[4];
};

extern "C" {
extern s32 lbl_805D6430;
extern f32 lbl_805D6434;
extern f32 lbl_805D6438;
extern s32 lbl_805D643C;
extern s32 lbl_805D6440;
void set_text_draw_params(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
u8 get_small_font_glyph_width(s32);
s32 TWindowSubStatusDisp__sub_800FC248(s32);
void TWindowSubStatusDisp__sub_800FC24C(s32, void *);
void build_small_font_glyph_quad(s32, void *);
void render_forward__20TWindowSubStatusDispFPv();
void TWindowKeyBoardSoft__sub_8024E6D8(s32, void *);
s32 TWindowKeyBoardSoft__sub_8024E8E8(s32, void *);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(s32, u32);
extern s32 lbl_805D6430;
extern f32 lbl_805D6434;
extern s32 lbl_805D643C;
extern s32 lbl_805D6440;
extern const f32 lbl_805DCCD8;
extern const f32 lbl_805DCCDC;
s32 TWindowSubStatusDisp__sub_8024FBB0(f32 *pos, const char *s, u32 color, f32 width);
}

extern "C" {

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v);

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x64) = v; }

s32 TWindowSubStatusDisp__sub_8024FBB0(f32 *pos, const char *s, u32 color, f32 width) {
    s32 ok;
    f32 x;
    f32 y;
    s32 glyph;
    u8 adv;
    s32 c;
    Quad_8024FBB0 q;
    ok = 1;
    if (s == NULL) {
        return 1;
    }
    if (*s == 0) {
        return 1;
    }
    x = pos[0];
    y = pos[1];
    begin_screen_draw(1);
    render_forward__20TWindowSubStatusDispFPv();
    TWindowSubStatusDisp__sub_803DF160(0, color);
    while (*s != 0) {
        c = (u8)*s++;
        if (c == 0x20) {
            x += lbl_805DCCD8;
            width -= lbl_805DCCD8;
        } else if (width <= lbl_805DCCDC) {
            ok = 0;
        } else {
            glyph = TWindowSubStatusDisp__sub_800FC248(c);
            adv = get_small_font_glyph_width(glyph);
            q.x = x;
            q.y = y;
            if (lbl_805D6440 != 0) {
                TWindowSubStatusDisp__sub_800FC24C(glyph, &q);
            } else {
                build_small_font_glyph_quad(glyph, &q);
            }
            if ((f32)adv > width) {
                ok = 0;
                q.x2 = q.x + width;
            }
            x += (f32)adv;
            width -= (f32)adv;
            if (lbl_805D643C == 0 || TWindowKeyBoardSoft__sub_8024E8E8(lbl_805D6430, &q) != 0) {
                TWindowKeyBoardSoft__sub_8024E6D8(lbl_805D6430, &q);
                draw_textured_quad_at_depth(&q, lbl_805D6434);
            }
        }
    }
    get_player__20TWindowSubStatusDispFv();
    return ok;
}

void set_text_draw_params(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    lbl_805D6430 = arg0;
    lbl_805D6434 = farg0;
    lbl_805D6438 = farg1;
    lbl_805D643C = arg1;
    lbl_805D6440 = arg2;
}

}
