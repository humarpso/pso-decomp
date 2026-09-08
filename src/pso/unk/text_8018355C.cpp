#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Stack_80183604
{
  f32 sp8;
  u8 pad_C[0x4];
  f32 sp10;
  f32 sp14;
  u8 trailing_storage[0x8];
};

struct RecoveredGlobal_80183604_lbl_804FF5E8
{
  M2C_UNK value;
  u8 remaining[0x24];
};

extern "C" {
f32 TTecZondeEff__sub_8002DF28();
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 TObjEneBm5GibonU__sub_8018343C(int, void *, void *, f32);
s32 TLobby__sub_80184C54();
u32 __nw__7TObjectFUl(int);
s32 rand__11TOBoss4RockFv();
f32 TObjPlayer__sub_803D89C0(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_80183604_lbl_804FF5E8 lbl_804FF5E8;
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBC1C;
extern const f32 lbl_805DBC20;
extern const f32 lbl_805DBC38;
extern const f32 lbl_805DBC3C;
extern const f32 lbl_805DBC40;
void fn_80183604(u8 *arg0);
}

extern "C" {

typedef struct RecoveredGlobal_80183604_lbl_804FF5E8 RecoveredGlobal_80183604_lbl_804FF5E8;
typedef struct Stack_80183604 Stack_80183604;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma fp_contract on
void fn_80183604(u8 *arg0) {
  Stack_80183604 stack;
  f32 temp_f30;
  float new_var;
  f32 temp_f31;
  u32 temp_r3;
  f32 temp_f29;
  if (TLobby__sub_80184C54() != 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x90)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x90))) - 1);
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x90)))) < 0)
    {
      VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 0x38));
      TBoss6Type1__sub_803D9370((void *) (&stack.sp14), (void *) (lbl_805D4DF0 + 0x178));
      if ((update_scale__15TObjBoss2TunnelFPv((void *) (&stack.sp14)) < lbl_805DBC3C) && (TObjPlayer__sub_803D89C0((void *) (&stack.sp14), (void *) (((u8 *) (&lbl_804FF5E8.value)) + 0xC)) > lbl_805DBC1C))
      {
        temp_f30 = TTecZondeEff__sub_8002DF28();
        temp_f30 = (*((f32 *) (((s8 *) arg0) + 0x68))) * temp_f30;
        temp_f31 = temp_f30;
        new_var = (*((f32 *) (((s8 *) arg0) + 0x70))) * TTecZondeEff__sub_8002DF28();
        temp_f30 = new_var;
        temp_f29 = (lbl_805DBC40 * (lbl_805DBC20 * ((f32) rand__11TOBoss4RockFv()))) + (*((f32 *) (((s8 *) arg0) + 0x6C)));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.sp8 += temp_f31;
        stack.sp10 += temp_f30;
        temp_r3 = __nw__7TObjectFUl((int) 0x40);
        if (temp_r3 != 0U)
        {
          TObjEneBm5GibonU__sub_8018343C((int) temp_r3, (void *) arg0, (void *) (&stack.sp8), (f32) temp_f29);
        }
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = (s32) (lbl_805DBC38 * (((f32) ((*((s32 *) (((s8 *) arg0) + 0x84))) + 0x3C)) * (lbl_805DBC20 * ((f32) rand__11TOBoss4RockFv()))));
    }
  }
}

}
