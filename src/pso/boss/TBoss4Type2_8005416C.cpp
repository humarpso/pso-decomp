#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct V_80054224 { f32 x, y, z; };

struct S_80054224 { u8 pad0[0x38]; V_80054224 pos; u8 pad44[0x39c - 0x44]; f32 f39c; };

extern "C" {
extern RecoveredGlobal_80054530_lbl_80485EC8 lbl_80485EC8;
extern const f32 lbl_805D8B20;
void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1);
extern u8 *lbl_8048615C[];
u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *);
void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in);
}

extern "C" {

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

extern M2C_UNK lbl_80437628;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) TBoss4Type2__sub_80141FA8(arg1, arg2)));
}
typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in) {
    V_80054224 v = *in;
    TBoss6Type1__sub_803D9370(&v);
    v.x *= o->f39c;
    v.y *= o->f39c;
    v.z *= o->f39c;
    VecCopy__FP3VecPC3Vec(&o->pos, src);
    TBoss4Zako__sub_803D8910(&o->pos, &v);
}

u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j) {
    return lbl_8048615C[i] + (j - 1) * 0x4000;
}

void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3E4) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)(&lbl_80485EC8.value) + (arg1 << 5)), s32 *, 0);
    }
}

}
