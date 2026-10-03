#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
typedef s32 M2C_UNK;
struct Vtx_803E2BCC {
    f32 x, y, z;
    u32 color;
};

extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_opaque_color_draw();
M2C_UNK TObjPlayer__sub_803E21DC();
void TObjBoss2Tunnel__sub_803E2D10(s32 arg0);
M2C_UNK GXBegin(int, int, u16);
extern const f32 lbl_805E1080;
void TObjBoss2Tunnel__sub_803E2BCC(Vtx_803E2BCC *p, s32 n);
}

extern "C" {

void reset_player_state__15TObjBoss2TunnelFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_player_state__15TObjBoss2TunnelFv(void) {
    TObjPlayer__sub_803E2248();
}

#pragma push
#pragma scheduling off
typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    s32 s32;
    f32 f32;
} WGPipe_803E2BCC;
#define GXWGFifo_803E2BCC (*(volatile WGPipe_803E2BCC *)0xCC008000)
void TObjBoss2Tunnel__sub_803E2BCC(Vtx_803E2BCC *p, s32 n) {
    s32 i;
    f32 one;
    GXBegin(0x98, 4, n);
    one = lbl_805E1080;
    for (i = 0; i != n; i++) {
        f32 x;
        f32 y;
        f32 w;
        u32 c;
        w = one / p->z;
        y = p->y * w;
        x = p->x * w;
        GXWGFifo_803E2BCC.f32 = x;
        GXWGFifo_803E2BCC.f32 = y;
        GXWGFifo_803E2BCC.f32 = w;
        c = p->color;
        GXWGFifo_803E2BCC.u32 = ((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24);
        p++;
    }
}
#pragma pop

void TObjBoss2Tunnel__sub_803E2D10(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E21DC();
        return;
    }
    setup_opaque_color_draw();
}

}
