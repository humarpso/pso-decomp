




#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))


#pragma scheduling off


struct RecoveredGlobal_803DF528_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};




typedef struct GXColor_803DF268 { u8 r, g, b, a; } GXColor_803DF268;

typedef s32 M2C_UNK;

#pragma scheduling off
typedef struct Vtx_803DF5E4 { f32 x, y, z; u32 color; } Vtx_803DF5E4;

typedef union WGPipe_803DF5E4 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803DF5E4;

extern "C" {
M2C_UNK load_camera_view_matrix();
M2C_UNK setup_opaque_color_draw();
M2C_UNK TObjPlayer__sub_803E21DC();
void TObjPlayer__sub_803DF768(s32 arg0);
extern M2C_UNK lbl_804FC748[];
extern s32 lbl_805D7794;
void submit_light0(s32 arg0, s32 arg1);
M2C_UNK GXLoadLightObjImm(void *, int);
extern M2C_UNK lbl_804FC748[];
extern RecoveredGlobal_803DF528_TObjLight__data_8058D528 TObjLight__data_8058D528;
void load_gx_light_slot(s32 arg0);
extern char lbl_804FC75C[];
extern char lbl_804FC768[];
void OSPanic(char *, s32, char *, ...);
void assert_light_id__9TObjLightFi(s32 arg0);
void reset_player_transform(void);
void TObjPlayer__sub_803DF768(s32 arg0);
void TObjPlayer__sub_803DF578(void *arg0, void *arg1, s32 arg2);
void GXSetChanAmbColor(s32 chan, GXColor_803DF268 color);
void set_light_ambient_color(f32 r, f32 g, f32 b);
void GXInitLightColor(void *, GXColor_803DF268);
void assert_light_id__9TObjLightFi(s32 arg0);
extern RecoveredGlobal_803DF528_TObjLight__data_8058D528 TObjLight__data_8058D528;
extern const f32 lbl_805E0FD4;
void set_gx_light_color(s32 idx, f32 r, f32 g, f32 b);
M2C_UNK GXInitLightPos(void *, f32, f32, f32);
M2C_UNK GXInitLightDir(void *, f32, f32, f32);
void assert_light_id__9TObjLightFi(s32 arg0);
extern RecoveredGlobal_803DF528_TObjLight__data_8058D528 TObjLight__data_8058D528;
extern const f32 lbl_805D7790;
void init_distant_light(s32 idx, f32 x, f32 y, f32 z);
void GXBegin(int, int, u16);
void draw_untextured_trail_strip(void *arg0, void *arg1);
}

extern "C" {

M2C_UNK TObjPlayer__sub_803E2248();





void assert_light_id__9TObjLightFi(s32 arg0) {
    if (arg0 < 0 || arg0 > 5) {
        OSPanic(lbl_804FC75C, 0x12, lbl_804FC768);
    }
}



void set_light_ambient_color(f32 r, f32 g, f32 b) {
    GXColor_803DF268 c;
    if (r >= 1.0f) {
        r = 1.0f;
    }
    if (g >= 1.0f) {
        g = 1.0f;
    }
    if (b >= 1.0f) {
        b = 1.0f;
    }
    c.r = (u8)(255.0f * r);
    c.g = (u8)(255.0f * g);
    c.b = (u8)(255.0f * b);
    c.a = 0xFF;
    GXSetChanAmbColor(4, c);
}

void submit_light0(s32 arg0, s32 arg1) {
    s32 var_r0;
    assert_light_id__9TObjLightFi((s32)(arg0));
    if (arg1 == 0) {
        var_r0 = lbl_805D7794 & ~M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    } else {
        var_r0 = lbl_805D7794 | M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    }
    lbl_805D7794 = var_r0;
}



typedef char RecoveredGlobal_803DF528_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_803DF528_TObjLight__data_8058D528) == 0x140 ? 1 : -1];


#pragma push
#pragma scheduling off
void set_gx_light_color(s32 idx, f32 r, f32 g, f32 b) {
    GXColor_803DF268 c;
    assert_light_id__9TObjLightFi(idx);
    c.r = (u8)(lbl_805E0FD4 * r);
    c.g = (u8)(lbl_805E0FD4 * g);
    c.b = (u8)(lbl_805E0FD4 * b);
    c.a = 0xFF;
    GXInitLightColor((u8 *)&TObjLight__data_8058D528 + (idx << 6), c);
}
#pragma pop



#pragma push
#pragma scheduling off
void init_distant_light(s32 idx, f32 x, f32 y, f32 z) {
    assert_light_id__9TObjLightFi(idx);
    if (idx == 0) {
        GXInitLightPos((u8 *)&TObjLight__data_8058D528 + (idx << 6), lbl_805D7790 * -x, lbl_805D7790 * -y, lbl_805D7790 * -z);
    } else {
        GXInitLightDir((u8 *)&TObjLight__data_8058D528 + (idx << 6), x, y, z);
    }
}
#pragma pop

void load_gx_light_slot(s32 arg0) {
    assert_light_id__9TObjLightFi((s32)(arg0));
    GXLoadLightObjImm((void *) ((u8 *)(&TObjLight__data_8058D528.value) + (arg0 << 6)), (int) (M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0)));
}



void TObjPlayer__sub_803DF578(void *arg0, void *arg1, s32 arg2) {
    TObjPlayer__sub_803DF768(arg2);
    draw_untextured_trail_strip((void *)(arg0), (void *)(arg1));
    reset_player_transform();
}

void reset_player_transform(void) {
    TObjPlayer__sub_803E2248();
}



#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803DF5E4(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803DF5E4 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803DF5E4 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803DF5E4 *)0xCC008000).f32 = z;
}
static inline void GXColor1u32_803DF5E4(u32 c) {
    (*(volatile WGPipe_803DF5E4 *)0xCC008000).u32 = c;
}
void draw_untextured_trail_strip(void *arg0, void *arg1) {
    s32 n;
    Vtx_803DF5E4 *v;
    u32 c;
    v = (Vtx_803DF5E4 *)arg0;
    n = (s32)arg1;
    GXBegin(0x98, 4, n);
    for (; n != 0; n--) {
        GXPosition3f32_803DF5E4(v->x, v->y, v->z);
        c = v->color;
        GXColor1u32_803DF5E4(((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24));
        v++;
    }
}
#pragma pop

void TObjPlayer__sub_803DF768(s32 arg0) {
    load_camera_view_matrix();
    if (arg0 != 0) {
        TObjPlayer__sub_803E21DC();
        return;
    }
    setup_opaque_color_draw();
}



}
