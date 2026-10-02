#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render_status__20TWindowSubStatusDispFPv(void *arg0);
void set_global_param__8TObjFishFi(void *);
void draw_textured_quad_at_depth(void *, f32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);

extern void *lbl_805D6648;
extern const f32 lbl_805DDF38;

void render_status__20TWindowSubStatusDispFPv(void *arg0) {
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6648);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, void **, 0x80));
    draw_textured_quad_at_depth((void *)((char *)arg0 + 68), lbl_805DDF38);
    get_player__20TWindowSubStatusDispFv();
}

}
