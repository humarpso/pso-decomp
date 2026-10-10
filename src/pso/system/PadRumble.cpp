#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802430E8_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80242F94_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80243010_lbl_80518580 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct Ent_80243070 { u8 pad[0x18]; };

struct Pt_80243070 { s16 h; u8 pad[2]; f32 x; f32 y; };

struct Ent_802430F4 { u8 pad[0x18]; };

struct Sp_802430F4 { u32 a; u32 b; };

extern "C" {
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
M2C_UNK *get_pad_rumble_effect_slots(void);
s32 is_active__12TBoss3VoloptFPv(int);
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
M2C_UNK *find_active_pad_rumble_effect_by_id(u32 arg0);
s32 is_active__12TBoss3VoloptFPv(int);
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
M2C_UNK *find_free_pad_rumble_effect_slot(void);
void reset_state__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
extern Pt_80243070 pad_rumble_channel_states[];
extern const f32 lbl_805DCA04;
void reset_pad_rumble_effects_and_channels(s16 arg0);
void accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPvi(Sp_802430F4 *, u32, s32);
void TAdSinglePlyChrSelectGC__sub_80242B24(Sp_802430F4 *);
s32 update_rumble_pattern__23TAdSinglePlyChrSelectGCFPvPv(Pt_80243070 *, Sp_802430F4 *);
void fn_80242C54(Ent_802430F4 *);
s32 fn_80242F0C(s32);
void PADControlMotor(s32, u32);
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
extern Pt_80243070 pad_rumble_channel_states[];
void update_pad_rumble(void);
}

extern "C" {

typedef char RecoveredGlobal_802430E8_lbl_80518580_size[sizeof(RecoveredGlobal_802430E8_lbl_80518580) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_80242F94_lbl_80518580_size[sizeof(RecoveredGlobal_80242F94_lbl_80518580) == 0x180 ? 1 : -1];
M2C_UNK *find_active_pad_rumble_effect_by_id(u32 arg0) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&(*(RecoveredGlobal_80242F94_lbl_80518580 *)&pad_rumble_effect_slots).value);
loop_1:
    if ((is_active__12TBoss3VoloptFPv((int) (var_r31)) != 0) && (M2C_FIELD(var_r31, u8 *, 0) & 0x80) && ((u32) M2C_FIELD(var_r31, u32 *, 0x14) == arg0)) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0x18));
    if (var_r30 >= 0x10) {
        return NULL;
    }
    goto loop_1;
}

typedef char RecoveredGlobal_80243010_lbl_80518580_size[sizeof(RecoveredGlobal_80243010_lbl_80518580) == 0x180 ? 1 : -1];
M2C_UNK *find_free_pad_rumble_effect_slot(void) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&(*(RecoveredGlobal_80243010_lbl_80518580 *)&pad_rumble_effect_slots).value);
loop_1:
    if (is_active__12TBoss3VoloptFPv((int)(var_r31)) == 0) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0x18));
    if (var_r30 >= 0x10) {
        return NULL;
    }
    goto loop_1;
}

void reset_pad_rumble_effects_and_channels(s16 arg0) {
    Ent_80243070 *p = ((Ent_80243070 *)&pad_rumble_effect_slots);
    s32 i;
    Pt_80243070 *q;
    for (i = 0; i < 16; i++, p++) {
        reset_state__23TAdSinglePlyChrSelectGCFPv(p);
    }
    q = pad_rumble_channel_states;
    for (i = 0; i < 4; i++, q++) {
        q->h = arg0;
        q->x = lbl_805DCA04;
        q->y = lbl_805DCA04;
    }
}

M2C_UNK *get_pad_rumble_effect_slots(void) {
    return &pad_rumble_effect_slots.value;
}
void update_pad_rumble(void) {
    s32 j;
    s32 t;
    Ent_802430F4 *p;
    Pt_80243070 *q;
    s32 i;
    Sp_802430F4 sp;
    q = pad_rumble_channel_states;
    for (i = 0; i < 4; i++, q++) {
        t = fn_80242F0C(i);
        if (t == 0xFFFF) {
            PADControlMotor(i, 0);
        } else {
            TAdSinglePlyChrSelectGC__sub_80242B24(&sp);
            accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPvi(&sp, t, i);
            if (update_rumble_pattern__23TAdSinglePlyChrSelectGCFPvPv(q, &sp) != 0) {
                PADControlMotor(i, 1);
            } else {
                PADControlMotor(i, 0);
            }
        }
    }
    p = (Ent_802430F4 *)&pad_rumble_effect_slots;
    for (j = 0; j < 16; j++, p++) {
        fn_80242C54(p);
    }
}

}
