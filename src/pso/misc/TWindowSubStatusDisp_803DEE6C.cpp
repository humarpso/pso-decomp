#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off

union Pipe_803DEECC { u8 u8v; u16 u16v; u32 u32v; s32 s32v; f32 f32v; };

extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
void TWindowSubStatusDisp__sub_803DEE6C(s32 arg0);
s32 TObjPlayer__sub_803E1D90(void *, int, int, int);
extern s32 lbl_805D77B0;
void TWindowSubStatusDisp__sub_803DF160(s32 arg0, s32 arg1);
void GXBegin(u32, u32, u16);
extern s32 lbl_805D77B0;
extern const f32 lbl_805E0FC8;
void TWindowSubComCard__sub_803DEECC(f32 *q, f32 depth);
}

extern "C" {

void get_player__20TWindowSubStatusDispFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void TWindowSubStatusDisp__sub_803DEE6C(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
        return;
    }
    setup_render__10TObjPlayerFv();
}

void get_player__20TWindowSubStatusDispFv(void) {
    TObjPlayer__sub_803E2248();
}

#define FIFO_803DEECC (*(volatile Pipe_803DEECC *)0xCC008000)
#define GXPosition3f32_803DEECC(x, y, z) (FIFO_803DEECC.f32v = (x), FIFO_803DEECC.f32v = (y), FIFO_803DEECC.f32v = (z))
#define GXColor1u32_803DEECC(c) (FIFO_803DEECC.u32v = (c))
#define GXTexCoord2f32_803DEECC(s, t) { f32 t_ = (t); f32 s_ = (s); FIFO_803DEECC.f32v = s_; FIFO_803DEECC.f32v = t_; }
#pragma push
#pragma scheduling off
#pragma peephole off
#pragma opt_common_subs off
#pragma optimize_for_size off
void TWindowSubComCard__sub_803DEECC(f32 *q, f32 depth) {
    u32 color = (*(u32 *)&lbl_805D77B0);
    f32 z = lbl_805E0FC8 / depth;
    f32 x0 = q[0] * z;
    f32 x1 = q[2] * z;
    f32 y0 = q[1] * z;
    f32 y1 = q[3] * z;
    GXBegin(0x80, 4, 4);
    GXPosition3f32_803DEECC(x0, y0, z);
    GXColor1u32_803DEECC(color);
    GXTexCoord2f32_803DEECC(q[4], q[5]);
    GXPosition3f32_803DEECC(x0, y1, z);
    GXColor1u32_803DEECC(color);
    GXTexCoord2f32_803DEECC(q[4], q[7]);
    GXPosition3f32_803DEECC(x1, y1, z);
    GXColor1u32_803DEECC(color);
    GXTexCoord2f32_803DEECC(q[6], q[7]);
    GXPosition3f32_803DEECC(x1, y0, z);
    GXColor1u32_803DEECC(color);
    GXTexCoord2f32_803DEECC(q[6], q[5]);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
void TWindowSubStatusDisp__sub_803DF160(s32 arg0, s32 arg1) {
    TObjPlayer__sub_803E1D90((void *) (arg0), (int) (0), (int) (0), (int) (0));
    lbl_805D77B0 = ((arg1 & 0xFFFFFF) << 8) | ((u32) (arg1 & 0xFF000000) >> 0x18U);
}
#pragma pop

}
