#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80052200_lbl_804858A8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80052200___vt__14TObjDFUsoTower {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TPhotonMagicSquare__sub_801A2640(void *);
extern RecoveredGlobal_80052200_lbl_804858A8 lbl_804858A8;
extern M2C_UNK __vt__14TObjDFUsoTower[];
extern s32 lbl_805D27B0;
extern u8 *lbl_805D58A8;
extern const f32 lbl_805D8A30;
u8 *TObjDFUsoTower__ct(u8 *arg0, s32 _w1);
s32 rand__11TOBoss4RockFv();
extern const f32 lbl_805D8AD8;
s32 TBoss4Type2__sub_800522CC(s32 n, f32 *w, s32 *t);
}

extern "C" {

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1);
void *create__14TObjDFUsoTowerFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__14TObjDFUsoTower[];

void *__dt__14TObjDFUsoTowerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjDFUsoTower;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80052200_lbl_804858A8_size[sizeof(RecoveredGlobal_80052200_lbl_804858A8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80052200___vt__14TObjDFUsoTower_size[sizeof(RecoveredGlobal_80052200___vt__14TObjDFUsoTower) == 0x34 ? 1 : -1];
u8 *TObjDFUsoTower__ct(u8 *arg0, s32 _w1) {
    TPhotonMagicSquare__sub_801A2640(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80052200___vt__14TObjDFUsoTower *)&__vt__14TObjDFUsoTower).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27B0;
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D58A8, 5);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D58A8, 5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &lbl_804858A8.value);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805D8A30;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

void *create__14TObjDFUsoTowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjDFUsoTower__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}
s32 TBoss4Type2__sub_800522CC(s32 n, f32 *w, s32 *t) {
    s32 i;
    f32 acc;
    f32 r;
    r = lbl_805D8AD8 * (f32)rand__11TOBoss4RockFv();
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
