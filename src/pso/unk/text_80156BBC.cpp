#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14 { char pad[0x14]; };
struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};

struct O_80156BBC { u8 pad0[0x18]; s32 f18; f32 f1c; };

struct Laser_80156CA0 {
    f32 value;
    u8 pad[0x14];
    s32 dir;
};

extern "C" {
extern const f32 lbl_805DB2B4;
void fn_80156CEC(u8 *arg0);
extern const f32 lbl_805DB2AC;
s32 fn_80156C88(f32 *arg0);
f32 fn_8013157C(void *, void *);
s32 fn_80156C88(f32 *arg0);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 *lbl_805D4DF0;
s32 fn_80156BBC(O_80156BBC *arg0, void *arg1);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern const f32 lbl_805DB2A8;
s32 fn_80156C38(f32 *arg0);
void fn_80156CA0(struct Laser_80156CA0 *p);
}

extern "C" {

s32 fn_80156BBC(O_80156BBC *arg0, void *arg1) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 1;
    }
    if (fn_8013157C(lbl_805D4DF0 + 0x178, arg1) < arg0->f1c * arg0->f1c) {
        arg0->f18 = 0;
    } else {
        arg0->f18 = 1;
    }
    return fn_80156C88((f32 *)arg0);
}

s32 fn_80156C38(f32 *arg0) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 0;
    }
    return *arg0 < lbl_805DB2A8;
}

s32 fn_80156C88(f32 *arg0) {
    return *arg0 > lbl_805DB2AC;
}

void fn_80156CA0(struct Laser_80156CA0 *p) {
    f32 x = p->value;
    if (p->dir == 0) {
        x += 0.04f;
        if (x > 0.0f) x = 0.0f;
    } else {
        x -= 0.04f;
        if (x < -1.0f) x = -1.0f;
    }
    p->value = x;
}

void fn_80156CEC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DB2B4;
    ((VObj_14 *)(arg0))->m3();
}

}
