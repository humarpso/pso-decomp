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
extern RecoveredGlobal_8029914C_lbl_805409C8 lbl_805409C8;
u8 TObjCMProportion__sub_8029914C(s32 arg0);
extern RecoveredGlobal_8029914C_lbl_805409C8 lbl_805409C8;
u8 TObjCMProportion__sub_8029916C(s32 arg0);
s32 is_flag_set__11TLoadingCurFPv(void *, s32);
u8 *get_creation_pad();
extern s32 lbl_804DBDC0[];
extern u8 lbl_8050E208[];
extern RecoveredGlobal_8029914C_lbl_805409C8 lbl_805409C8;
void poll_pad_buttons__16TObjCMProportionFv(void);
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
u8 TObjCMProportion__sub_8029914C(s32 arg0) {
    return (u8) ((M2C_FIELD(&lbl_805409C8.value, s32 *, 0xC) & arg0) != 0);
}
typedef char RecoveredGlobal_8029916C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029916C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TObjCMProportion__sub_8029916C(s32 arg0) {
    return (u8) ((M2C_FIELD(&(*(RecoveredGlobal_8029916C_lbl_805409C8 *)&lbl_805409C8).value, s32 *, 0x10) & arg0) != 0);
}
#define G_80299238(off) M2C_FIELD(&lbl_805409C8, s32 *, off)
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
                if (is_flag_set__11TLoadingCurFPv(lbl_8050E208 + 0x160, lbl_804DBDC0[i]) != 0) {
                    G_80299238(0xC) |= lbl_804DBDC0[i];
                    break;
                }
            }
        }
    }
    if (!(G_80299238(0xC) & 4) && is_flag_set__11TLoadingCurFPv(lbl_8050E208 + 0x160, 4) != 0) {
        G_80299238(0xC) |= 4;
    }
    if (!(G_80299238(0xC) & 2) && is_flag_set__11TLoadingCurFPv(lbl_8050E208 + 0x160, 2) != 0) {
        G_80299238(0xC) |= 2;
    }
    G_80299238(0x10) = G_80299238(0xC) & ~old;
}

}
