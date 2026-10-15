#include "types.h"
struct Card_802AE978 { u8 b[0x20]; };

struct Obj_802AE978 {
    u8 pad0[0xA8];
    u32 count;
    u8 padAC[0xBC - 0xAC];
    Card_802AE978 cards[48];
    u32 colors[16];
    u8 pad6FC[0x704 - 0x6FC];
    f32 scale;
};

extern "C" {
void set_global_param__8TObjFishFl(int);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(int, int);
extern s32 menu_selection_cursor_texture_list;
void draw_select_cursor_quads(Obj_802AE978 *o);
}

extern "C" {

void draw_select_cursor_quads(Obj_802AE978 *o) {
    u32 i;
    for (i = 0; i < o->count; i++) {
        begin_screen_draw(1);
        set_global_param__8TObjFishFl(menu_selection_cursor_texture_list);
        set_draw_texture_and_color(0, (o->colors[i] << 24) | 0xFFFFFF);
        draw_textured_quad_at_depth(&o->cards[i], o->scale);
        draw_textured_quad_at_depth(&o->cards[i + 16], o->scale);
        draw_textured_quad_at_depth(&o->cards[i + 32], o->scale);
        get_player__20TWindowSubStatusDispFv();
    }
}

}
