#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8036AF40_lbl_804F3610 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Col_8036B1AC { s8 r; u8 g, b, a; };

struct Obj_8036B1AC {
    u32 f0;
    u16 ids[4];
    Col_8036B1AC cols[12];
};

extern "C" {
extern M2C_UNK lbl_804F3610[];
void TBoss8Dragon__sub_8036AF40(M2C_UNK **arg0);
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D63F0;
extern s32 lbl_805D7000;
extern const f32 lbl_805E038C;
extern const f32 lbl_805E0398;
extern const f32 lbl_805E039C;
extern const f32 lbl_805E03A0;
void TBoss8Dragon__sub_8036B088(void);
void TLobby__sub_8036B1AC(Obj_8036B1AC *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void DVDConvertEntrynumToPath(f32 *q);
void TBoss8Dragon__sub_8036AF50(f32 *o, f32 *p, s32 a, s32 b);
}

extern "C" {

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1);
void fn_8036B18C(void);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804F3610[];

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = lbl_804F3610;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D7000;

typedef char RecoveredGlobal_8036AF40_lbl_804F3610_size[sizeof(RecoveredGlobal_8036AF40_lbl_804F3610) == 0x18 ? 1 : -1];
void TBoss8Dragon__sub_8036AF40(M2C_UNK **arg0) {
    *arg0 = &(*(RecoveredGlobal_8036AF40_lbl_804F3610 *)&lbl_804F3610).value;
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8036AF50(f32 *o, f32 *p, s32 a, s32 b) {
    f32 q[18];
    f32 s;
    f32 c;
    f32 s2;
    f32 c2;
    s = 128.0f * sin_table_lookup(a);
    c = 128.0f * cos_table_lookup(a);
    q[0] = (o[0] - 0.5f * (c * p[0])) + 0.5f * (s * p[1]);
    q[1] = (o[1] - 0.5f * (s * p[0])) - 0.5f * (c * p[1]);
    q[3] = c * p[0];
    q[4] = s * p[0];
    q[5] = -s * p[1];
    q[6] = c * p[1];
    q[2] = 0.5f;
    s2 = 128.0f * sin_table_lookup(b);
    c2 = 128.0f * cos_table_lookup(b);
    q[8] = (0.5f * s2 + (156.0f - 0.5f * c2)) / 256.0f;
    q[9] = ((156.0f - 0.5f * s2) - 0.5f * c2) / 256.0f;
    q[10] = c2 / 256.0f;
    q[11] = s2 / 256.0f;
    q[12] = -s2 / 256.0f;
    q[13] = c2 / 256.0f;
    DVDConvertEntrynumToPath(q);
}
#pragma pop

void TBoss8Dragon__sub_8036B088(void) {
    f32 o[2];
    f32 p[2];
    s32 ang;
    ang = (-lbl_805D7000 << 16) / 30;
    init_xyz_limits__10TObjPlayerFv();
    begin_effect_render__13TParticleCtrlFv();
    TCameraCtrl__sub_80069024();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(5, -1);
    o[0] = lbl_805E0398;
    o[1] = lbl_805E039C;
    p[1] = p[0] = lbl_805E03A0;
    TBoss8Dragon__sub_8036AF50((f32 *)(o), (f32 *)(p), (s32)(0), (s32)(ang));
    p[0] = lbl_805E03A0;
    p[1] = lbl_805E038C;
    TBoss8Dragon__sub_8036AF50((f32 *)(o), (f32 *)(p), (s32)(0), (s32)(ang));
    p[0] = lbl_805E03A0;
    p[1] = lbl_805E038C;
    TBoss8Dragon__sub_8036AF50((f32 *)(o), (f32 *)(p), (s32)(0x2000), (s32)(ang));
    p[0] = lbl_805E03A0;
    p[1] = lbl_805E038C;
    TBoss8Dragon__sub_8036AF50((f32 *)(o), (f32 *)(p), (s32)(-0x2000), (s32)(ang));
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}

void fn_8036B18C(void) {
    s32 temp_r3;

    temp_r3 = lbl_805D7000 + 1;
    lbl_805D7000 = temp_r3;
    if (temp_r3 >= 0x1E) {
        lbl_805D7000 = temp_r3 - 0x1E;
    }
}
void TLobby__sub_8036B1AC(Obj_8036B1AC *arg0) {
    s32 i;
    arg0->f0 = 0;
    for (i = 0; i < 4; i++) {
        arg0->ids[i] = 0xFF;
    }
    for (i = 0; i < 12; i++) {
        arg0->cols[i].r = -1;
        arg0->cols[i].g = 0;
        arg0->cols[i].b = 0;
        arg0->cols[i].a = 0;
    }
}

}
