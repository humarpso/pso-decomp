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

extern "C" {
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u32);
int TBoss6Type2__sub_802BA158(void *);
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
}

extern "C" {

int TBoss6Type2__sub_802B9EE4(void);
int TBoss6Type2__sub_802B9F0C(void);
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

int TBoss6Type2__sub_802B9EE4(void) { return 0; }
int TBoss6Type2__sub_802B9F0C(void) { return 0; }

int TBoss6Type2__sub_802BA158(void * _w0) { return 0; }
void TBoss6Type2__sub_802BA180(u8 *arg0) {
    u8 *temp_r3;
    u32 id = M2C_FIELD(arg0, u16 *, 0x55C);
    if (id != 0xFFFF) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(id);
        if (temp_r3 == NULL) {
            TBoss6Type2__sub_802BA158((void *)((void *) (arg0)));
            return;
        }
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xCF4)), (void*)((void *) (arg0 + 0x574)));
        copy_vec2__11TBoss6Type2FPvPv((void*)((void *) (temp_r3 + 0xB88)), (void*)((void *) (arg0 + 0x584)));
        M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x58C);
        M2C_FIELD(temp_r3, s32 *, 0x8B0) = (s32) M2C_FIELD(arg0, s32 *, 0x590);
        M2C_FIELD(temp_r3, s32 *, 0x8AC) = (s32) M2C_FIELD(arg0, s32 *, 0x594);
        M2C_FIELD(temp_r3, s32 *, 0x8B4) = (s32) M2C_FIELD(arg0, s32 *, 0x598);
        TBoss6Type2__sub_802BA158((void *)((void *) (arg0)));
    }
}

}
