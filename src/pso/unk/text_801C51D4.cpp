#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801C5380_lbl_804C3F48 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801C5320_lbl_804C3F48 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Ply_801C51D4 { u8 pad[0x30]; u32 flags; u8 pad34[4]; f32 pos[3]; };

struct Self_801C51D4 { u8 pad[0x1C]; s32 life; s32 timer; Ply_801C51D4 *owner; };

extern "C" {
s32 update_battle_controller__10TObjPlayerFv();
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C5380_lbl_804C3F48 lbl_804C3F48;
u8 *fn_801C5380(u8 *arg0, s32 arg1);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_801C5380_lbl_804C3F48 lbl_804C3F48;
extern s32 ad_single_ply_chr_select_instance;
u8 *fn_801C5320(u8 *arg0, s16 arg1);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *);
f32 xz_distance_squared(void *, void *);
Ply_801C51D4 *get_player_by_client_id(s32);
void update_technique_slot__10TTecRaFoieFi(void *, s32, s32);
void *play_sound_effect(s32, s32, s32, s32, f32);
extern const f32 lbl_805DC308;
extern const f32 lbl_805DC30C;
extern const f32 lbl_805DC310;
extern const f32 lbl_805DC314;
extern const f32 lbl_805DC318;
extern const f32 lbl_805DC31C;
void fn_801C51D4(Self_801C51D4 *self);
}

extern "C" {

typedef char RecoveredGlobal_801C5380_lbl_804C3F48_size[sizeof(RecoveredGlobal_801C5380_lbl_804C3F48) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801C5320_lbl_804C3F48_size[sizeof(RecoveredGlobal_801C5320_lbl_804C3F48) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void fn_801C51D4(Self_801C51D4 *self) {
    s32 i;
    Ply_801C51D4 *p;
    f32 min;
    f32 d;
    f32 f;
    if (--self->life <= 0) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    if (self->life > 0x5A) {
        if (--self->timer <= 0) {
            min = lbl_805DC308;
            for (i = 0; i < 4; i++) {
                p = get_player_by_client_id(i);
                if (p != NULL && p != self->owner && !(p->flags & 0x800)) {
                    d = xz_distance_squared(self->owner->pos, p->pos);
                    min = min < d ? min : d;
                }
            }
            f = newton_sqrtf(min) > lbl_805DC30C ? newton_sqrtf(min) : lbl_805DC30C;
            f -= lbl_805DC30C;
            min = lbl_805DC310 - lbl_805DC314 * f;
            update_technique_slot__10TTecRaFoieFi(play_sound_effect(0x23230, 0, 0, 0, f), lbl_805DC318 * min, 0);
            self->timer = (s32)(lbl_805DC31C * min) + 0x3C;
        }
    }
}
#pragma pop

u8 *fn_801C5320(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801C5320_lbl_804C3F48 *)&lbl_804C3F48).value;
        ad_single_ply_chr_select_instance = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *fn_801C5380(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C3F48.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x3DE;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x24) = update_battle_controller__10TObjPlayerFv();
    return arg0;
}

}
