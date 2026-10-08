#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pair_80308F8C { void *a; s32 b; };

struct Craw_80308F8C {
    u8 pad0[0x38];
    u8 f38[0xA4 - 0x38];
    s32 *fA4;
    u8 padA8[0x326 - 0xA8];
    s16 state;
    u8 pad328[0x3A0 - 0x328];
    s32 *f3A0;
    s32 f3A4;
    Pair_80308F8C pairs[4];
    s32 f3C8;
    s32 f3CC;
};

extern "C" {
s32 create_particle_emitter(void *, s32);
M2C_UNK spawn_effect__14TBoss7CrawfishFii(void *, M2C_UNK);
void free_child__14TBoss7CrawfishFPv(void *);
void set_anim_timer__14TBoss7CrawfishFPvs(void *, s16);
void change_state__14TBoss7CrawfishFPvi(Craw_80308F8C *o, s32 state);
}

extern "C" {

void update_attack_state__14TBoss7CrawfishFPv(void *arg0);
s32 TBoss7Crawfish__sub_80308AA8(void *);
s16 get_floor__10TObjPlayerFPv(void *);
M2C_UNK register_attack_hits__14TBoss7CrawfishFPv(void *);
M2C_UNK spawn_effect__14TBoss7CrawfishFii(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DF0F8;

void update_attack_state__14TBoss7CrawfishFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    void *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8) - 1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0;
    if (temp_r0 < 0) {
        change_state__14TBoss7CrawfishFPvi((Craw_80308F8C *)(arg0), (s32)(1));
    }
    if ((get_floor__10TObjPlayerFPv(arg0) == 2) && (objInBand__FP7GameObjf(arg0, lbl_805DF0F8) != 0)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        if (M2C_FIELD(temp_r4, s32 *, 0x18) & 0x02000000) {
            M2C_FIELD(temp_r4, s32 *, 0x18) &= ~0x02000000;
        }
        if (TBoss7Crawfish__sub_80308AA8(arg0) != 0) {
            spawn_effect__14TBoss7CrawfishFii(arg0, 0x3A80A);
        } else {
            spawn_effect__14TBoss7CrawfishFii(arg0, 0x3A80B);
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000) {
        register_attack_hits__14TBoss7CrawfishFPv(arg0);
    }
}
void change_state__14TBoss7CrawfishFPvi(Craw_80308F8C *o, s32 state) {
    s32 i;
    o->state = state;
    o->fA4[6] |= 0x02000000;
    switch (o->state) {
    case 0:
        o->f3C8 = o->f3A0[6] - 10;
        break;
    case 1:
        break;
    case 2:
        set_anim_timer__14TBoss7CrawfishFPvs(o, 0);
        for (i = 0; i < 4; i++) {
            o->pairs[i].a = 0;
            o->pairs[i].b = 0;
        }
        o->f3A4 = 0;
        free_child__14TBoss7CrawfishFPv(o);
        o->f3CC = create_particle_emitter(o->f38, 0x20B);
        break;
    case 3:
        set_anim_timer__14TBoss7CrawfishFPvs(o, 4);
        break;
    case 4:
        spawn_effect__14TBoss7CrawfishFii((void *)(o), (M2C_UNK)(0x3990E));
        set_anim_timer__14TBoss7CrawfishFPvs(o, 1);
        break;
    case 5:
        break;
    }
}

}
