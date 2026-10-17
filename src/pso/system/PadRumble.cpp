#include "types.h"
#include "pso/boss/TBoss3Volopt_80242C48.h"
#include "pso/misc/TLobby_80242910.h"
#include "pso/system/PadRumble.h"
#include "pso/unk/text_80242F0C.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_802430E8_lbl_80518580 {
    s32 value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80242F94_lbl_80518580 {
    s32 value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_80243010_lbl_80518580 {
    s32 value;
    u8 remaining[0x17C];
};

struct Ent_80243070 { u8 pad[0x18]; };

struct Pt_80243070 { s16 h; u8 pad[2]; f32 x; f32 y; };

struct Ent_802430F4 { u8 pad[0x18]; };

struct Sp_802430F4 { u32 a; u32 b; };

extern "C" {
extern RecoveredGlobal_802430E8_lbl_80518580 pad_rumble_effect_slots;
extern Pt_80243070 pad_rumble_channel_states[];
extern const f32 lbl_805DCA04;
void accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPsl(Sp_802430F4 *, u32, s32);
void PADControlMotor(s32, u32);
typedef char RecoveredGlobal_802430E8_lbl_80518580_size[sizeof(RecoveredGlobal_802430E8_lbl_80518580) == 0x180 ? 1 : -1];

typedef char RecoveredGlobal_80242F94_lbl_80518580_size[sizeof(RecoveredGlobal_80242F94_lbl_80518580) == 0x180 ? 1 : -1];
s32 *find_active_pad_rumble_effect_by_id(u32 arg0) {
    s32 *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (s32 *)(&(*(RecoveredGlobal_80242F94_lbl_80518580 *)&pad_rumble_effect_slots).value);
loop_1:
    if ((((TBoss3Volopt *)var_r31)->is_active() != 0) && (*(u8 *)((s8 *)var_r31 + 0) & 0x80) && ((u32) *(u32 *)((s8 *)var_r31 + 0x14) == arg0)) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (s32 *)((u8 *)var_r31 + (0x18));
    if (var_r30 >= 0x10) {
        return NULL;
    }
    goto loop_1;
}

typedef char RecoveredGlobal_80243010_lbl_80518580_size[sizeof(RecoveredGlobal_80243010_lbl_80518580) == 0x180 ? 1 : -1];
s32 *find_free_pad_rumble_effect_slot(void) {
    s32 *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (s32 *)(&(*(RecoveredGlobal_80243010_lbl_80518580 *)&pad_rumble_effect_slots).value);
loop_1:
    if (((TBoss3Volopt *)var_r31)->is_active() == 0) {
        return var_r31;
    }
    var_r30 += 1;
    var_r31 = (s32 *)((u8 *)var_r31 + (0x18));
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
        ((TAdSinglePlyChrSelectGC *)p)->reset_state();
    }
    q = pad_rumble_channel_states;
    for (i = 0; i < 4; i++, q++) {
        q->h = arg0;
        q->x = lbl_805DCA04;
        q->y = lbl_805DCA04;
    }
}

s32 *get_pad_rumble_effect_slots(void) {
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
            accumulate_rumble_strength__23TAdSinglePlyChrSelectGCFPsl(&sp, t, i);
            if (((TAdSinglePlyChrSelectGC *)q)->update_rumble_pattern((s16 *)&sp) != 0) {
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
