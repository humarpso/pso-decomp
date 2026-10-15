#include "types.h"
#include "pso/player/TObjPlayer.h"

struct C_80052390 { f32 a, b, c, d; };

extern "C" {
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int chunk_polygon_flags_or_mask;
extern int chunk_polygon_flags_and_mask;
extern int model_render_flags;
extern const f32 lbl_805D8ADC;
extern s32 lbl_805D8AE8;
extern const f32 lbl_805D8AEC;
void TObjPlayer__sub_80052390(f32 x);
}

extern "C" {

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int chunk_polygon_flags_or_mask;
    extern int chunk_polygon_flags_and_mask;
    extern int model_render_flags;
void TObjPlayer::sync_player_globals() { chunk_polygon_flags_and_mask = lbl_805D5664; chunk_polygon_flags_or_mask = lbl_805D5668; model_render_flags = lbl_805D5660; }
void TObjPlayer__sub_80052390(f32 x) {
    C_80052390 c;
    s32 old = (*(s32 *)&model_render_flags);
    (*(s32 *)&model_render_flags) = old & ~0x10;
    (*(s32 *)&lbl_805D5660) = old;
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&chunk_polygon_flags_and_mask);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&chunk_polygon_flags_or_mask);
    (*(s32 *)&model_render_flags) |= lbl_805D8AE8;
    set_chunk_material_override_pair(0xFF00, 0x800);
    c.a = lbl_805D8AEC + x;
    c.b = c.c = c.d = lbl_805D8ADC;
    set_chunk_material_color(&c);
}

}
