#include "types.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/object/TObjDFUsoTower.h"
#include "pso/TParticleCtrl.h"

struct RecoveredGlobal_80052200_lbl_804858A8 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80052200___vt__14TObjDFUsoTower {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 * construct_world_actor_base(void *);
extern RecoveredGlobal_80052200_lbl_804858A8 lbl_804858A8;
extern s32 __vt__14TObjDFUsoTower[];
extern s32 TObjDFUsoTower__name;
extern u8 *lbl_805D58A8;
extern const f32 lbl_805D8A30;
u8 *TObjDFUsoTower__ct(u8 *arg0, s32 _w1);
s32 rand();
extern const f32 lbl_805D8AD8;
}

extern "C" {

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__14TObjDFUsoTower[];

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjDFUsoTower;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80052200_lbl_804858A8_size[sizeof(RecoveredGlobal_80052200_lbl_804858A8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80052200___vt__14TObjDFUsoTower_size[sizeof(RecoveredGlobal_80052200___vt__14TObjDFUsoTower) == 0x34 ? 1 : -1];
u8 *TObjDFUsoTower__ct(u8 *arg0, s32 _w1) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80052200___vt__14TObjDFUsoTower *)&__vt__14TObjDFUsoTower).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDFUsoTower__name;
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(lbl_805D58A8, 5);
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(lbl_805D58A8, 5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_804858A8.value);
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) lbl_805D8A30;
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    return arg0;
}

void *TObjDFUsoTower::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjDFUsoTower__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}
s32 TBoss4Type2::pick_weighted_random(s32 n, f32 *w, s32 *t) {
    s32 i;
    f32 acc;
    f32 r;
    r = lbl_805D8AD8 * (f32)rand();
    acc = w[0];
    for (i = 0; i < n - 1; i++) {
        if (r < acc) {
            return t[i];
        }
        acc += w[i];
    }
    return t[n - 1];
}

}
