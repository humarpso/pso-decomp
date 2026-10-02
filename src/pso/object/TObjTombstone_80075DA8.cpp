#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80076098 {
    f32 x;
    f32 y;
    f32 z;
};

struct Tomb_80076098 {
    u8 pad0[0x38];
    Vec_80076098 pos;
    u8 pad44[0x234 - 0x44];
    s32 done;
};

extern "C" {
s32 TObjTombstone__sub_80075070();
extern const f32 TObjTombstone__data_805D9174;
extern const f32 TObjTombstone__data_805D9178;
extern const f32 TObjTombstone__data_805D917C;
extern const f32 lbl_805D91B4;
extern const f32 lbl_805D91B8;
void TObjTombstone__sub_80076190(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
s32 check_all_players_active__13TObjTombstoneFv(void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern const f32 TObjTombstone__data_805D9184;
extern const f32 TObjTombstone__data_805D9174;
s32 TObjTombstone__sub_80076098(void *arg0);
}

extern "C" {

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1);
void init_parts__13TObjTombstoneFPv(void* p);
void run_task__13TObjTombstoneFv(void *arg0);
f32 TObjTombstone__sub_8007598C(void *);
int TObjTombstone__sub_80075A00(void*);
int TObjTombstone__sub_80075AE8(void*);
int TObjTombstone__sub_80075B5C(void*);
int TObjTombstone__sub_80075BE0(void*);
int TObjTombstone__sub_80075C60(void*);
int TObjTombstone__sub_80075CB4(void*);
M2C_UNK TObjTombstone__sub_80075DFC(void *);
void __dl__7TObjectFPv(void *);
s32 check_owner__13TObjTombstoneFPv();
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void init_parts__13TObjTombstoneFPv(void* p) { TObjTombstone__sub_80075CB4(p); TObjTombstone__sub_80075C60(p); TObjTombstone__sub_80075BE0(p); TObjTombstone__sub_80075B5C(p); TObjTombstone__sub_80075AE8(p); TObjTombstone__sub_80075A00(p); }

extern s32 lbl_805D4E4C;

s32 TObjTombstone__sub_80076098(void *arg0) {
    Tomb_80076098 *self = (Tomb_80076098 *)arg0;
    Vec_80076098 d;
    f32 best;
    f32 len;
    s32 i;
    u8 *player;
    if (self->done != 0) {
        return 0;
    } else if (lbl_805D53A0 != TLobby__data_805D53AC) {
        self->done = 1;
        return 0;
    }
    if (check_all_players_active__13TObjTombstoneFv(arg0) == 0) {
        return 0;
    }
    best = TObjTombstone__data_805D9184;
    for (i = 0; i < 4; i++) {
        player = TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (player != NULL) {
            VecCopy__FP3VecPC3Vec(&d, player + 0x38);
            TBoss6Type1__sub_803D9370(&d, &self->pos);
            d.y = TObjTombstone__data_805D9174;
            len = TBoss6Kakusan__sub_803D8BD8(&d);
            if (best > len) {
                best = len;
            }
        }
    }
    return best < TObjTombstone__data_805D9184;
}

#pragma push
#pragma opt_common_subs off
void TObjTombstone__sub_80076190(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    if ((TObjTombstone__sub_80075070() == 0) && (M2C_FIELD(arg0, f32 *, 0xB0) < TObjTombstone__data_805D917C)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4) + lbl_805D91B4;
        M2C_FIELD(arg0, f32 *, 0xB4) = temp_f1;
        if (temp_f1 > TObjTombstone__data_805D9178) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9178;
        }
    } else {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xB4) + lbl_805D91B8;
        M2C_FIELD(arg0, f32 *, 0xB4) = temp_f1_2;
        if (temp_f1_2 < TObjTombstone__data_805D9174) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
        }
    }
}
#pragma pop

void run_task__13TObjTombstoneFv(void *arg0) {
    if (check_owner__13TObjTombstoneFPv() != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = TObjTombstone__sub_8007598C(arg0);
    TObjTombstone__sub_80076190((u8 *)(arg0));
    if (TObjTombstone__sub_80076098((void *)(arg0)) != 0) {
        TObjTombstone__sub_80075DFC(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) (M2C_FIELD(arg0, s32 *, 0x230) + 1);
    lbl_805D4E4C = 0;
}

extern M2C_UNK __vt__13TObjTombstone[];

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTombstone;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
