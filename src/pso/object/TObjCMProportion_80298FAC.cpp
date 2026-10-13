#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029914C_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8029916C_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;

extern "C" {
u8 *get_creation_pad();
f32 get_right_trigger_ratio__16TObjCMProportionFv(void);
extern RecoveredGlobal_8029914C_lbl_805409C8 creation_input_state;
u8 TObjCMProportion__sub_8029914C(s32 arg0);
extern RecoveredGlobal_8029914C_lbl_805409C8 creation_input_state;
u8 TObjCMProportion__sub_8029916C(s32 arg0);
s32 is_flag_set__11TLoadingCurFPv(void *, s32);
u8 *get_creation_pad();
extern s32 lbl_804DBDC0[];
extern u8 controller_input_state[];
extern RecoveredGlobal_8029914C_lbl_805409C8 creation_input_state;
void poll_pad_buttons__16TObjCMProportionFv(void);
f64 atan2_float(f32, f32);
f32 newton_sqrtf(f32);
u8 *get_creation_pad();
extern const f64 lbl_80465170;
extern const f32 lbl_805DDC28;
extern const f32 lbl_805DDC2C;
extern const f32 lbl_805DDC30;
void get_creation_pad_stick(s32 *arg0, f32 *arg1);
}

extern "C" {

f32 get_ratio__16TObjCMProportionFv(void);
u8 *get_creation_pad();

extern M2C_UNK lbl_80465168;
extern const f32 lbl_805DDC20;

f32 get_ratio__16TObjCMProportionFv(void) {
    return (f32) M2C_FIELD(get_creation_pad(), u16 *, 0x18) / lbl_805DDC20;
}
f32 get_right_trigger_ratio__16TObjCMProportionFv(void) {
    return (f32) M2C_FIELD(get_creation_pad(), u16 *, 0x1A) / lbl_805DDC20;
}
typedef char RecoveredGlobal_8029914C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029914C_lbl_805409C8) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void get_creation_pad_stick(s32 *arg0, f32 *arg1) {
    f32 x;
    f32 y;
    f32 d;
    s32 ang;
    x = (f32)M2C_FIELD(get_creation_pad(), s16 *, 0x1C);
    y = (f32)M2C_FIELD(get_creation_pad(), s16 *, 0x1E);
    ang = (s32)(lbl_80465170 * atan2_float(x, -y));
    d = newton_sqrtf(x * x + y * y) / lbl_805DDC28;
    if (d > 1.0f) {
        d = 1.0f;
    }
    if (d < lbl_805DDC2C) {
        ang = 0;
        d = lbl_805DDC30;
    }
    if (arg0 != NULL) {
        *arg0 = ang;
    }
    if (arg1 != NULL) {
        *arg1 = d;
    }
}
#pragma pop

u8 TObjCMProportion__sub_8029914C(s32 arg0) {
    return (u8) ((M2C_FIELD(&creation_input_state.value, s32 *, 0xC) & arg0) != 0);
}
typedef char RecoveredGlobal_8029916C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029916C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TObjCMProportion__sub_8029916C(s32 arg0) {
    return (u8) ((M2C_FIELD(&(*(RecoveredGlobal_8029916C_lbl_805409C8 *)&creation_input_state).value, s32 *, 0x10) & arg0) != 0);
}
#define G_80299238(off) M2C_FIELD(&creation_input_state, s32 *, off)
void poll_pad_buttons__16TObjCMProportionFv(void) {
    s32 old;
    s32 i;
    old = G_80299238(0xC);
    G_80299238(0xC) = M2C_FIELD(get_creation_pad(), s32 *, 8);
    if (!(G_80299238(0xC) & 0xF0)) {
        if (M2C_FIELD(get_creation_pad(), s16 *, 0x1C) < -0x73) {
            G_80299238(0xC) |= 0x40;
        } else if (M2C_FIELD(get_creation_pad(), s16 *, 0x1C) > 0x73) {
            G_80299238(0xC) |= 0x80;
        } else if (M2C_FIELD(get_creation_pad(), s16 *, 0x1E) < -0x73) {
            G_80299238(0xC) |= 0x10;
        } else if (M2C_FIELD(get_creation_pad(), s16 *, 0x1E) > 0x73) {
            G_80299238(0xC) |= 0x20;
        } else {
            for (i = 0; i < 4; i++) {
                if (is_flag_set__11TLoadingCurFPv(controller_input_state + 0x160, lbl_804DBDC0[i]) != 0) {
                    G_80299238(0xC) |= lbl_804DBDC0[i];
                    break;
                }
            }
        }
    }
    if (!(G_80299238(0xC) & 4) && is_flag_set__11TLoadingCurFPv(controller_input_state + 0x160, 4) != 0) {
        G_80299238(0xC) |= 4;
    }
    if (!(G_80299238(0xC) & 2) && is_flag_set__11TLoadingCurFPv(controller_input_state + 0x160, 2) != 0) {
        G_80299238(0xC) |= 2;
    }
    G_80299238(0x10) = G_80299238(0xC) & ~old;
}

}
