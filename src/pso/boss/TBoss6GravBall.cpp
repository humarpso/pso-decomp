#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_80323348 { u8 pad[0x30]; u32 flags; };

struct Vec_803236F8 { f32 x, y, z; };

struct Obj_803236F8 { u8 pad[0xC8]; Vec_803236F8 pos; };

struct Vec_803237A0 { f32 x, y, z; };

struct Obj_803237A0 { u8 pad[0xC8]; Vec_803237A0 pos; };

extern "C" {
P_80323348 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_state_1f__14TBoss6PlotFalzFUi();
void TBoss6GravBall__sub_80323348(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern u8 lbl_80476684[];
extern const f32 TBoss6GravBall__data_805DF550;
extern const f32 lbl_805DF570;
void TBoss6GravBall__sub_803236F8(Obj_803236F8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_80156844(void *, void *, int);
extern const f32 TBoss6GravBall__data_805DF558;
extern const f32 lbl_805DF574;
s32 TBoss6GravBall__sub_803237A0(Obj_803237A0 *arg0);
}

extern "C" {

void update_lifetime__14TBoss6GravBallFPv(void *arg0);
int TBoss6GravBall__sub_803231D0(void*, void*);
void init_parts__14TBoss6GravBallFPv(void* p);
void render__14TBoss6GravBallFv(void);

void TBoss6GravBall__sub_80323348(void) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        P_80323348 *p = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi() != 0) {
            p->flags &= 0xFFFDFFFF;
        }
    }
}

void TBoss6GravBall__sub_803236F8(Obj_803236F8 *arg0) {
    Vec_803236F8 v = arg0->pos;
    v.y = TBoss6GravBall__data_805DF550;
    if (TBoss6Kakusan__sub_803D8BD8(&v) > lbl_805DF570) {
        TNpcPlayer__sub_803D97B4(&v);
        v.x = v.x * lbl_805DF570;
        v.z = v.z * lbl_805DF570;
        TBoss6Type1__sub_803D9370(&arg0->pos, &v);
    } else {
        VecCopy__FP3VecPC3Vec(&arg0->pos, lbl_80476684);
    }
    TBoss6GravBall__sub_803237A0((Obj_803237A0 *)(arg0));
}

s32 TBoss6GravBall__sub_803237A0(Obj_803237A0 *arg0) {
    Vec_803237A0 v = arg0->pos;
    if (TObjPlayer__sub_80156844(arg0, &v, 0) == 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return 1;
    }
    v.y = v.y + TBoss6GravBall__data_805DF558;
    arg0->pos.y = arg0->pos.y + lbl_805DF574;
    if (arg0->pos.y < v.y) {
        arg0->pos.y = v.y;
        return 1;
    }
    return 0;
}

void update_lifetime__14TBoss6GravBallFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4) + 1;
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r0;
    if (temp_r0 > 0x1E) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

}
