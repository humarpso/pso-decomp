#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_803D6DDC {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D6E8C {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct RecoveredGlobal_803D662C_lbl_8058D4D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803D77C0_lbl_8047E3C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA500 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803D77C0_lbl_804FA50C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA51C {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803D78A8_lbl_8058CAB8 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct St_803D7784 { s32 a0, a4, a8, ac, b0, b4, b8, x1c; };

struct Vec_803D7504 { f32 x, y, z; };
struct Quat_803D7504 { f32 x, y, z, w; };

struct Vec_803D7CA4 { f32 x, y, z; };

struct Angles_803D7CA4 { s32 x, y, z; };

struct Quat_803D7CA4 { f32 x, y, z, w; };

struct V_803D6558 { f32 x, y, z; };

struct G_803D6688 { f32 f0, f4, pad8[2], f10, f14, f18, f1c, f20, f24; };

struct St_803D6BA4 { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6C1C { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6C94 { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6D0C { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; };

struct Vec_803D7D30 { f32 x, y, z; };

struct Vec4_803D7D30 { f32 w, x, y, z; };

struct Key_803D7D30 {
    u32 flags;
    u8 pad4[4];
    Vec_803D7D30 pos;
    Vec_803D7D30 rot;
    Vec_803D7D30 scl;
    u8 pad2c[8];
    f32 w;
};

struct Smp_803D7D30 {
    u8 pad[0x30];
    s32 (*f30)(void *);
    s32 (*f34)(void *);
    s32 (*f38)(void *);
    s32 (*f3C)(void *);
};

struct Stack_803D6F20 {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D6FC8 {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D7128 {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Proj_803D676C { f32 m[4][4]; s32 f40; f32 f44, f48, f4C, f50, f54; };

struct Disp_803D676C { u8 pad[6]; u16 h; };

extern "C" {

s32 sample_motion_vector_channel(s32 arg0);
s32 TObjPlayer__sub_803D6C1C(s32 arg0);
void select_motion_sampler(M2C_UNK *arg0, f32 farg0);
void select_motion_context(s32 arg0);
extern u8 *lbl_805D76BC;
void sample_camera_motion(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
M2C_UNK C_MTXPerspective(void *, f32, f32, f32, f32);
M2C_UNK GXSetProjection(void *, int);
f64 atan(f32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Proj_803D676C lbl_8058CA60;
extern RecoveredGlobal_803D662C_lbl_8058D4D0 lbl_8058D4D0;
extern G_803D6688 lbl_8058D4F8;
extern Disp_803D676C *lbl_805D7734;
extern const f32 lbl_805E0E18;
extern const f64 lbl_805E0E20;
extern const f64 lbl_805E0E28;
extern const f32 lbl_805E0E30;
extern const f32 lbl_805E0E34;
extern const f32 lbl_805E0E38;
void set_perspective_projection_from_fov(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {

}

extern "C" {

}

extern "C" {
void find_motion_key_interval(void *, s32, s32 count, f32 t, void *, void *, void *);
void interpolate_motion_vector_keys(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void find_motion_key_interval(void *, s32, s32 count, f32 t, void *, void *, void *);
extern const f32 lbl_805E0E50;
void interpolate_motion_vector_keys_xy(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void C_MTXLookAt(void *, void *, void *, void *);
extern u8 *lbl_805D7774;
void set_camera_look_at(u8 *arg0, u8 *arg1, u8 *arg2);
extern f32 lbl_805D76B0;
void bind_motion_blend_channels(u8 *arg0, f32 farg0);
extern RecoveredGlobal_803D662C_lbl_8058D4D0 lbl_8058D4D0;
extern const f32 lbl_805E0E00;
extern const f32 lbl_805E0E04;
void TCameraCtrl__sub_803D662C(f32 farg0, f32 farg1);
extern RecoveredGlobal_803D77C0_lbl_8047E3C8 lbl_8047E3C8;
extern RecoveredGlobal_803D77C0_lbl_804FA500 lbl_804FA500;
extern RecoveredGlobal_803D77C0_lbl_804FA50C lbl_804FA50C;
extern RecoveredGlobal_803D77C0_lbl_804FA51C lbl_804FA51C;
extern u8 *lbl_805D76BC;
extern s32 lbl_805D7808;
void select_motion_sampler(M2C_UNK *arg0, f32 farg0);
void bind_motion_context(s32 arg0, f32 farg0);
extern RecoveredGlobal_803D78A8_lbl_8058CAB8 lbl_8058CAB8;
extern u8 *lbl_805D76BC;
void select_motion_context(s32 arg0);
s32 translate_matrix(s32, f32, f32, f32);
s32 TCameraCtrl__sub_803D65C8(f32 x, f32 y, f32 z);
extern u8 *lbl_805D76BC;
void advance_motion_row(void);
u32 find_motion_key_partition_u32(u8 *base, u32 stride, u32 hi, u32 key);
u32 find_motion_key_partition_u16(u8 *base, u32 stride, u32 hi, u32 key);
extern u8 *lbl_805D76BC;
void set_motion_row_stride(s32 n);
void TObjPlayer__sub_803D98E4(void *);
void rotate_matrix_by_node_angles(void *, int);
void scale_current_matrix(void *);
void post_translate_matrix(void *);
void compose_motion_node_matrix(void *arg0);
s32 blend_motion_poses(void *, void *, void *, void *, void *);
void TObjPlayer__sub_803D98E4(void *);
void rotate_matrix_by_node_angles(void *, int);
void scale_current_matrix(void *);
void post_translate_matrix(void *);
void TObjPlayer__sub_803D76B4(void *arg0);
void TCameraCtrl__sub_803D65F8(u8 *);
void set_camera_look_at(u8* eye, u8* target, u8* up);
void TObjPlayer__sub_803D8CD4(s32);
extern u8 lbl_804FA4F0[];
void TCameraCtrl__sub_803D6558(f32 farg0, f32 farg1, f32 farg2);
extern G_803D6688 lbl_8058D4F8;
extern const f32 lbl_805E0E08;
void set_screen_size(f32 farg0, f32 farg1);
extern u8 *lbl_805D76BC;
s32 sample_motion_vector_channel(s32 arg0);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6C1C(s32 arg0);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6C94(s32 arg0);
void TObjPlayer__sub_803D6D7C(u32, u32, s32, f32);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6D0C(s32 arg0);
u32 find_motion_key_partition_u16(u8 *base, u32 stride, u32 hi, u32 key);
void find_motion_key_interval_u16(u8 *keys, u32 stride, u32 count, f32 t, u16 **k0, u16 **k1, f32 *frac);
void select_motion_sampler(M2C_UNK *arg0, f32 farg0);
s32 sample_motion_vector_channel(s32 arg0);
s32 TObjPlayer__sub_803D6C94(s32 arg0);
s32 TObjPlayer__sub_803D6D0C(s32 arg0);
s32 TObjPlayer__sub_803D7FD0(void);
s32 TObjPlayer__sub_803D7FD8(void);
extern u8 *lbl_805D76BC;
void bind_motion_channel_samplers(int arg0, f32 farg0);
void advance_motion_row(void);
extern u8 *lbl_805D76BC;
s32 sample_motion_node_transform(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void blend_quaternions_nlerp(void *a, void *b, void *out, f32 t);
void euler_zyx_to_quaternion(u8 *arg0, u8 *arg1);
void euler_yxz_to_quaternion(u8 *arg0, u8 *arg1);
extern const f32 lbl_805E0E88;
}

extern "C" {

s32 TObjPlayer__sub_803D7FD0(void);
s32 TObjPlayer__sub_803D7FD8(void);
void update_camera_state__11TCameraCtrlFv(f32 _w0, f32 _w1, f32 _w2);

void update_camera_state__11TCameraCtrlFv(f32 _w0, f32 _w1, f32 _w2) {
    TCameraCtrl__sub_803D65C8(_w0, _w1, _w2);
}

void TCameraCtrl__sub_803D6558(f32 farg0, f32 farg1, f32 farg2) {
    u8 sp14[0x14];
    V_803D6558 v;
    TCameraCtrl__sub_803D65F8((u8 *)(sp14));
    v.x = farg0;
    v.y = farg1;
    v.z = farg2;
    TObjPlayer__sub_803D8CD4(0);
    set_camera_look_at((u8*)(sp14), (u8*)((u8 *)&v), (u8*)(lbl_804FA4F0));
}

#pragma push
#pragma scheduling off
s32 TCameraCtrl__sub_803D65C8(f32 x, f32 y, f32 z) {
    return translate_matrix(0, -x, -y, -z);
}
#pragma pop

void TCameraCtrl__sub_803D65F8(u8 * _w0) {

}

#pragma push
#pragma scheduling off
void set_camera_look_at(u8* eye, u8* target, u8* up) {
    C_MTXLookAt(lbl_805D7774, eye, up, target);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
typedef char RecoveredGlobal_803D662C_lbl_8058D4D0_size[sizeof(RecoveredGlobal_803D662C_lbl_8058D4D0) == 0x28 ? 1 : -1];
void TCameraCtrl__sub_803D662C(f32 farg0, f32 farg1) {
    f32 var_f1;
    f32 var_f2;
    var_f1 = farg0;
    var_f2 = farg1;
    if (var_f1 > lbl_805E0E00) {
        var_f1 = lbl_805E0E00;
    }
    if (var_f1 < lbl_805E0E04) {
        var_f1 = lbl_805E0E04;
    }
    if (var_f2 > lbl_805E0E00) {
        var_f2 = lbl_805E0E00;
    }
    if (var_f2 < lbl_805E0E04) {
        var_f2 = lbl_805E0E04;
    }
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 4) = (f32) -var_f1;
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 0) = (f32) -var_f2;
}
#pragma pop

void set_screen_size(f32 farg0, f32 farg1) {
    f32 a, b;
    lbl_8058D4F8.f1c = farg0;
    lbl_8058D4F8.f20 = farg1;
    lbl_8058D4F8.f24 = farg1 / farg0;
    a = (f32)(f64)farg0 * lbl_8058D4F8.f18;
    lbl_8058D4F8.f0 = a;
    b = -((f32)(f64)farg1 * lbl_8058D4F8.f18);
    lbl_8058D4F8.f4 = b;
    lbl_8058D4F8.f10 = lbl_805E0E08 / a;
    lbl_8058D4F8.f14 = lbl_805E0E08 / (f32)(f64)b;
}

#define G_803D6BA4 ((St_803D6BA4 *)lbl_805D76BC)

#pragma push
#pragma use_lmw_stmw off

void set_perspective_projection_from_fov(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    s32 h;
    f32 c;
    f32 r;
    f32 x;
    f32 sc;
    f32 b;
    f32 a;
    f32 one;
    h = (s32)((f32)arg0 * lbl_805E0E18) / 2;
    c = cos_table_lookup(h);
    r = atan((sin_table_lookup(h) / c) / farg0);
    C_MTXPerspective(&lbl_8058CA60, lbl_805E0E20 * ((s32)(lbl_805E0E28 * r) * 2), farg0, farg1, farg2);
    GXSetProjection(&lbl_8058CA60, 0);
    lbl_8058CA60.f40 = 0;
    lbl_8058CA60.f44 = farg1;
    lbl_8058CA60.f48 = farg2;
    lbl_8058CA60.f4C = farg0;
    sc = lbl_805E0E30 * ((f32)lbl_805D7734->h * lbl_8058CA60.m[1][1]);
    lbl_8058CA60.f50 = sc;
    one = lbl_805E0E34;
    lbl_8058CA60.f54 = one / sc;
    lbl_8058D4F8.f18 = sc;
    x = farg0 / lbl_805E0E38;
    lbl_8058D4F8.f1c = x;
    lbl_8058D4F8.f20 = one;
    lbl_8058D4F8.f24 = one / farg0;
    a = x * (f32)(f64)lbl_8058D4F8.f18;
    lbl_8058D4F8.f0 = a;
    b = -(one * (f32)(f64)lbl_8058D4F8.f18);
    lbl_8058D4F8.f4 = b;
    lbl_8058D4F8.f10 = one / a;
    lbl_8058D4F8.f14 = one / (f32)(f64)b;
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 0) = farg2;
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 4) = farg1;
}

void sample_camera_motion(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    s32 temp_r31;
    s32 *temp_r30;
    s32 *temp_r29;
    u8 *temp_r27;
    u8 *temp_r26;
    temp_r27 = (u8 *)(M2C_FIELD(arg2, u8 **, 0));
    temp_r26 = (u8 *)(M2C_FIELD(arg2, u8 **, 4));
    temp_r30 = (s32 *)(M2C_FIELD(arg2, s32 **, 8));
    temp_r29 = (s32 *)(M2C_FIELD(arg2, s32 **, 0xC));
    select_motion_context((int) (0));
    select_motion_sampler((M2C_UNK *) (arg1), (f32) (farg0));
    temp_r31 = M2C_FIELD(lbl_805D76BC, s32 *, 0x20);
    if ((u32) (temp_r31 & 1) != 0) {
        if (sample_motion_vector_channel((int) (temp_r27)) == 0) {
            M2C_FIELD(temp_r27, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
            M2C_FIELD(temp_r27, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
            M2C_FIELD(temp_r27, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        }
    } else {
        M2C_FIELD(temp_r27, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(temp_r27, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(temp_r27, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    }
    if ((u32) (temp_r31 & 2) != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) + 1);
    }
    if ((u32) (temp_r31 & 4) != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) + 1);
    }
    if ((u32) (temp_r31 & 0x40) != 0) {
        if (sample_motion_vector_channel((int) (temp_r26)) != 0) {
            M2C_FIELD(temp_r26, f32 *, 0) = (f32) (M2C_FIELD(temp_r26, f32 *, 0) - M2C_FIELD(temp_r27, f32 *, 0));
            M2C_FIELD(temp_r26, f32 *, 4) = (f32) (M2C_FIELD(temp_r26, f32 *, 4) - M2C_FIELD(temp_r27, f32 *, 4));
            M2C_FIELD(temp_r26, f32 *, 8) = (f32) (M2C_FIELD(temp_r26, f32 *, 8) - M2C_FIELD(temp_r27, f32 *, 8));
        } else {
            M2C_FIELD(temp_r26, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(temp_r26, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(temp_r26, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        }
    } else if ((u32) (temp_r31 & 8) != 0) {
        if (sample_motion_vector_channel((int) (temp_r26)) == 0) {
            M2C_FIELD(temp_r26, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(temp_r26, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(temp_r26, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        }
    } else {
        M2C_FIELD(temp_r26, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(temp_r26, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(temp_r26, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    }
    if ((u32) (temp_r31 & 0x10) != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) + 1);
    }
    if ((u32) (temp_r31 & 0x20) != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = (s32) (M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) + 1);
    }
    if (((u32) (temp_r31 & 0x80) != 0) && (TObjPlayer__sub_803D6C1C((int) (temp_r30)) == 0)) {
        M2C_FIELD(temp_r30, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0x18);
    }
    if ((u32) (temp_r31 & 0x100) != 0) {
        if (TObjPlayer__sub_803D6C1C((int) (temp_r29)) == 0) {
            M2C_FIELD(temp_r29, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0x1C);
        }
    } else {
        M2C_FIELD(temp_r29, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0x1C);
    }
}
#pragma pop

s32 sample_motion_vector_channel(s32 arg0) {
    if (G_803D6BA4->keys[G_803D6BA4->idx] != 0) {
        G_803D6BA4->fn24(G_803D6BA4->keys[G_803D6BA4->idx], G_803D6BA4->vals[G_803D6BA4->idx], arg0, G_803D6BA4->t);
        G_803D6BA4->idx = G_803D6BA4->idx + 1;
        return 1;
    }
    G_803D6BA4->idx = G_803D6BA4->idx + 1;
    return 0;
}

#define G_803D6C1C ((St_803D6C1C *)lbl_805D76BC)
s32 TObjPlayer__sub_803D6C1C(s32 arg0) {
    if (G_803D6C1C->keys[G_803D6C1C->idx] != 0) {
        G_803D6C1C->fn2c(G_803D6C1C->keys[G_803D6C1C->idx], G_803D6C1C->vals[G_803D6C1C->idx], arg0, G_803D6C1C->t);
        G_803D6C1C->idx = G_803D6C1C->idx + 1;
        return 1;
    }
    G_803D6C1C->idx = G_803D6C1C->idx + 1;
    return 0;
}

#define G_803D6C94 ((St_803D6C94 *)lbl_805D76BC)
s32 TObjPlayer__sub_803D6C94(s32 arg0) {
    if (G_803D6C94->keys[G_803D6C94->idx] != 0) {
        G_803D6C94->fn28(G_803D6C94->keys[G_803D6C94->idx], G_803D6C94->vals[G_803D6C94->idx], arg0, G_803D6C94->t);
        G_803D6C94->idx = G_803D6C94->idx + 1;
        return 1;
    }
    G_803D6C94->idx = G_803D6C94->idx + 1;
    return 0;
}

#define G_803D6D0C ((St_803D6D0C *)lbl_805D76BC)
s32 TObjPlayer__sub_803D6D0C(s32 arg0) {
    if (G_803D6D0C->keys[G_803D6D0C->idx] != 0) {
        TObjPlayer__sub_803D6D7C(G_803D6D0C->keys[G_803D6D0C->idx], G_803D6D0C->vals[G_803D6D0C->idx], arg0, G_803D6D0C->t);
        G_803D6D0C->idx = G_803D6D0C->idx + 1;
        return 1;
    }
    G_803D6D0C->idx = G_803D6D0C->idx + 1;
    return 0;
}

#pragma push
#pragma scheduling off
void interpolate_motion_vector_keys(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6DDC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6DDC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6DDC, sp10) == 0x8) ? 1 : -1];
    Stack_803D6DDC stack;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    find_motion_key_interval(arg0, 0x10, arg1, farg0, &stack.spC, &stack.sp8, &stack.sp10);
    temp_f2 = M2C_FIELD(stack.spC, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 4) - temp_f2)));
    temp_f2_2 = M2C_FIELD(stack.spC, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 8) - temp_f2_2)));
    temp_f2_3 = M2C_FIELD(stack.spC, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f2_3 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 0xC) - temp_f2_3)));
}
#pragma pop

#pragma push
#pragma scheduling off
void interpolate_motion_vector_keys_xy(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6E8C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6E8C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6E8C, sp10) == 0x8) ? 1 : -1];
    Stack_803D6E8C stack;
    f32 temp_f2;
    f32 temp_f2_2;
    find_motion_key_interval(arg0, 0x10, arg1, farg0, &stack.spC, &stack.sp8, &stack.sp10);
    temp_f2 = M2C_FIELD(stack.spC, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 4) - temp_f2)));
    temp_f2_2 = M2C_FIELD(stack.spC, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 8) - temp_f2_2)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) lbl_805E0E50;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D6F20(u8 *arg0, s32 arg1, s32 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6F20, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6F20, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6F20, sp10) == 0x8) ? 1 : -1];
    Stack_803D6F20 stack;

    s32 temp_r5;

    find_motion_key_interval(arg0, 8, arg1, farg0, &stack.spC, &stack.sp8, &stack.sp10);
    temp_r5 = M2C_FIELD(stack.spC, s32 *, 4);
    *arg2 = (s32) ((f32) temp_r5 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s32 *, 4) - temp_r5)));
}
#pragma pop

#pragma push
#pragma scheduling off
void sample_motion_angle_keys(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6FC8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6FC8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6FC8, sp10) == 0x8) ? 1 : -1];
    Stack_803D6FC8 stack;

    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;

    find_motion_key_interval(arg0, 0x10, arg1, farg0, &stack.spC, &stack.sp8, &stack.sp10);
    temp_r5 = M2C_FIELD(stack.spC, s32 *, 4);
    M2C_FIELD(arg2, s32 *, 0) = (s32) ((f32) temp_r5 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s32 *, 4) - temp_r5)));
    temp_r5_2 = M2C_FIELD(stack.spC, s32 *, 8);
    M2C_FIELD(arg2, s32 *, 4) = (s32) ((f32) temp_r5_2 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s32 *, 8) - temp_r5_2)));
    temp_r5_3 = M2C_FIELD(stack.spC, s32 *, 0xC);
    M2C_FIELD(arg2, s32 *, 8) = (s32) ((f32) temp_r5_3 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s32 *, 0xC) - temp_r5_3)));
}
#pragma pop

#pragma push
#pragma scheduling off
void sample_motion_angle_keys_s16(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D7128, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D7128, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D7128, sp10) == 0x8) ? 1 : -1];
    Stack_803D7128 stack;

    s16 temp_r5;
    s16 temp_r5_2;
    s16 temp_r5_3;

    find_motion_key_interval_u16(arg0, 8, arg1, farg0, (u16 **)&stack.spC, (u16 **)&stack.sp8, &stack.sp10);
    temp_r5 = M2C_FIELD(stack.spC, s16 *, 2);
    M2C_FIELD(arg2, s32 *, 0) = (s32) ((f32) temp_r5 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s16 *, 2) - temp_r5)));
    temp_r5_2 = M2C_FIELD(stack.spC, s16 *, 4);
    M2C_FIELD(arg2, s32 *, 4) = (s32) ((f32) temp_r5_2 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s16 *, 4) - temp_r5_2)));
    temp_r5_3 = M2C_FIELD(stack.spC, s16 *, 6);
    M2C_FIELD(arg2, s32 *, 8) = (s32) ((f32) temp_r5_3 + (stack.sp10 * (f32) (s16) (M2C_FIELD(stack.sp8, s16 *, 6) - temp_r5_3)));
}
#pragma pop

#pragma push
#pragma scheduling off
void bind_motion_blend_channels(u8 *arg0, f32 farg0) {
    select_motion_context((s32)((int) (1)));
    bind_motion_channel_samplers((int)((int) (M2C_FIELD(arg0, s32 *, 4))), (f32) (M2C_FIELD(arg0, f32 *, 0xC)));
    select_motion_context((s32)((int) (0)));
    bind_motion_channel_samplers((int)((int) (M2C_FIELD(arg0, s32 *, 0))), (f32) (M2C_FIELD(arg0, f32 *, 8)));
    lbl_805D76B0 = farg0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#define pos ((Vec_803D7504 *)arg1)
#define scl ((Vec_803D7504 *)arg3)
s32 blend_motion_poses(void *node, void *arg1, void *unused, void *arg3, void *rot) {
    Vec_803D7504 pb;
    Vec_803D7504 sb;
    Vec_803D7504 rb;
    Quat_803D7504 qb;
    Vec_803D7504 pa;
    Vec_803D7504 sa;
    Vec_803D7504 ra;
    Quat_803D7504 qa;
    f32 u;
    f32 t;
    s32 res_a;
    s32 res_b;

    t = lbl_805D76B0;
    u = lbl_805E0E88 - t;
    select_motion_context(1);
    res_a = sample_motion_node_transform(node, &pa, &ra, &sa, &qa);
    select_motion_context(0);
    res_b = sample_motion_node_transform(node, &pb, &rb, &sb, &qb);
    if (res_b != 2) {
        if (res_b == 0) {
            euler_zyx_to_quaternion((u8 *)&rb, (u8 *)&qb);
        } else {
            euler_yxz_to_quaternion((u8 *)&rb, (u8 *)&qb);
        }
    }
    if (res_a != 2) {
        if (res_a == 0) {
            euler_zyx_to_quaternion((u8 *)&ra, (u8 *)&qa);
        } else {
            euler_yxz_to_quaternion((u8 *)&ra, (u8 *)&qa);
        }
    }
    pos->x = pb.x * u + pa.x * t;
    pos->y = pb.y * u + pa.y * t;
    pos->z = pb.z * u + pa.z * t;
    scl->x = sb.x * u + sa.x * t;
    scl->y = sb.y * u + sa.y * t;
    scl->z = sb.z * u + sa.z * t;
    ((void (*)(void *, void *, f32, void *))blend_quaternions_nlerp)(&qb, &qa, t, rot);
    return 2;
}
#pragma pop
#undef pos
#undef scl

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
typedef char RecoveredGlobal_803D77C0_lbl_8047E3C8_size[sizeof(RecoveredGlobal_803D77C0_lbl_8047E3C8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA500_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA500) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA50C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA50C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA51C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA51C) == 0x24 ? 1 : -1];

#pragma push
#pragma scheduling off
#pragma opt_common_subs off
#pragma peephole off
void TObjPlayer__sub_803D76B4(void *arg0) {
    struct Vec_803D7CA4 trans;
    struct Vec_803D7CA4 scale;
    struct Angles_803D7CA4 rot;
    struct Quat_803D7CA4 quat;
    s32 kind;
    kind = blend_motion_poses(arg0, &trans, &rot, &scale, &quat);
    post_translate_matrix(&trans);
    switch (kind) {
    case 0:
        rotate_matrix_by_node_angles(&rot, 0);
        break;
    case 1:
        rotate_matrix_by_node_angles(&rot, 1);
        break;
    default:
        TObjPlayer__sub_803D98E4(&quat);
        break;
    }
    scale_current_matrix(&scale);
}
#pragma pop

void set_motion_row_stride(s32 n) {
    s32 w = n * 4;
    s32 a;
    *(s32 *)(lbl_805D76BC + 0x4) = w;
    *(s32 *)(lbl_805D76BC + 0x8) = w + w;
    a = *(s32 *)(lbl_805D76BC + 0x0);
    *(s32 *)(lbl_805D76BC + 0xc) = a;
    *(s32 *)(lbl_805D76BC + 0x10) = a + *(s32 *)(lbl_805D76BC + 0x4);
    *(s32 *)(lbl_805D76BC + 0x1c) = 0;
}

#pragma push
#pragma scheduling off
void advance_motion_row(void) {
    s32 v = ((St_803D7784 *)lbl_805D76BC)->a0;
    v += ((St_803D7784 *)lbl_805D76BC)->a8;
    ((St_803D7784 *)lbl_805D76BC)->a0 = v;
    ((St_803D7784 *)lbl_805D76BC)->ac = v;
    ((St_803D7784 *)lbl_805D76BC)->b0 = v + ((St_803D7784 *)lbl_805D76BC)->a4;
    ((St_803D7784 *)lbl_805D76BC)->x1c = 0;
}
#pragma pop

void select_motion_sampler(M2C_UNK *arg0, f32 farg0) {
    M2C_UNK *var_r3;
    s32 temp_r31;
    s32 temp_r4;
    var_r3 = (M2C_UNK *)(arg0);
    if (var_r3 == NULL) {
        var_r3 = (M2C_UNK *)(&lbl_8047E3C8.value);
    }
    temp_r31 = (s32) (M2C_FIELD(var_r3, u16 *, 0xA) & 0xC0) >> 6;
    M2C_FIELD(lbl_805D76BC, s32 *, 0) = (s32) M2C_FIELD(var_r3, s32 *, 0);
    M2C_FIELD(lbl_805D76BC, s32 *, 0x18) = (s32) M2C_FIELD(var_r3, s32 *, 4);
    M2C_FIELD(lbl_805D76BC, s32 *, 0x20) = (s32) M2C_FIELD(var_r3, u16 *, 8);
    M2C_FIELD(lbl_805D76BC, f32 *, 0x14) = farg0;
    M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = 0;
    set_motion_row_stride((s32)((int) (M2C_FIELD(var_r3, u16 *, 0xA) & 0xFFFFFF3F)));
    temp_r4 = temp_r31 * 4;
    M2C_FIELD(lbl_805D76BC, s32 *, 0x24) = (s32) M2C_FIELD(&lbl_804FA500.value, M2C_UNK *, temp_r4);
    if ((s32) lbl_805D7808 != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(&lbl_804FA50C.value, s32 *, 0xC);
    } else {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(&lbl_804FA50C.value, M2C_UNK *, temp_r4);
    }
    M2C_FIELD(lbl_805D76BC, s32 *, 0x2C) = (s32) lbl_804FA51C.value;
}
#pragma pop

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803D78A8_lbl_8058CAB8_size[sizeof(RecoveredGlobal_803D78A8_lbl_8058CAB8) == 0x80 ? 1 : -1];
void select_motion_context(s32 arg0) {
    lbl_805D76BC = (u8 *)(&lbl_8058CAB8.value) + (arg0 << 6);
}
#pragma pop

u32 find_motion_key_partition_u32(u8 *base, u32 stride, u32 hi, u32 key) {
    u32 lo = 0;
    while (hi - lo > 1) {
        u32 mid = (lo + hi) >> 1;
        if (key >= *(u32 *)(base + mid * stride)) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    return lo;
}

u32 find_motion_key_partition_u16(u8 *base, u32 stride, u32 hi, u32 key) {
    u32 lo = 0;
    while (hi - lo > 1) {
        u32 mid = (lo + hi) >> 1;
        if (key >= *(u16 *)(base + mid * stride)) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    return lo;
}

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw off
void find_motion_key_interval_u16(u8 *keys, u32 stride, u32 count, f32 t, u16 **k0, u16 **k1, f32 *frac) {
    u32 i;
    u16 *a;
    u16 *b;
    s32 d;
    i = find_motion_key_partition_u16(keys, stride, count, (u32) t);
    a = (u16 *) (keys + i * stride);
    if (i < count - 1) {
        b = (u16 *) (keys + (i + 1) * stride);
    } else {
        b = (u16 *) keys;
    }
    *k0 = a;
    *k1 = b;
    d = *b - *a;
    if (d > 0) {
        *frac = (t - *a) / d;
    } else {
        *frac = t - *a;
    }
}
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw off
void find_motion_key_interval(void *keys, s32 stride, s32 count, f32 t, void *k0, void *k1, void *frac) {
    u32 i;
    u32 *a;
    u32 *b;
    s32 d;

    i = find_motion_key_partition_u32((u8 *) keys, stride, count, (u32) t);
    a = (u32 *) ((u8 *) keys + i * stride);
    if (i < (u32) (count - 1)) {
        b = (u32 *) ((u8 *) keys + (i + 1) * stride);
    } else {
        b = (u32 *) keys;
    }
    *(u32 **) k0 = a;
    *(u32 **) k1 = b;
    d = *b - *a;
    if (d > 0) {
        *(f32 *) frac = (t - *a) / d;
    } else {
        *(f32 *) frac = t - *a;
    }
}
#pragma pop

#pragma push
#pragma scheduling off
void bind_motion_context(s32 arg0, f32 farg0) {
    select_motion_context((s32)((int) (0)));
    bind_motion_channel_samplers((int)((int)((void *) (arg0))), (f32) (farg0));
}
#pragma pop

void bind_motion_channel_samplers(int arg0, f32 farg0) {
    s32 temp_r5;
    select_motion_sampler((M2C_UNK *)arg0, farg0);
    temp_r5 = M2C_FIELD(lbl_805D76BC, s32 *, 0x20);
    if ((u32) (temp_r5 & 1) != 0) {
        M2C_FIELD(lbl_805D76BC, void **, 0x30) = (void *)sample_motion_vector_channel;
    } else {
        M2C_FIELD(lbl_805D76BC, void **, 0x30) = (void *)TObjPlayer__sub_803D7FD0;
    }
    if ((u32) (temp_r5 & 2) != 0) {
        M2C_FIELD(lbl_805D76BC, void **, 0x34) = (void *)TObjPlayer__sub_803D6C94;
        M2C_FIELD(lbl_805D76BC, void **, 0x3C) = NULL;
    } else if ((u32) (temp_r5 & 0x2000) != 0) {
        M2C_FIELD(lbl_805D76BC, void **, 0x34) = NULL;
        M2C_FIELD(lbl_805D76BC, void **, 0x3C) = (void *)TObjPlayer__sub_803D6D0C;
    } else {
        M2C_FIELD(lbl_805D76BC, void **, 0x34) = (void *)TObjPlayer__sub_803D7FD8;
        M2C_FIELD(lbl_805D76BC, void **, 0x3C) = NULL;
    }
    if ((u32) (temp_r5 & 4) != 0) {
        M2C_FIELD(lbl_805D76BC, void **, 0x38) = (void *)sample_motion_vector_channel;
        return;
    }
    M2C_FIELD(lbl_805D76BC, void **, 0x38) = (void *)TObjPlayer__sub_803D7FD0;
}

void compose_motion_node_matrix(void *arg0) {
    struct Vec_803D7CA4 trans;
    struct Vec_803D7CA4 scale;
    struct Angles_803D7CA4 rot;
    struct Quat_803D7CA4 quat;
    s32 kind;
    kind = sample_motion_node_transform((void *)(arg0), (void *)(&trans), (void *)(&rot), (void *)(&scale), (void *)(&quat));
    post_translate_matrix(&trans);
    switch (kind) {
    case 0:
        rotate_matrix_by_node_angles(&rot, 0);
        break;
    case 1:
        rotate_matrix_by_node_angles(&rot, 1);
        break;
    default:
        TObjPlayer__sub_803D98E4(&quat);
        break;
    }
    scale_current_matrix(&scale);
}

#define G_803D7D30 ((Smp_803D7D30 *)lbl_805D76BC)
#pragma push
#pragma optimize_for_size off
#pragma optimization_level 3
#pragma peephole off
#pragma scheduling off
#pragma use_lmw_stmw off
s32 sample_motion_node_transform(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
#define kK ((Key_803D7D30 *)arg0)
#define pP ((Vec_803D7D30 *)arg1)
#define rR ((Vec_803D7D30 *)arg2)
#define sS ((Vec_803D7D30 *)arg3)
#define qQ ((Vec4_803D7D30 *)arg4)
    s32 r;
    if (!(kK->flags & 0x40)) {
        if (G_803D7D30->f30(pP) == 0) {
            pP->x = kK->pos.x;
            pP->y = kK->pos.y;
            pP->z = kK->pos.z;
        }
        if (G_803D7D30->f34 != NULL) {
            if (G_803D7D30->f34(rR) != 0) {
                r = (kK->flags & 0x20) ? 1 : 0;
            } else if (kK->flags & 0x400) {
                qQ->w = kK->w;
                qQ->x = kK->rot.x;
                qQ->y = kK->rot.y;
                qQ->z = kK->rot.z;
                r = 2;
            } else {
                ((u32 *)rR)[0] = ((u32 *)&kK->rot)[0];
            ((u32 *)rR)[1] = ((u32 *)&kK->rot)[1];
            ((u32 *)rR)[2] = ((u32 *)&kK->rot)[2];
                r = (kK->flags & 0x20) ? 1 : 0;
            }
        } else if (G_803D7D30->f3C(qQ) != 0) {
            r = 2;
        } else if (kK->flags & 0x400) {
            qQ->w = kK->w;
            qQ->x = kK->rot.x;
            qQ->y = kK->rot.y;
            qQ->z = kK->rot.z;
            r = 2;
        } else {
            ((u32 *)rR)[0] = ((u32 *)&kK->rot)[0];
            ((u32 *)rR)[1] = ((u32 *)&kK->rot)[1];
            ((u32 *)rR)[2] = ((u32 *)&kK->rot)[2];
            r = (kK->flags & 0x20) ? 1 : 0;
        }
        if (G_803D7D30->f38(sS) == 0) {
            sS->x = kK->scl.x;
            sS->y = kK->scl.y;
            sS->z = kK->scl.z;
        }
        advance_motion_row();
    } else {
        pP->x = kK->pos.x;
        pP->y = kK->pos.y;
        pP->z = kK->pos.z;
        sS->x = kK->scl.x;
        sS->y = kK->scl.y;
        sS->z = kK->scl.z;
        if (kK->flags & 0x400) {
            qQ->w = kK->w;
            qQ->x = kK->rot.x;
            qQ->y = kK->rot.y;
            qQ->z = kK->rot.z;
            r = 2;
        } else {
            ((u32 *)rR)[0] = ((u32 *)&kK->rot)[0];
            ((u32 *)rR)[1] = ((u32 *)&kK->rot)[1];
            ((u32 *)rR)[2] = ((u32 *)&kK->rot)[2];
            r = (kK->flags & 0x20) ? 1 : 0;
        }
    }
    return r;
#undef kK
#undef pP
#undef rR
#undef sS
#undef qQ
}
#pragma pop

s32 TObjPlayer__sub_803D7FD0(void) {
    return 0;
}

s32 TObjPlayer__sub_803D7FD8(void) {
    return 0;
}

}
