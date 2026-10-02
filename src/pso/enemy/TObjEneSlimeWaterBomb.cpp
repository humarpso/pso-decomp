#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
struct Vec_800E8D4C { f32 x, y, z; };

struct Bomb_800E8D4C {
    u8 pad0[0x38];
    Vec_800E8D4C pos;
    u8 pad44[0x248 - 0x44];
    u8 hit[0x374 - 0x248];
    Vec_800E8D4C vel;
    f32 ground;
    f32 life;
    void *link;
    s32 owner;
    u8 pad390[4];
    s32 timer;
};

typedef struct { f32 x, y, z; } Vec_800E8C6C;
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 TBoss4Type2__sub_800874F4(void *, int);
s32 get_attack_target__15TObjEneSlimeOneFPv(s32);
s32 initialize__9TObjEnemyFPv(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_804966EC[];
extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];
extern s32 lbl_805D2AE0;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA6D8;
extern const f32 lbl_805DA6E0;
extern const f32 lbl_805DA6E4;
void *TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 TObjEneSlimeOne__sub_800EC39C(s32);
s32 fn_800E8AD0(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DA6AC;
extern const f32 lbl_805DA6D0;
extern const f32 lbl_805DA6D4;
extern const f32 lbl_805DA6D8;
extern const f32 lbl_805DA6DC;
void run_task__21TObjEneSlimeWaterBombFv(Bomb_800E8D4C *arg0);
M2C_UNK TObjPlayer__sub_800F09E8(int);
M2C_UNK TBoss1Dragon__sub_8014220C(void *, s32 *, s32 *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(Vec_800E8C6C *);
extern const f32 lbl_805DA670;
extern const f32 lbl_805DA67C;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA6C8;
extern const f32 lbl_805DA6CC;
void render__21TObjEneSlimeWaterBombFv(u8 *arg0);
}

extern "C" {

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1);
void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);
void request_destroy__11TBoss4Type2FUi(void *);

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void render__21TObjEneSlimeWaterBombFv(u8 *arg0) {
    Vec_800E8C6C v;
    s32 spC;
    s32 sp8;
    f32 d;
    f32 k;
    TObjPlayer__sub_803D9B2C(arg0);
    TObjPlayer__sub_803D9624(0, M2C_FIELD(arg0, f32 *, 0x38), lbl_805DA670 + M2C_FIELD(arg0, f32 *, 0x380), M2C_FIELD(arg0, f32 *, 0x40));
    TBoss1Dragon__sub_8014220C(arg0 + 0x248, &spC, &sp8);
    TObjBoss2Tunnel__sub_803D929C(0, sp8);
    rotate_matrix_x(0, spC + 0x4000);
    d = M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x380);
    if (d > lbl_805DA6C8) {
        d = lbl_805DA6C8;
    } else if (d < lbl_805DA6B4) {
        d = lbl_805DA6B4;
    }
    k = lbl_805DA6CC * (lbl_805DA67C - d / lbl_805DA6C8) + lbl_805DA670;
    v.x = v.y = k;
    v.z = lbl_805DA67C;
    TBoss7Tentacle__sub_803D9BA0(&v);
    TObjPlayer__sub_800F09E8(0);
    TObjPlayer__sub_803D9B78();
}
#pragma pop

void run_task__21TObjEneSlimeWaterBombFv(Bomb_800E8D4C *arg0) {
    s32 die = 0;
    arg0->vel.y += lbl_805DA6D0;
    TBoss4Zako__sub_803D8910(&arg0->pos, &arg0->vel);
    if (++arg0->timer > 0x14F) {
        die = 1;
    }
    {
        Vec_800E8D4C p = arg0->pos;
        p.y += lbl_805DA6AC;
        if (TObjPlayer__sub_80156844(arg0, &p, arg0->hit) != 0) {
            arg0->ground = p.y;
            if (arg0->pos.y <= arg0->ground) {
                arg0->pos.y = arg0->ground;
                arg0->vel.y *= lbl_805DA6D4;
                TObjEneDellBiter__sub_80087350(&arg0->pos, 0xE2);
            }
        } else {
            die = 1;
        }
    }
    if (arg0->link != NULL) {
        copy_pos__11TNowLoadingFPvPv(arg0->link, &arg0->pos);
    }
    if (TObjEneSlimeOne__sub_800EC39C(arg0->owner) != 0 || fn_800E8AD0(arg0) != 0) {
        die = 1;
    }
    {
        f32 t = arg0->life + lbl_805DA6D8;
        arg0->life = t;
        if (t >= lbl_805DA6DC || die != 0) {
            TObjEneDellBiter__sub_80087350(&arg0->pos, 0xE2);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x398);
    if (o != NULL) {
        o = TObjEneSlimeWaterBomb__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void *TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2) {
    f32 s;
    f32 c;
    initialize__9TObjEnemyFPv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2AE0;
    M2C_FIELD(arg0, void **, 0x38C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x10), s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((u8 *) arg0 + 0x38, M2C_FIELD(arg0, u8 **, 0x10) + 0x38);
    s = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    c = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x38) += lbl_805DA6E0 * s;
    M2C_FIELD(arg0, f32 *, 0x3C) += lbl_805DA6E4;
    M2C_FIELD(arg0, f32 *, 0x40) += lbl_805DA6E0 * c;
    M2C_FIELD(arg0, f32 *, 0x374) = lbl_805DA6D8 * s;
    M2C_FIELD(arg0, f32 *, 0x378) = lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805DA6D8 * c;
    M2C_FIELD(arg0, f32 *, 0x384) = lbl_805DA6B4;
    M2C_FIELD(arg0, s32 *, 0x388) = TBoss4Type2__sub_800874F4((u8 *) arg0 + 0x38, 0xCF);
    M2C_FIELD(arg0, f32 *, 0x390) = *dispatch_shared_handler_a__6TLobbyFPv(lbl_804966EC[get_attack_target__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x38C))]);
    if (M2C_FIELD(arg0, f32 *, 0x390) < lbl_805DA6B4) {
        M2C_FIELD(arg0, f32 *, 0x390) = lbl_805DA6B4;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = 0;
    return arg0;
}
#pragma pop

}
