#include "types.h"

struct C_80052390 { f32 a, b, c, d; };

extern "C" {
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int lbl_805D7780;
extern int lbl_805D7784;
extern int some_id_805c6f74;
extern const f32 lbl_805D8ADC;
extern s32 lbl_805D8AE8;
extern const f32 lbl_805D8AEC;
void TObjPlayer__sub_80052390(f32 x);
}

extern "C" {

void sync_player_globals__10TObjPlayerFv(void);

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;
void sync_player_globals__10TObjPlayerFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }
void TObjPlayer__sub_80052390(f32 x) {
    C_80052390 c;
    s32 old = (*(s32 *)&some_id_805c6f74);
    (*(s32 *)&some_id_805c6f74) = old & ~0x10;
    (*(s32 *)&lbl_805D5660) = old;
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&lbl_805D7784);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&lbl_805D7780);
    (*(s32 *)&some_id_805c6f74) |= lbl_805D8AE8;
    set_chunk_material_override_pair(0xFF00, 0x800);
    c.a = lbl_805D8AEC + x;
    c.b = c.c = c.d = lbl_805D8ADC;
    set_chunk_material_color(&c);
}

}
