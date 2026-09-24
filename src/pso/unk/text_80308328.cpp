#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct T_80308328 { u8 pad0[0x40]; u32 flags; u8 pad44[0xC]; s32 f50; u8 pad54[0x1C]; void *f70; void *f74; s32 f78; s32 f7c; };

extern "C" {
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32);
M2C_UNK TObjPlayer__sub_8011EB84(void *, void *, int, int);
void TObjPlayer__sub_80308368(u8 *arg0);
void fn_80308244();
s32 apply_config_if_valid__13TAdVIConfigGCFii(s32, s32);
void TObjPlayer__sub_80308328(void *self, T_80308328 *p);
}

extern "C" {

void TObjPlayer__sub_80308328(void *self, T_80308328 *p) {
    p->f74 = (void *)fn_80308244;
    p->f70 = (void *)apply_config_if_valid__13TAdVIConfigGCFii;
    p->f50 = -0x4000;
    p->f78 = 0x1bb;
    p->f7c = 0x1bc;
    p->flags |= 0x80;
}

void TObjPlayer__sub_80308368(u8 *arg0) {
    M2C_UNK sp8;
    draw_icon__10TObjPlayerFPvii(arg0, 1, (s32) &sp8);
    TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0x188)), (int) (0));
}

}
