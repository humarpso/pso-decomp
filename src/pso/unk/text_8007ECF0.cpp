#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Obj_8007F0E4 {
    u8 pad0[0x1C];
    f32 f1C;
    u32 flags;
    s32 f24;
    u8 pad28[4];
    s32 time;
    s32 f30;
};

M2C_UNK queue_destruction__7TObjectFv(void *);
void fn_8007ECF0(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjWarpString__sub_8007EE8C(void *arg0, s32 x0, s32 y0, s8 *str);
s32 fn_8007F3F8(void *, f32);
s32 fn_8007F4B8(void *, s32, f32);
s32 calc_text_width(s8 *);
void TObjWarpString__sub_80145750(s8 *, u32, f32, f32);
int sprintf(s8 *, const char *, ...);

extern const char lbl_80438AD8[];
extern char lbl_80438AE0[];
extern char lbl_80438AEC[];
extern const f32 lbl_805D9298;
extern const f32 lbl_805D929C;
extern const f32 lbl_805D92A0;
extern const f32 lbl_805D92A4;
extern const f32 lbl_805D92AC;
extern const f32 lbl_805D92B0;

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void fn_8007ECF0(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r3;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((f32) arg1 / (f32) arg2);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    if (temp_f1 < lbl_805D9298) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D9298;
    } else if (temp_f1 > lbl_805D929C) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D929C;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && (fn_8007F4B8(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x1C)) != 0)) {
        temp_r3 = fn_8007F3F8(arg0, M2C_FIELD(arg0, f32 *, 0x1C));
        if (temp_r3 >= 0) {
            var_r3 = temp_r3 + (s32) ((lbl_805D92A0 * ((f32) temp_r3 / lbl_805D92A4)) + lbl_805D92A0);
            if (var_r3 > 0x464F) {
                var_r3 = 0x464F;
            }
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
            switch (temp_r0) {
            case 0:
                break;
            case -1:
                if (var_r3 >= 0x12C) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                }
                break;
            case 1:
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
                if (temp_r0_2 > var_r3) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                } else if ((s32) (var_r3 - temp_r0_2) >= 0x4B) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                }
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                break;
            }
        }
    }
    if (lbl_805D929C == M2C_FIELD(arg0, f32 *, 0x1C)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
extern int fold_flush_0;
#pragma pop

M2C_UNK TObjWarpString__sub_8007EE8C(void *arg0, s32 x0, s32 y0, s8 *str) {
    f32 x;
    f32 y;
    f32 xr;
    f32 yb;

    x = (f32)(u32)(x0 - calc_text_width(str));
    y = (f32)y0;
    TObjWarpString__sub_80145750(str, 0xFF000000, x - 2.0f, y - 2.0f);
    TObjWarpString__sub_80145750(str, 0xFF000000, x, y - 2.0f);
    xr = 2.0f + x;
    TObjWarpString__sub_80145750(str, 0xFF000000, xr, y - 2.0f);
    TObjWarpString__sub_80145750(str, 0xFF000000, x - 2.0f, y);
    TObjWarpString__sub_80145750(str, 0xFF000000, xr, y);
    yb = 2.0f + y;
    TObjWarpString__sub_80145750(str, 0xFF000000, x - 2.0f, yb);
    TObjWarpString__sub_80145750(str, 0xFF000000, x, yb);
    TObjWarpString__sub_80145750(str, 0xFF000000, xr, yb);
    TObjWarpString__sub_80145750(str, 0xFFFFFFFF, x, y);
}

void draw_percent_text(void *arg0, f32 farg0, f32 farg1) {
    s8 sp8;
    s32 var_r5;

    if (M2C_FIELD(arg0, s32 *, 0x20) & 2) {
        sp8 = 0;
        var_r5 = (s32) (lbl_805D92AC * M2C_FIELD(arg0, f32 *, 0x1C));
        if (var_r5 < 0) {
            var_r5 = 0;
        } else if (var_r5 > 0x64) {
            var_r5 = 0x64;
        }
        sprintf(&sp8, lbl_80438AD8, var_r5);
        TObjWarpString__sub_8007EE8C(arg0, (s32) farg0, (s32) farg1, &sp8);
    }
}

void fn_8007F0E4(Obj_8007F0E4 *self, f32 x, f32 y) {
    char buf[16];
    s32 t;
    s32 mins;
    s32 secs;
    s32 frac;
    f32 r;
    f32 k;

    if (!(self->flags & 1)) {
        return;
    }
    buf[0] = 0;
    t = self->time;
    if (t <= 0) {
        return;
    }
    mins = t / 1800;
    secs = (t / 30) % 60;
    frac = (t % 30) / 3;
    if (mins > 0) {
        ((int (*)(char *, const char *, ...))sprintf)(buf, lbl_80438AE0, mins, secs, frac);
    } else {
        ((int (*)(char *, const char *, ...))sprintf)(buf, lbl_80438AEC, secs, frac);
    }
    ((M2C_UNK (*)(void *, s32, s32, char *))TObjWarpString__sub_8007EE8C)(self, (s32)x, (s32)y, buf);
    if (self->f30 > 0 && self->f24 - self->f30 > 0x4B && self->f1C > lbl_805D92B0) {
        k = lbl_805D929C;
        r = k / self->f1C;
        r -= k;
        self->time = (s32)(r * (f32)self->f24);
        if (self->time > 0x464F) {
            self->time = 0x464F;
        }
        self->f30 = self->f24;
    }
    if (self->time > 5) {
        self->time--;
    }
}

}
