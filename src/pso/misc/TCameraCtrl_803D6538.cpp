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

struct Vec_803D7CA4 { f32 x, y, z; };

struct Angles_803D7CA4 { s32 x, y, z; };

struct Quat_803D7CA4 { f32 x, y, z, w; };

struct V_803D6558 { f32 x, y, z; };

struct G_803D6688 { f32 f0, f4, pad8[2], f10, f14, f18, f1c, f20, f24; };

struct St_803D6BA4 { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6C1C { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6C94 { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; u8 pad20[4]; void (*fn24)(u32, u32, s32, f32); void (*fn28)(u32, u32, s32, f32); void (*fn2c)(u32, u32, s32, f32); };

struct St_803D6D0C { u8 pad0[0xC]; u32 *keys; u32 *vals; f32 t; u8 pad18[4]; s32 idx; };

extern "C" {
void TObjPlayer__sub_803D7A54(void *, s32, s32, void *, void *, void *, f32);
void TObjPlayer__sub_803D6DDC(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void TObjPlayer__sub_803D7A54(void *, s32, s32, void *, void *, void *, f32);
extern const f32 lbl_805E0E50;
void TObjPlayer__sub_803D6E8C(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void MTXLookAt(void *, void *, void *, void *);
extern u8 *lbl_805D7774;
void set_camera_look_at(u8 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK TObjPlayer__sub_803D7BB0(int, f32);
extern f32 lbl_805D76B0;
void TObjPlayer__sub_803D749C(u8 *arg0, f32 farg0);
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
void TObjPlayer__sub_803D77C0(M2C_UNK *arg0, f32 farg0);
M2C_UNK TObjPlayer__sub_803D7BB0(int, f32);
void TObjPlayer__sub_803D7B68(s32 arg0, f32 farg0);
extern RecoveredGlobal_803D78A8_lbl_8058CAB8 lbl_8058CAB8;
extern u8 *lbl_805D76BC;
void TBoss8Dragon__sub_803D78A8(s32 arg0);
s32 TObjPlayer__sub_803D9624(s32, f32, f32, f32);
s32 TCameraCtrl__sub_803D65C8(f32 x, f32 y, f32 z);
extern u8 *lbl_805D76BC;
void TObjPlayer__sub_803D7784(void);
u32 TObjPlayer__sub_803D78C0(u8 *base, u32 stride, u32 hi, u32 key);
u32 TObjPlayer__sub_803D7900(u8 *base, u32 stride, u32 hi, u32 key);
extern u8 *lbl_805D76BC;
void TObjPlayer__sub_803D7740(s32 n);
s32 TObjPlayer__sub_803D7D30(void *, void *, void *, void *, void *);
void TObjPlayer__sub_803D98E4(void *);
void TObjPlayer__sub_803D99F8(void *, int);
void TBoss7Tentacle__sub_803D9BA0(void *);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_803D7CA4(void *arg0);
s32 TBoss8Dragon__sub_803D7504(void *, void *, void *, void *, void *);
void TObjPlayer__sub_803D98E4(void *);
void TObjPlayer__sub_803D99F8(void *, int);
void TBoss7Tentacle__sub_803D9BA0(void *);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_803D76B4(void *arg0);
void TCameraCtrl__sub_803D65F8(u8 *);
void set_camera_look_at(u8* eye, u8* target, u8* up);
void TObjPlayer__sub_803D8CD4(s32);
extern u8 lbl_804FA4F0[];
void TCameraCtrl__sub_803D6558(f32 farg0, f32 farg1, f32 farg2);
extern G_803D6688 lbl_8058D4F8;
extern const f32 lbl_805E0E08;
void TCameraCtrl__sub_803D6688(f32 farg0, f32 farg1);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6BA4(s32 arg0);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6C1C(s32 arg0);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6C94(s32 arg0);
void TObjPlayer__sub_803D6D7C(u32, u32, s32, f32);
extern u8 *lbl_805D76BC;
s32 TObjPlayer__sub_803D6D0C(s32 arg0);
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
    return TObjPlayer__sub_803D9624(0, -x, -y, -z);
}
#pragma pop

void TCameraCtrl__sub_803D65F8(u8 * _w0) {

}

#pragma push
#pragma scheduling off
void set_camera_look_at(u8* eye, u8* target, u8* up) {
    MTXLookAt(lbl_805D7774, eye, up, target);
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

void TCameraCtrl__sub_803D6688(f32 farg0, f32 farg1) {
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
s32 TObjPlayer__sub_803D6BA4(s32 arg0) {
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
void TObjPlayer__sub_803D6DDC(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6DDC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6DDC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6DDC, sp10) == 0x8) ? 1 : -1];
    Stack_803D6DDC stack;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    TObjPlayer__sub_803D7A54(arg0, 0x10, arg1, &stack.spC, &stack.sp8, &stack.sp10, farg0);
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
void TObjPlayer__sub_803D6E8C(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6E8C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6E8C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6E8C, sp10) == 0x8) ? 1 : -1];
    Stack_803D6E8C stack;
    f32 temp_f2;
    f32 temp_f2_2;
    TObjPlayer__sub_803D7A54(arg0, 0x10, arg1, &stack.spC, &stack.sp8, &stack.sp10, farg0);
    temp_f2 = M2C_FIELD(stack.spC, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 4) - temp_f2)));
    temp_f2_2 = M2C_FIELD(stack.spC, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 8) - temp_f2_2)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) lbl_805E0E50;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D749C(u8 *arg0, f32 farg0) {
    TBoss8Dragon__sub_803D78A8((s32)((int) (1)));
    TObjPlayer__sub_803D7BB0((int) (M2C_FIELD(arg0, s32 *, 4)), (f32) (M2C_FIELD(arg0, f32 *, 0xC)));
    TBoss8Dragon__sub_803D78A8((s32)((int) (0)));
    TObjPlayer__sub_803D7BB0((int) (M2C_FIELD(arg0, s32 *, 0)), (f32) (M2C_FIELD(arg0, f32 *, 8)));
    lbl_805D76B0 = farg0;
}
#pragma pop

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
    kind = TBoss8Dragon__sub_803D7504(arg0, &trans, &rot, &scale, &quat);
    TOHangerMachine01__sub_803D9C00(&trans);
    switch (kind) {
    case 0:
        TObjPlayer__sub_803D99F8(&rot, 0);
        break;
    case 1:
        TObjPlayer__sub_803D99F8(&rot, 1);
        break;
    default:
        TObjPlayer__sub_803D98E4(&quat);
        break;
    }
    TBoss7Tentacle__sub_803D9BA0(&scale);
}
#pragma pop

void TObjPlayer__sub_803D7740(s32 n) {
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
void TObjPlayer__sub_803D7784(void) {
    s32 v = ((St_803D7784 *)lbl_805D76BC)->a0;
    v += ((St_803D7784 *)lbl_805D76BC)->a8;
    ((St_803D7784 *)lbl_805D76BC)->a0 = v;
    ((St_803D7784 *)lbl_805D76BC)->ac = v;
    ((St_803D7784 *)lbl_805D76BC)->b0 = v + ((St_803D7784 *)lbl_805D76BC)->a4;
    ((St_803D7784 *)lbl_805D76BC)->x1c = 0;
}
#pragma pop

void TObjPlayer__sub_803D77C0(M2C_UNK *arg0, f32 farg0) {
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
    TObjPlayer__sub_803D7740((s32)((int) (M2C_FIELD(var_r3, u16 *, 0xA) & 0xFFFFFF3F)));
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
void TBoss8Dragon__sub_803D78A8(s32 arg0) {
    lbl_805D76BC = (u8 *)(&lbl_8058CAB8.value) + (arg0 << 6);
}
#pragma pop

u32 TObjPlayer__sub_803D78C0(u8 *base, u32 stride, u32 hi, u32 key) {
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

u32 TObjPlayer__sub_803D7900(u8 *base, u32 stride, u32 hi, u32 key) {
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
#pragma scheduling off
void TObjPlayer__sub_803D7B68(s32 arg0, f32 farg0) {
    TBoss8Dragon__sub_803D78A8((s32)((int) (0)));
    TObjPlayer__sub_803D7BB0((int)((void *) (arg0)), (f32) (farg0));
}
#pragma pop

void TObjPlayer__sub_803D7CA4(void *arg0) {
    struct Vec_803D7CA4 trans;
    struct Vec_803D7CA4 scale;
    struct Angles_803D7CA4 rot;
    struct Quat_803D7CA4 quat;
    s32 kind;
    kind = TObjPlayer__sub_803D7D30(arg0, &trans, &rot, &scale, &quat);
    TOHangerMachine01__sub_803D9C00(&trans);
    switch (kind) {
    case 0:
        TObjPlayer__sub_803D99F8(&rot, 0);
        break;
    case 1:
        TObjPlayer__sub_803D99F8(&rot, 1);
        break;
    default:
        TObjPlayer__sub_803D98E4(&quat);
        break;
    }
    TBoss7Tentacle__sub_803D9BA0(&scale);
}

s32 TObjPlayer__sub_803D7FD0(void) {
    return 0;
}

s32 TObjPlayer__sub_803D7FD8(void) {
    return 0;
}

}
