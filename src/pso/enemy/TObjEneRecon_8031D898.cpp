#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Hit_8031D898 { u16 id; u8 pad[6]; };

struct Recon_8031D898 {
    u8 pad0[0x38C];
    u16 target;
    u8 pad38E[0x434 - 0x38E];
    u16 owner;
    u8 pad436[0x470 - 0x436];
    s32 f470;
    s32 f474;
};

struct Hit_8031D994 { u16 id; u8 pad[6]; };

struct Recon_8031D994 {
    u8 pad0[0x38C];
    u16 target;
    u8 pad38E[0x434 - 0x38E];
    u16 owner;
    u8 pad436[0x46C - 0x436];
    s32 f46C;
    s32 f470;
    s32 f474;
};

extern "C" {
M2C_UNK get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64DC();
f32 TObjPlayer__sub_803D89C0(void *, void *);
extern s32 TObjEneRecon__data_805D6AF4;
extern const f32 lbl_805DF3CC;
extern f32 TObjEneRecon__data_805DF3D4;
s32 TObjEneRecon__sub_8031DA90(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_800B9958(void *, u16);
s32 TObjEneDD__sub_800BB484(void *, void *, f32);
void TObjEneDD__sub_800BBA18(void *, s32);
void *TPhotonMylla__sub_80154CB4(u16);
s32 TObjEneRecon__sub_8031F0F0(void *, u16);
extern const f32 lbl_805DF420;
void TObjEneRecon__sub_8031D898(Recon_8031D898 *o);
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_800B9958(void *, u16);
s32 TObjEneDD__sub_800BB484(void *, void *, f32);
void TObjEneDD__sub_800BBA18(void *, s32);
void *TPhotonMylla__sub_80154CB4(u16);
s32 TObjEneRecon__sub_8031F0F0(void *, u16);
extern const f32 lbl_805DF420;
void TObjEneRecon__sub_8031D994(Recon_8031D994 *o);
}

extern "C" {

void TObjEneRecon__sub_8031D898(Recon_8031D898 *o) {
    Hit_8031D898 hits[5];
    void *p;
    s32 n;
    u16 id;
    s32 i;
    p = TPhotonMylla__sub_80154CB4(o->owner);
    if (p == 0) {
        queue_destruction__7TObjectFv(o);
        return;
    }
    if (TObjEneRecon__sub_8031F0F0(p, o->target) != 0) {
        o->f470 = 0;
        TObjEneDD__sub_800BBA18(o, 3);
        return;
    }
    n = TObjEneDD__sub_800BB484(o, hits, lbl_805DF420);
    for (i = 0; i < n; i++) {
        id = hits[i].id;
        if (id != o->target && TObjEneRecon__sub_8031F0F0(p, id) != 0) {
            o->f470 = 0;
            TBoss8Dragon__sub_800B9958(o, id);
            TObjEneDD__sub_800BBA18(o, 3);
            return;
        }
    }
    TObjEneDD__sub_800BBA18(o, 4);
    o->f474 = 0;
}

void TObjEneRecon__sub_8031D994(Recon_8031D994 *o) {
    Hit_8031D994 hits[5];
    void *p;
    s32 n;
    u16 id;
    s32 i;
    p = TPhotonMylla__sub_80154CB4(o->owner);
    if (p == 0) {
        queue_destruction__7TObjectFv(o);
        return;
    }
    if (TObjEneRecon__sub_8031F0F0(p, o->target) != 0) {
        o->f46C = 0;
        TObjEneDD__sub_800BBA18(o, 2);
        return;
    }
    n = TObjEneDD__sub_800BB484(o, hits, lbl_805DF420);
    for (i = 0; i < n; i++) {
        id = hits[i].id;
        if (id != o->target && TObjEneRecon__sub_8031F0F0(p, id) != 0) {
            o->f46C = 0;
            TBoss8Dragon__sub_800B9958(o, id);
            TObjEneDD__sub_800BBA18(o, 2);
            return;
        }
    }
    TObjEneDD__sub_800BBA18(o, 4);
    o->f474 = 0;
}

s32 TObjEneRecon__sub_8031DA90(u8 *arg0) {
    f32 temp_f31;
    if ((M2C_FIELD(arg0, f32 *, 0x3AC) < (TObjEneRecon__data_805DF3D4 + get_pos_x__10TObjPlayerFPv((int) (TObjEneRecon__data_805D6AF4)))) && (get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x448) - M2C_FIELD(arg0, f32 *, 0x398))) < lbl_805DF3CC)) {
        temp_f31 = TObjPlayer__sub_803D89C0((void *) (arg0 + 0x44C), (void *) (arg0 + 0x3A0));
        get_field_0c__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)));
        if (temp_f31 >= TBoss8Dragon__sub_803D64DC()) {
            return 1;
        }
    }
    return 0;
}

}
