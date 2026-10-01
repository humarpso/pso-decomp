#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800E8128_lbl_80496704 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80496710 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800E80C0_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct B_800E80E8 { s32 w[3]; };

struct A_800E80E8 { s32 w[12]; };

struct S_800E80E8 { B_800E80E8 a; A_800E80E8 d; };

typedef s32 M2C_UNK;
typedef struct { f32 x, y, z; } Vec_800E81B4;
struct Rot_800E81B4 { s32 x, y, z; };

struct Obj_800E81B4 { u8 pad[0x39C]; Vec_800E81B4 pts[4]; };

struct Vec_800E82B8 { f32 x, y, z; };

extern "C" {
M2C_UNK TObjPlayer__sub_800E841C();
extern const f32 lbl_805DA68C;
extern const f32 lbl_805DA690;
extern const f32 lbl_805DA694;
extern const f32 lbl_805DA698;
extern const f32 lbl_805DA69C;
void TObjPlayer__sub_800E84F8(u8 *arg0);
void TCameraCtrl__sub_80069148(s32, s32);
extern RecoveredGlobal_800E8128_lbl_80496704 lbl_80496704;
extern RecoveredGlobal_800E8128_lbl_80496710 lbl_80496710;
extern RecoveredGlobal_800E8128_lbl_80501010 lbl_80501010;
extern int lbl_805D52B4;
void TObjPlayer__sub_800E8128(void);
extern RecoveredGlobal_800E8128_lbl_80501010 lbl_80501010;
void TObjPlayer__sub_800E80C0(u8 *arg0);
S_800E80E8 *TObjPlayer__sub_800E80E8(S_800E80E8 *dst, S_800E80E8 *src);
M2C_UNK TObjPlayer__sub_800F09E8(int);
M2C_UNK TBoss1Dragon__sub_8014220C(Rot_800E81B4 *, s32 *, s32 *);
s32 TObjPlayer__sub_80156844(void *, Vec_800E81B4 *, Rot_800E81B4 *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
extern const f32 lbl_805DA66C;
extern const f32 lbl_805DA670;
extern const f32 lbl_805DA674;
void TObjPlayer__sub_800E81B4(Obj_800E81B4 *arg0);
void queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800E85BC();
s32 TObjEneSlimeOne__sub_800EC39C(int);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
extern const f32 lbl_805DA670;
extern const f32 lbl_805DA684;
extern const f32 lbl_805DA68C;
extern const f32 lbl_805DA6B8;
extern const f32 lbl_805DA6BC;
extern const f32 lbl_805DA6C0;
extern const f32 lbl_805DA6C4;
void TObjPlayer__sub_800E87FC(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK init_render_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800EBE48(f32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
extern const f64 lbl_8043D280[];
extern const f32 lbl_805DA66C;
extern const f32 lbl_805DA678;
extern const f32 lbl_805DA67C;
extern const f32 lbl_805DA680;
extern const f32 lbl_805DA684;
extern const f32 lbl_805DA688;
extern const f32 lbl_805DA68C;
void TObjPlayer__sub_800E82B8(u8 *arg0, Vec_800E82B8 *arg1, Vec_800E82B8 *arg2, f32 t);
}

extern "C" {

void TObjPlayer__sub_800E81A8(void);

    extern int lbl_805D52B4;

typedef char RecoveredGlobal_800E8128_lbl_80496704_size[sizeof(RecoveredGlobal_800E8128_lbl_80496704) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800E8128_lbl_80496710_size[sizeof(RecoveredGlobal_800E8128_lbl_80496710) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800E8128_lbl_80501010_size[sizeof(RecoveredGlobal_800E8128_lbl_80501010) == 0x40 ? 1 : -1];

typedef char RecoveredGlobal_800E80C0_lbl_80501010_size[sizeof(RecoveredGlobal_800E80C0_lbl_80501010) == 0x40 ? 1 : -1];
void TObjPlayer__sub_800E80C0(u8 *arg0) {
    TObjPlayer__sub_800E80E8((S_800E80E8 *)(arg0), (S_800E80E8 *)(&(*(RecoveredGlobal_800E80C0_lbl_80501010 *)&lbl_80501010).value));
}

S_800E80E8 *TObjPlayer__sub_800E80E8(S_800E80E8 *dst, S_800E80E8 *src) {
    dst->a = src->a;
    dst->d = src->d;
    return dst;
}

void TObjPlayer__sub_800E8128(void) {
    if ((s32) (*(s32 *)&lbl_805D52B4) == 7) {
        TCameraCtrl__sub_80069148((s32) &lbl_80496704.value, (s32) &lbl_80501010.value);
    }
    if (((s32) (*(s32 *)&lbl_805D52B4) >= 4) && ((s32) (*(s32 *)&lbl_805D52B4) < 8)) {
        TCameraCtrl__sub_80069148((s32) &lbl_80496710.value, (s32) ((u8 *)&lbl_80501010.value + (((*(s32 *)&lbl_805D52B4) - 4) * 0xC) + 0xC));
    }
    (*(s32 *)&lbl_805D52B4) += 1;
}

void TObjPlayer__sub_800E81A8(void) { lbl_805D52B4 = 0; }

void TObjPlayer__sub_800E81B4(Obj_800E81B4 *arg0) {
    s32 i;
    f32 k;
    s32 spC;
    s32 sp8;
    k = lbl_805DA66C;
    for (i = 0; i < 4; i++) {
        Vec_800E81B4 v = arg0->pts[i];
        Rot_800E81B4 rot;
        v.y += k;
        if (TObjPlayer__sub_80156844(arg0, &v, &rot) != 0) {
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_803D9624(0, v.x, lbl_805DA670 + v.y, v.z);
            TBoss1Dragon__sub_8014220C(&rot, &spC, &sp8);
            TObjBoss2Tunnel__sub_803D929C(0, sp8);
            TObjContainerIdo__sub_803D96A8(0, spC + 0x4000);
            TOMonitorMachine01__sub_803D8B5C(0, lbl_805DA674, lbl_805DA674, lbl_805DA674);
            TObjPlayer__sub_800F09E8(0);
            TObjPlayer__sub_803D9B78();
        }
    }
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800E82B8(u8 *arg0, Vec_800E82B8 *arg1, Vec_800E82B8 *arg2, f32 t) {
    f32 len;
    f32 k;
    f32 saved;
    Vec_800E82B8 d;
    VecCopy__FP3VecPC3Vec(&d, arg2);
    TBoss6Type1__sub_803D9370(&d, arg1);
    len = TBoss6Kakusan__sub_803D8BD8(&d);
    TObjPlayer__sub_803D9B2C();
    k = lbl_805DA678 * (lbl_805DA67C + t);
    {
        Vec_800E82B8 p = *arg1;
        p.x += k * d.x;
        p.y += k * d.y + lbl_805DA680;
        p.z += k * d.z;
        TOHangerMachine01__sub_803D9C00(&p);
    }
    TObjPlayer__sub_803D9214(0, (s32)(lbl_8043D280[0] * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z)));
    {
        f32 r = lbl_805DA67C - t;
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DA67C, lbl_805DA678, r * len / lbl_805DA66C);
    }
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
    TObjPlayer__sub_800EBE48(lbl_805DA688 * t + lbl_805DA684);
    saved = M2C_FIELD(arg0, f32 *, 0xC0);
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DA68C;
    draw__16TObjEneRe7BeruraFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = saved;
    init_render_globals__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}
#pragma pop

void TObjPlayer__sub_800E84F8(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f3;
  TObjPlayer__sub_800E841C();
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x378)))) != 0)
  {
    temp_f3 = *((f32 *) (((s8 *) arg0) + 0xC0));
    temp_f1 = lbl_805DA68C;
    if (temp_f3 < temp_f1)
    {
      TObjPlayer__sub_800E82B8((u8 *)((void *) arg0), (Vec_800E82B8 *)((void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38)), (Vec_800E82B8 *)((void *) (arg0 + 0x38)), (f32) (temp_f3 / temp_f1));
    }
    else
      if ((temp_f3 >= lbl_805DA690) && (temp_f3 < lbl_805DA694))
    {
      TObjPlayer__sub_800E82B8((u8 *)((void *) arg0), (Vec_800E82B8 *)((void *) (arg0 + 0x38)), (Vec_800E82B8 *)((void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38)), (f32) ((temp_f3 - lbl_805DA690) / temp_f1));
    }
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC0));
  if ((temp_f1 >= lbl_805DA698) && (temp_f1 < lbl_805DA69C))
  {
    TObjPlayer__sub_800E81B4((Obj_800E81B4 *)((void *) arg0));
  }
}
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800E87FC(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        TObjPlayer__sub_800E85BC();
        TBoss1Dragon__sub_80143504((void *) (arg0));
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (TObjEneSlimeOne__sub_800EC39C((int) (M2C_FIELD(arg0, s32 *, 0x374))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xC0) += lbl_805DA670 * (lbl_805DA68C - M2C_FIELD(arg0, f32 *, 0xC0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) + lbl_805DA6B8);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DA6BC);
        M2C_FIELD(arg0, f32 *, 0x380) = (f32) (M2C_FIELD(arg0, f32 *, 0x380) + lbl_805DA6C0);
        M2C_FIELD(arg0, f32 *, 0x384) = (f32) (M2C_FIELD(arg0, f32 *, 0x384) + lbl_805DA6C4);
        M2C_FIELD(arg0, f32 *, 0x388) = (f32) (M2C_FIELD(arg0, f32 *, 0x388) + lbl_805DA6C0);
        if (M2C_FIELD(arg0, f32 *, 0x384) <= lbl_805DA684) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

}
