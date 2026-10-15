#include "types.h"
#include "pso/player/TObjPlayer.h"

typedef struct TexObj_803E224C { u32 dummy[8]; } TexObj_803E224C;

typedef struct TexHdr_803E224C {
    s32 format;
    u32 f4;
    u32 f8;
    u32 width;
    u32 height;
    u32 f14;
    u32 flags;
    void *image;
} TexHdr_803E224C;

typedef struct Ctx_803E224C {
    u32 f0;
    u32 f4;
    TexHdr_803E224C *hdr;
    u32 mode;
    u32 f10;
    u32 f14;
    u32 tlut;
} Ctx_803E224C;

typedef struct Vtx_803E26A4 { f32 x, y, w; u32 color; } Vtx_803E26A4;

typedef union WGPipe_803E26A4 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E26A4;

typedef struct Vtx_803E2810 { f32 x, y, w; f32 s, t; u32 color; } Vtx_803E2810;

typedef union WGPipe_803E2810 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E2810;

extern "C" {
s32 GXClearVtxDesc();
s32 Dolphin_GXSetVtxDesc(int, int);
s32 GXSetVtxAttrFmt(int, int, int, int, int);
s32 GXClearVtxDesc();
s32 Dolphin_GXSetVtxDesc(int, int);
s32 GXSetVtxAttrFmt(int, int, int, int, int);
s32 GXSetTevOp(int, int);
s32 GXSetTevColorIn(int, int, int, int, int);
s32 GXSetTevColorOp(int, int, int, int, int, int);
s32 GXSetTevOrder(int, int, int, int);
s32 GXSetNumTevStages(void *);
void set_tev_stage_mode(s32 arg0);
s32 apply_cached_blend_mode(s32 arg0);
s32 TObjPlayer__sub_803E24E0(void);
s32 apply_cached_blend_mode(s32 arg0);
s32 GXSetNumTexGens(s32 arg0);
s32 GXSetNumTexGens(s32 arg0);
s32 GXSetTexCoordGen2(int, int, int, int, int, int);
s32 GXSetTevOp(int, int);
s32 GXSetTevOrder(int, int, int, int);
s32 GXSetNumTevStages(void *);
void Dolphin_GXInitTexObj(TexObj_803E224C *, void *, u16, u16, s32, s32, s32, u8);
void GXInitTexObjCI(TexObj_803E224C *, void *, u16, u16, s32, s32, s32, u8, u32);
void GXLoadTexObj(TexObj_803E224C *, s32);
extern TexObj_803E224C context_texture_obj;
extern Ctx_803E224C *current_render_context;
void load_context_texture_obj(void);
void GXBegin(int, int, u16);
s32 load_screen_space_matrix__10TObjPlayerFv();
void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
void TObjPlayer__sub_803E2248(void);
extern const f32 lbl_805E1070;
void draw_projected_line_strip__10TObjPlayerFPvii(Vtx_803E26A4 *v, s32 n, s32 mode);
void GXSetNumChans(u8);
void GXSetChanCtrl(int, int, int, int, int, int, int);
void GXBegin(int, int, u16);
s32 load_screen_space_matrix__10TObjPlayerFv();
void setup_blended_textured_draw(void);
void TObjPlayer__sub_803E2248(void);
void load_context_texture_obj(void);
extern const f32 lbl_805E1078;
void draw_textured_vertices__10TObjPlayerFPvii(Vtx_803E2810 *v, s32 n, s32 mode);
}

extern "C" {

void setup_opaque_color_draw(void);
void TObjPlayer__sub_803E21DC(void);
void setup_blended_textured_draw(void);
void TObjPlayer__sub_803E2248(void);

void setup_opaque_color_draw(void) {
    TObjPlayer__sub_803E24E0();
    TObjPlayer::setup_vertex_format();
}

void TObjPlayer__sub_803E21DC(void) {
    TObjPlayer::apply_blend_mode_1();
    TObjPlayer::setup_vertex_format();
}

void TObjPlayer::setup_render() {
    TObjPlayer__sub_803E24E0();
    TObjPlayer::setup_vtx_desc();
}

void setup_blended_textured_draw(void) {
    TObjPlayer::apply_blend_mode_1();
    TObjPlayer::setup_vtx_desc();
}

void TObjPlayer__sub_803E2248(void) {

}

void load_context_texture_obj(void) {
    Ctx_803E224C *ctx = current_render_context;
    TexHdr_803E224C *hdr = ctx->hdr;
    u32 flags = hdr->flags;
    u8 mip;
    u32 mode;
    s32 wrapT;
    s32 wrapS;
    if (flags & 0x80000000) {
        mip = 1;
    } else {
        mip = 0;
    }
    mode = ctx->mode;
    wrapT = 1;
    wrapS = 1;
    if (mode & 0x10000) {
        wrapS = 0;
    } else if (mode & 0x40000) {
        wrapS = 2;
    }
    if (mode & 0x8000) {
        wrapT = 0;
    } else if (mode & 0x20000) {
        wrapT = 2;
    }
    if (flags & 0x8000) {
        GXInitTexObjCI(&context_texture_obj, hdr->image, hdr->width, hdr->height, hdr->format, wrapS, wrapT, mip, ctx->tlut);
    } else {
        Dolphin_GXInitTexObj(&context_texture_obj, hdr->image, hdr->width, hdr->height, hdr->format, wrapS, wrapT, mip);
    }
    GXLoadTexObj(&context_texture_obj, 0);
}

void TObjPlayer::setup_vertex_format() {
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((int) (9), (int) (1));
    Dolphin_GXSetVtxDesc((int) (0xB), (int) (1));
    GXSetVtxAttrFmt((int) (4), (int) (9), (int) (1), (int) (4), (int) (0));
    GXSetVtxAttrFmt((int) (4), (int) (0xB), (int) (1), (int) (5), (int) (0));
    TObjPlayer::setup_color_channels(1);
    TObjPlayer::set_tev_passclr();
    TObjPlayer::set_num_tex_gens_zero();
}
void TObjPlayer::setup_vtx_desc() {
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((int) (9), (int) (1));
    Dolphin_GXSetVtxDesc((int) (0xB), (int) (1));
    Dolphin_GXSetVtxDesc((int) (0xD), (int) (1));
    GXSetVtxAttrFmt((int) (4), (int) (9), (int) (1), (int) (4), (int) (0));
    GXSetVtxAttrFmt((int) (4), (int) (0xB), (int) (1), (int) (5), (int) (0));
    GXSetVtxAttrFmt((int) (4), (int) (0xD), (int) (1), (int) (4), (int) (0));
    TObjPlayer::setup_color_channels(1);
    set_tev_stage_mode((s32)((int) (1)));
    TObjPlayer::setup_tex_gen();
}

#pragma push
#pragma scheduling off

s32 TObjPlayer::setup_color_channels(int arg0) {
    GXSetNumChans(arg0);
    GXSetChanCtrl(4, 0, 0, 1, 0, 0, 2);
    if (arg0 == 2) {
        GXSetChanCtrl(5, 0, 0, 1, 0, 0, 2);
    }
}

s32 TObjPlayer__sub_803E24E0(void) { return apply_cached_blend_mode(0x0); }
#pragma pop

#pragma push
#pragma scheduling off
s32 TObjPlayer::apply_blend_mode_1() { return apply_cached_blend_mode(0x1); }
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer::set_tev_passclr() {
    GXSetNumTevStages((void *)((int) (1)));
    GXSetTevOrder((int) (0), (int) (0xFF), (int) (0xFF), (int) (4));
    GXSetTevOp((int) (0), (int) (4));
}
#pragma pop

#pragma push
#pragma peephole off
#pragma scheduling off
void set_tev_stage_mode(s32 arg0) {
    s32 temp_r31 = arg0;
    GXSetNumTevStages((void *) ((u8) temp_r31));
    switch (temp_r31) {
    case 1:
        GXSetTevOrder((int) (0), (int) (0), (int) (0), (int) (4));
        GXSetTevOp((int) (0), (int) (0));
        return;
    case 2:
        GXSetTevOrder((int) (0), (int) (0), (int) (0), (int) (4));
        GXSetTevOrder((int) (1), (int) (0xFF), (int) (0xFF), (int) (5));
        GXSetTevOp((int) (0), (int) (0));
        GXSetTevColorOp((int) (1), (int) (0), (int) (0), (int) (0), (int) (1), (int) (0));
        GXSetTevColorIn((int) (1), (int) (0xF), (int) (0xA), (int) (0xC), (int) (0));
        return;
    }
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TObjPlayer::set_num_tex_gens_zero() { return GXSetNumTexGens(0x0); }
#pragma push
#pragma scheduling off
void TObjPlayer::setup_tex_gen() {
    GXSetNumTexGens((s32)(1U));
    GXSetTexCoordGen2((int) (0), (int) (1), (int) (4), (int) (0x3C), (int) (0), (int) (0x7D));
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803E26A4(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E26A4 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E26A4 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E26A4 *)0xCC008000).f32 = z;
}
static inline void GXColor1u32_803E26A4(u32 c) {
    (*(volatile WGPipe_803E26A4 *)0xCC008000).u32 = c;
}
void draw_projected_line_strip__10TObjPlayerFPvii(Vtx_803E26A4 *v, s32 n, s32 mode) {
    f32 inv;
    u32 c;
    load_screen_space_matrix__10TObjPlayerFv();
    if (mode != 0) {
        TObjPlayer__sub_803E21DC();
    } else {
        setup_opaque_color_draw();
    }
    GXBegin(0x98, 4, n);
    for (; n > 0; n--) {
        inv = lbl_805E1070 / v->w;
        GXPosition3f32_803E26A4(v->x * inv, v->y * inv, inv);
        c = v->color;
        GXColor1u32_803E26A4(((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24));
        v++;
    }
    TObjPlayer__sub_803E2248();
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803E2810(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E2810 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E2810 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E2810 *)0xCC008000).f32 = z;
}
static inline void GXColor1u32_803E2810(u32 c) {
    (*(volatile WGPipe_803E2810 *)0xCC008000).u32 = c;
}
static inline void GXTexCoord2f32_803E2810(f32 s, f32 t) {
    (*(volatile WGPipe_803E2810 *)0xCC008000).f32 = s;
    (*(volatile WGPipe_803E2810 *)0xCC008000).f32 = t;
}
void draw_textured_vertices__10TObjPlayerFPvii(Vtx_803E2810 *v, s32 n, s32 mode) {
    f32 inv;
    u32 c;
    load_screen_space_matrix__10TObjPlayerFv();
    if (mode != 0) {
        setup_blended_textured_draw();
    } else {
        TObjPlayer::setup_render();
    }
    load_context_texture_obj();
    GXBegin(0x98, 4, n);
    for (; n > 0; n--) {
        inv = lbl_805E1078 / v->w;
        GXPosition3f32_803E2810(v->x * inv, v->y * inv, inv);
        c = v->color;
        GXColor1u32_803E2810(((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24));
        GXTexCoord2f32_803E2810(v->s, v->t);
        v++;
    }
    TObjPlayer__sub_803E2248();
}
#pragma pop

#pragma pop

}
