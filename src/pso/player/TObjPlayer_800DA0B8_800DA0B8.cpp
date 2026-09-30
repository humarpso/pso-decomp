#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub_800da0b8 { char pad[0x14]; };
struct V_Sub_800da0b8 : Base_Sub_800da0b8 {
    PADV4
    PADV
    virtual s32 m5();
};

struct V3_800DA1F4 { f32 x; f32 y; f32 z; };
struct Obj_800DA1F4 { u8 pad0[0x30]; u32 flags; u8 pad34[4]; V3_800DA1F4 pos; V3_800DA1F4 pos2; u8 pad50[0x60 - 0x50]; s32 h; u8 pad64[0x378 - 0x64]; s32 f378; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void TScene__sub_803D8DB4(int, void *, void *);
void TObjPlayer__sub_803D9214(int, int);
void TObjPlayer__sub_803D97F0(void *, f32);
void TObjPlayer__sub_803D9B78();
extern u8 lbl_8058D490[];
extern const f32 lbl_805DA3F8;
extern const f32 lbl_805DA404;
void TObjPlayer__sub_80154E3C(void *);

void update_death_state__10TObjPlayerFPv(u8 *arg0);
void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *arg0, u32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *, s32);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void update_death_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8E80(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3E8);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (((V_Sub_800da0b8 *) (arg0 + 0x3E8))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        break;
    }
}

void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == TPlayerBattleCtrl4P__sub_801BA74C(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3DC) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3DC) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void TObjPlayer__sub_800DA1F4(Obj_800DA1F4 *arg0) {
    V3_800DA1F4 v;
    v.y = lbl_805DA3F8;
    v.x = lbl_805DA3F8;
    v.z = lbl_805DA404;
    TObjPlayer__sub_803D97F0(lbl_8058D490, lbl_805DA3F8);
    TObjPlayer__sub_803D9214(0, arg0->h);
    TScene__sub_803D8DB4(0, &v, &v);
    TObjPlayer__sub_803D9B78();
    TBoss4Zako__sub_803D8910(&arg0->pos, &v);
    VecCopy__FP3VecPC3Vec(&arg0->pos2, &arg0->pos);
    arg0->flags |= 0x01000000;
    ((void (*)(void *, int))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 0xB);
    arg0->f378 = 1;
    TObjPlayer__sub_80154E3C(arg0);
}

}
