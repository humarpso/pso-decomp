#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802B9D90
{
  s32 sp8;
  s32 spC;
};

struct Obj_802B9D6C { u8 pad[0x77c]; s32 arr[14]; };

struct Obj_802BA158 { u8 pad[0x55c]; u16 f55c; u8 pad2[0x570 - 0x55e]; s32 f570; u8 pad3[0x58c - 0x574]; s32 f58c; s32 f590; s32 f594; s32 f598; };

struct V3_802B9C00 { s32 x, y, z; };

struct T1_802B9C00 {
    u8 pad0[0x38];
    V3_802B9C00 pos;
};

struct Tbl_802B9C00 { s32 a; s32 b; };

struct Vec_802B9A68 { f32 x, y, z; };

struct Player_802B9A68 { u8 pad[0x38]; Vec_802B9A68 pos; };

extern "C" {
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u32);
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
void TBoss6Type2__sub_802BA180(u8 *arg0);
s32 request_destroy__11TBoss4Type2FUi(int);
void TBoss6Type2__sub_802B9BBC(s32 arg0, s32 arg1);
void TBoss6Type2__sub_802B9BBC(s32 arg0, s32 arg1);
void init_parts__11TBoss6Type2FPv(s32 arg0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjEneDellBiter__sub_80087350(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void TBoss6PlotFalz__sub_802ABE3C(s32, s16, s32, f32);
extern f32 lbl_805D6740;
extern u8 lbl_805D6744;
extern f32 lbl_805D6748;
extern u8 lbl_805D674C;
extern const f32 lbl_805DE424;
extern const f32 lbl_805DE428;
extern const f32 lbl_805DE42C;
void TBoss6Type2__sub_802B9D90(u8 *arg0);
void TBoss6Type2__sub_802B9D6C(Obj_802B9D6C *self);
void TBoss6Type2__sub_802BA158(Obj_802BA158 *self);
u32 TBoss4Type2__sub_800874F4(void *, int);
void set_flags__11TBoss4Type2FPvUi(u32, int);
extern Tbl_802B9C00 lbl_804710CC[];
void TBoss6Type2__sub_802B9C00(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(Vec_802B9A68 *, Vec_802B9A68 *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 TBoss6Rock__sub_80353A14(int, Vec_802B9A68 *, f32 *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_802B9A68 *);
void TBoss6Type1__sub_803D9370(Vec_802B9A68 *, Vec_802B9A68 *);
extern const f32 TBoss6Type2__data_805DE410;
s32 TBoss6Type2__sub_802B9A68(s32 id);
}

extern "C" {

struct E_802B9EE4 { s32 *p; s32 a; s32 b; };
struct T2_802B9EE4 { u8 pad0[0x53C]; E_802B9EE4 e[2]; };
struct O_802BA000 { s32 h; s32 y; };
struct T2_802BA000 {
    u8 pad0[0x404];
    O_802BA000 o[2];
    u8 pad414[0x53C - 0x414];
    E_802B9EE4 e[2];
};
s32 collect_and_count__12TBoss3VoloptFUii(int, int);
void TBoss6Type2__sub_802B9EE4(T2_802B9EE4 *arg0);
void TBoss6Type2__sub_802B9F0C(T2_802B9EE4 *arg0);
void TBoss6Type2__sub_802BA000(T2_802BA000 *arg0);
void set_fields_554__11TBoss6Type2FPv(void* p);
void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1);
int TBoss6PlotFalz__sub_802AAFCC(void*);
M2C_UNK TBoss6Type2__sub_802B9994(int, int, void *, void *);
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int is_falz_ready__11TBoss6Type2FPv(void* p);

void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) (s16) ((s8) M2C_FIELD(arg0, u8 *, 2) << 8);
    TBoss6Type2__sub_802B9994((int) (M2C_FIELD(arg0, u8 *, 0)), (int) (M2C_FIELD(arg0, u8 *, 1)), (void *) ((u8 *) arg1 + 4), (void *) (arg0));
}

s32 TBoss6Type2__sub_802B9A68(s32 id) {
    Vec_802B9A68 a;
    Vec_802B9A68 b;
    f32 r;
    Player_802B9A68 *p;
    s32 i;
    f32 k;
    p = ((Player_802B9A68 *)TPlayerBattleCtrl4P__sub_801BA74C((u32)((u16)id)));
    if (p == NULL) {
        return 0;
    }
    i = 0;
    k = TBoss6Type2__data_805DE410;
    do {
        if (TBoss6Rock__sub_80353A14(i, &a, &r) != 0) {
            VecCopy__FP3VecPC3Vec(&b, &p->pos);
            TBoss6Type1__sub_803D9370(&b, &a);
            b.y = k;
            if (TBoss6Kakusan__sub_803D8BD8(&b) <= r) {
                return 1;
            }
        }
        i++;
    } while (i < 0x20);
    return 0;
}

#pragma push
#pragma opt_common_subs off
void TBoss6Type2__sub_802B9BBC(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0x77C);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0x77C) = 0U;
    }
}
#pragma pop

void TBoss6Type2__sub_802B9C00(u8 *arg0, s32 arg1) {
    u8 *p = arg0 + arg1 * 4;
    if (*(u32 *)(p + 0x77C) == 0U) {
        V3_802B9C00 v = ((T1_802B9C00 *)arg0)->pos;
        *(u32 *)(p + 0x77C) = TBoss4Type2__sub_800874F4(&v, lbl_804710CC[arg1].a);
        if (*(u32 *)(p + 0x77C) != 0U) {
            set_flags__11TBoss4Type2FPvUi(*(u32 *)(p + 0x77C), 0x40);
        }
    }
}

void init_parts__11TBoss6Type2FPv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        TBoss6Type2__sub_802B9BBC(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xE);
}

typedef struct Stack_802B9D90 Stack_802B9D90;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off

void TBoss6Type2__sub_802B9D6C(Obj_802B9D6C *self) {
    s32 i;
    for (i = 0; i < 14; i++) self->arr[i] = 0;
}

void TBoss6Type2__sub_802B9D90(u8 *arg0) {
  Stack_802B9D90 stack;
  s32 temp_r4;
  s32 var_r30;
  u8 *temp_r29;
  s32 var_r28;
  if (((s8) lbl_805D6744) == 0)
  {
    lbl_805D6744 = 1;
    lbl_805D6740 = lbl_805DE424;
  }
  if (((s8) lbl_805D674C) == 0)
  {
    lbl_805D674C = 1;
    lbl_805D6748 = lbl_805DE428;
  }
  stack.sp8 = (long) (((u8 *) arg0) + 0x614);
  var_r28 = 0;
  var_r30 = 0;
  stack.spC = (long) (((u8 *) arg0) + 0x5D8);
  do
  {
    temp_r4 = var_r30 + 0x554;
    if (((s32) (*((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)))) != 0)
    {
      if ((*((f32 *) (((s8 *) (*((u8 **) (((s8 *) (((u8 *) (&stack.sp8)) + var_r30)) + 0)))) + 4))) > lbl_805D6740)
      {
        *((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)) = 0;
      }
    }
    else
    {
      temp_r29 = (u8 *) (*((u8 **) (((s8 *) (((u8 *) (&stack.sp8)) + var_r30)) + 0)));
      if ((*((f32 *) (((s8 *) temp_r29) + 4))) < lbl_805D6748)
      {
        *((s32 *) (((s8 *) (((u8 *) arg0) + temp_r4)) + 0)) = 1;
        TBoss3Volopt__sub_8022675C(0x4006A300, (u32) temp_r29, 0, 0);
        TOSwitchAttack__sub_80087278((s32) temp_r29, 0x220, 0x40);
        if (((s32) (*((s32 *) (((s8 *) arg0) + 0x418)))) == 0)
        {
          TObjEneDellBiter__sub_80087350((s32) temp_r29, 0x222);
        }
        else
        {
          TOSwitchAttack__sub_80087278((s32) temp_r29, 0x229, 0x2000);
        }
        TBoss6PlotFalz__sub_802ABE3C((s32) temp_r29, 0xC0, 0xF, lbl_805DE42C);
      }
    }
    var_r28 += 1;
    var_r30 += 4;
  }
  while (var_r28 < 2);
}

void set_fields_554__11TBoss6Type2FPv(void* p) { *(s32*)((char*)p + 0x554) = 1; *(s32*)((char*)p + 0x558) = 1; }

#pragma push
#pragma opt_common_subs reset
#pragma opt_propagation reset
#pragma opt_dead_assignments reset
void TBoss6Type2__sub_802B9EE4(T2_802B9EE4 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        *arg0->e[i].p = arg0->e[i].a;
    }
}

void TBoss6Type2__sub_802B9F0C(T2_802B9EE4 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        *arg0->e[i].p = arg0->e[i].a + arg0->e[i].b;
    }
}

void TBoss6Type2__sub_802BA000(T2_802BA000 *arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        arg0->e[i].p = (s32 *)(collect_and_count__12TBoss3VoloptFUii(arg0->o[i].h, 0x28) + 0x18);
        arg0->e[i].a = *arg0->e[i].p;
        arg0->e[i].b = 0;
    }
}
#pragma pop

void TBoss6Type2__sub_802BA158(Obj_802BA158 *self) {
    self->f55c = 0xFFFF;
    self->f570 = 0;
    self->f58c = 0;
    self->f590 = 0;
    self->f594 = 0;
    self->f598 = 0;
}

void TBoss6Type2__sub_802BA180(u8 *arg0) {
    u8 *temp_r3;
    u32 id = M2C_FIELD(arg0, u16 *, 0x55C);
    if (id != 0xFFFF) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(id);
        if (temp_r3 == NULL) {
            TBoss6Type2__sub_802BA158((Obj_802BA158 *)((void *)((void *) (arg0))));
            return;
        }
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xCF4)), (void*)((void *) (arg0 + 0x574)));
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xB88)), (void*)((void *) (arg0 + 0x584)));
        M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x58C);
        M2C_FIELD(temp_r3, s32 *, 0x8B0) = (s32) M2C_FIELD(arg0, s32 *, 0x590);
        M2C_FIELD(temp_r3, s32 *, 0x8AC) = (s32) M2C_FIELD(arg0, s32 *, 0x594);
        M2C_FIELD(temp_r3, s32 *, 0x8B4) = (s32) M2C_FIELD(arg0, s32 *, 0x598);
        TBoss6Type2__sub_802BA158((Obj_802BA158 *)((void *)((void *) (arg0))));
    }
}

}
