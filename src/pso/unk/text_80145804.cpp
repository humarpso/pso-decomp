#include "types.h"
typedef struct Rect_80145804 { u8 pad[0x24]; } Rect_80145804;

typedef struct Tex_80145804 { u8 pad[0xC]; } Tex_80145804;

typedef struct Font_80145804 {
    u32 *bufs[2];
    Rect_80145804 rects[2];
    Tex_80145804 names[2];
} Font_80145804;

typedef struct Img_80145804 { u8 pad[0x20]; u32 *pixels; } Img_80145804;

typedef struct TexObj_80145804 { u8 pad[0xC]; Img_80145804 *img; } TexObj_80145804;

typedef struct TexEnt_80145804 { u32 a; u32 b; TexObj_80145804 *obj; } TexEnt_80145804;

typedef struct TexList_80145804 { TexEnt_80145804 *ents; } TexList_80145804;

typedef struct Glyph_80145804 {
    s16 code;
    u8 w;
    u8 h;
    u8 page;
    u8 u;
    u8 v;
    u8 pad[3];
} Glyph_80145804;

extern "C" {
void TLobby__sub_800F8E78(void);
void load_font_texture__6TLobbyFv(void);
s32 set_stream_and_load_file__6TLobbyFi(void *);
void *TNECFontEORFunction__ct(void *);
void *alloc_buffer__11TOBoss4RockFPv(u32);
void *__nw__7TObjectFUl(u32);
void set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);
void set_texture_name(void *, void *, u32, u32);
void set_global_param__8TObjFishFi(void *);
void set_entry_index__9TLanguageFii(u32, int);
void load_texture_list(void *);
extern u8 lbl_8043F3D8[];
extern TexList_80145804 lbl_804A74E8[];
extern s32 lbl_805D56B0;
extern s16 *lbl_805D56B4;
extern s32 lbl_805D56B8;
extern Glyph_80145804 *lbl_805D56BC;
extern u8 lbl_805D56C0;
extern void *lbl_805D56C4;
void load_menu_font(void);
}

extern "C" {

__declspec(section ".data") u32 *lbl_8050C040[2];
Rect_80145804 lbl_8050C048[2];
Tex_80145804 lbl_8050C090[2];
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void clear_words_80145804(u32 *p, s32 count) {
    s32 n;
    for (n = 0; n < count; n++) {
        *p++ = 0;
    }
}
void load_menu_font(void) {
    u32 m;
    u32 *p;
    s16 *t;
    s32 n;
    Glyph_80145804 *g;
    void *f;
    u32 i;
    u32 j;
    u32 k;
    u32 u;
    u32 v;
    load_font_texture__6TLobbyFv();
    lbl_805D56B0 = set_stream_and_load_file__6TLobbyFi(lbl_8043F3D8);
    TLobby__sub_800F8E78();
    for (i = 0; i < 2; i++) {
        set_render_rect__10TObjPlayerFPviiii(lbl_8050C048 + i, 0, 0x208, 0x100, 0x100);
        set_texture_name(lbl_8050C090 + i, lbl_8050C048 + i, i + 0xDCF28, 0x08800000);
    }
    load_texture_list(lbl_804A74E8);
    for (m = 0; m < 2; m++) {
        *(lbl_8050C040 + m) = lbl_804A74E8[0].ents[m].obj->img->pixels;
        clear_words_80145804(*(lbl_8050C040 + m), 0x2000);
    }
    lbl_805D56B4 = (s16 *)alloc_buffer__11TOBoss4RockFPv(0x100);
    clear_words_80145804((u32 *)lbl_805D56B4, 0x40);
    lbl_805D56B4[0] = 0xFFF;
    lbl_805D56B4[1] = 0x3FFF;
    lbl_805D56B4[2] = 0x5FFF;
    lbl_805D56B4[3] = 0x7FFF;
    set_global_param__8TObjFishFi(lbl_804A74E8);
    for (i = 0; i < 2; i++) {
        set_entry_index__9TLanguageFii(i, 0);
    }
    g = (Glyph_80145804 *)alloc_buffer__11TOBoss4RockFPv(0xB40);
    lbl_805D56BC = g;
    for (i = 0; i < 2; i++) {
        v = 0;
        for (j = 0; j < 12; j++) {
            u = 0;
            for (k = 0; k < 12; k++) {
                g->code = 0x2EF;
                g->w = 9;
                g->h = 0xF0;
                g->page = i;
                g->u = u;
                g->v = v;
                g++;
                u += 20;
            }
            v += 20;
        }
    }
    lbl_805D56C0 = 0;
    lbl_805D56B8 = 3;
    f = __nw__7TObjectFUl(0x1C);
    if (f != NULL) {
        f = TNECFontEORFunction__ct(f);
    }
    lbl_805D56C4 = f;
}
#pragma pop

}
