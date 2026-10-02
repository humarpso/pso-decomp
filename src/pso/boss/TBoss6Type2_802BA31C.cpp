#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Vec_802BA3B4 { f32 x, y, z; } Vec_802BA3B4;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK spawn_particle_effect(void *, s32);
u8 *get_player_by_client_id(u16);
M2C_UNK play_sound_effect(s32, void *, s32, s32);
s32 is_active__14TBoss6PlotFalzFPv();
int TBoss6Type2__sub_802BA180(void);
s32 is_target_valid__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
M2C_UNK TBoss6Type2__sub_8036A92C(void *, void *, s32);
M2C_UNK create__14TBoss6EffHyouiFPvPvPv(s32, s32, s32);
extern const f32 TBoss6Type2__data_805DE434;
void TBoss6Type2__sub_802BA3B4(u8 *arg0);
}

extern "C" {
int TBoss6Type2__sub_802BA180(void);
int TBoss6Type2__sub_802BA220(void* a0 = 0, void* a1 = 0);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int is_falz_ready__11TBoss6Type2FPv(void* p);
int TBoss6PlotFalz__sub_802AAFCC(void*);

s32 check_target__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x464) == 0xFFFF) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        TBoss6Type2__sub_802BA180();
    }
    if (TBoss6Type2__sub_802BA220((void*)(arg0), (void*)(M2C_FIELD(arg0, u16 *, 0x464))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
        return 0;
    }
    return 1;
}
int is_falz_ready__11TBoss6Type2FPv(void* p) { return TBoss6PlotFalz__sub_802AAFCC(p); }
void TBoss6Type2__sub_802BA3B4(u8 *arg0) {
    Vec_802BA3B4 v;
    u8 *pl;
    s32 done;
    u16 id;
    id = M2C_FIELD(arg0, u16 *, 0x55C);
    if (id != 0xFFFF) {
        done = 0;
        pl = get_player_by_client_id(id);
        if (pl == NULL) {
            done = 1;
        } else if (is_active__14TBoss6PlotFalzFPv() == 0) {
            VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
            v.y += TBoss6Type2__data_805DE434;
            TBoss6Type2__sub_8036A92C(arg0, &v, 0x1E);
            create__14TBoss6EffHyouiFPvPvPv(M2C_FIELD(arg0, u16 *, 0x55C), 1, 0x1E);
            if (is_target_valid__11TBoss6Type2FPv(arg0) == 0) {
                play_sound_effect(0x40069E13, arg0 + 0x38, 0, 1);
            }
            spawn_particle_effect(pl + 0x38, 0x36);
            done = 1;
        }
        if (done != 0) {
            ((int (*)(void *))TBoss6Type2__sub_802BA180)(arg0);
            M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFF;
            M2C_FIELD(arg0, s32 *, 0x428) = TBoss6Type2__sub_802BD7EC(arg0);
            M2C_FIELD(arg0, s32 *, 0x430) = TBoss6Type2__sub_802BD76C(arg0);
        }
        switch (M2C_FIELD(arg0, s32 *, 0x374)) {
        case 0x1A:
            ((int (*)(void *))TBoss6Type2__sub_802BA180)(arg0);
            M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFF;
            break;
        }
    }
}

}
