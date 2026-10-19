#include "types.h"
#include "pso/object/TObjCMProportion.h"

struct RecoveredGlobal_8029914C_lbl_805409C8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8029916C_lbl_805409C8 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 get_creation_pad(void);
extern RecoveredGlobal_8029914C_lbl_805409C8 creation_input_state;
u8 TObjCMProportion__sub_8029914C(s32 arg0);
u8 TObjCMProportion__sub_8029916C(s32 arg0);
s32 is_flag_set__11TLoadingCurFv(void *, s32);
extern s32 cm_proportion_pad_button_masks[];
extern u8 controller_input_state[];
f32 atan2_float(f32 y, f32 x);
f32 newton_sqrtf(f32);
extern s32 creation_direction_priority_masks[4];
void update_creation_direction_repeat(void);
}
extern const f64 lbl_80465170;
extern const f32 lbl_805DDC28;
extern const f32 lbl_805DDC2C;
extern const f32 lbl_805DDC30;
void get_creation_pad_stick(s32 *arg0, f32 *arg1);
extern const f32 lbl_805DDC20;

f32 TObjCMProportion::get_ratio() {
    return (f32) *(u16 *)((s8 *)(get_creation_pad()) + 0x18) / lbl_805DDC20;
}
f32 TObjCMProportion::get_right_trigger_ratio() {
    return (f32) *(u16 *)((s8 *)(get_creation_pad()) + 0x1A) / lbl_805DDC20;
}
typedef char RecoveredGlobal_8029914C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029914C_lbl_805409C8) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void get_creation_pad_stick(s32 *arg0, f32 *arg1) {
    f32 x;
    f32 y;
    f32 d;
    s32 ang;
    x = (f32)*(s16 *)((s8 *)(get_creation_pad()) + 0x1C);
    y = (f32)*(s16 *)((s8 *)(get_creation_pad()) + 0x1E);
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
    return (u8) ((*(s32 *)((s8 *)(&creation_input_state.value) + 0xC) & arg0) != 0);
}
typedef char RecoveredGlobal_8029916C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029916C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TObjCMProportion__sub_8029916C(s32 arg0) {
    return (u8) ((*(s32 *)((s8 *)(&(*(RecoveredGlobal_8029916C_lbl_805409C8 *)&creation_input_state).value) + 0x10) & arg0) != 0);
}
#define G_80299238(off) (*(s32 *)((s8 *)(&creation_input_state) + (off)))
void update_creation_direction_repeat(void) {
    s32 held;
    s32 rest;
    s32 *p;
    held = G_80299238(0xC) & 0xF0;
    G_80299238(0x14) = 0;
    if (held == 0) {
        G_80299238(0x8) = 0;
        G_80299238(0x4) = 0;
        G_80299238(0x14) = 0;
        return;
    }
    if (held & G_80299238(0x4)) {
        G_80299238(0x8)++;
        if (G_80299238(0x8) == 7 || G_80299238(0x8) >= 10) {
            G_80299238(0x14) = G_80299238(0x4);
            G_80299238(0x8) = 7;
        }
        return;
    }
    rest = held;
    p = creation_direction_priority_masks;
    while ((rest &= ~*p) != 0) {
        p++;
    }
    G_80299238(0x4) = held & *p;
    G_80299238(0x14) = G_80299238(0x4);
    G_80299238(0x8) = 0;
}
void TObjCMProportion::poll_pad_buttons() {
    s32 old;
    s32 i;
    old = G_80299238(0xC);
    G_80299238(0xC) = *(s32 *)((s8 *)(get_creation_pad()) + 8);
    if (!(G_80299238(0xC) & 0xF0)) {
        if (*(s16 *)((s8 *)(get_creation_pad()) + 0x1C) < -0x73) {
            G_80299238(0xC) |= 0x40;
        } else if (*(s16 *)((s8 *)(get_creation_pad()) + 0x1C) > 0x73) {
            G_80299238(0xC) |= 0x80;
        } else if (*(s16 *)((s8 *)(get_creation_pad()) + 0x1E) < -0x73) {
            G_80299238(0xC) |= 0x10;
        } else if (*(s16 *)((s8 *)(get_creation_pad()) + 0x1E) > 0x73) {
            G_80299238(0xC) |= 0x20;
        } else {
            for (i = 0; i < 4; i++) {
                if (is_flag_set__11TLoadingCurFv(controller_input_state + 0x160, cm_proportion_pad_button_masks[i]) != 0) {
                    G_80299238(0xC) |= cm_proportion_pad_button_masks[i];
                    break;
                }
            }
        }
    }
    if (!(G_80299238(0xC) & 4) && is_flag_set__11TLoadingCurFv(controller_input_state + 0x160, 4) != 0) {
        G_80299238(0xC) |= 4;
    }
    if (!(G_80299238(0xC) & 2) && is_flag_set__11TLoadingCurFv(controller_input_state + 0x160, 2) != 0) {
        G_80299238(0xC) |= 2;
    }
    G_80299238(0x10) = G_80299238(0xC) & ~old;
}
