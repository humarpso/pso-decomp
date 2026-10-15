#include "pso/TFontSmallHelp.h"
#include "types.h"

extern "C" {
int set_global_param__8TObjFishFi(void*);
    extern int localized_alphabet_list;
void begin_render__20TWindowSubStatusDispFv(s32 _w0);
u32 calc_small_font_text_width(void *);
s32 strncpy(void *, void *, s32);
extern const f32 lbl_805DA9C0;
}

extern "C" {

void render_forward__20TWindowSubStatusDispFPv(void* p);

void render_forward__20TWindowSubStatusDispFPv(void* p) { begin_render__20TWindowSubStatusDispFv((s32)(p)); }
void begin_render__20TWindowSubStatusDispFv(s32 _w0) { set_global_param__8TObjFishFi((void*)(localized_alphabet_list)); }
}

void TFontSmallHelp::set_color(u32 text_color) {
    color = text_color & 0xFFFFFF;
}
void TFontSmallHelp::set_help_text(const char *text_source) {
    if (text_source == NULL) {
        text[0] = 0;
        text_width = (f32) lbl_805DA9C0;
        return;
    }
    strncpy(text, (void*)text_source, 0x1F);
    text[31] = 0;
    text_width = (f32) calc_small_font_text_width(text);
}
