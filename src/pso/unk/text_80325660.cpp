#include "types.h"
struct Ent_80325660 { u8 b[0x20]; };

struct Obj_80325660 { u8 pad[0x20]; u32 count; u8 pad2[4]; Ent_80325660 ents[12]; u32 col[4]; };

extern "C" {
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(int, u32);
extern s32 lbl_805D6C58;
extern const f32 lbl_805DF600;
void fn_80325660(Obj_80325660 *arg0);
}

extern "C" {

void fn_80325660(Obj_80325660 *arg0) {
    u32 i;
    for (i = 0; i < arg0->count; i++) {
        begin_screen_draw(1);
        set_global_param__8TObjFishFi(lbl_805D6C58);
        TWindowSubStatusDisp__sub_803DF160(0, (arg0->col[i] << 24) | 0xFFFFFF);
        draw_textured_quad_at_depth(&arg0->ents[i], lbl_805DF600);
        get_player__20TWindowSubStatusDispFv();
    }
}

}
