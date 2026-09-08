#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_80231638___vt__10TTecGiFoie
{
  M2C_UNK value;
  u8 remaining[0x24];
};

extern "C" {
u8 *destroy_technique_base__9TTecLukerFPvs(void *, s16);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
M2C_UNK queue_destruction__7TObjectFv(int);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80231638___vt__10TTecGiFoie __vt__10TTecGiFoie;
u8 *__dt__10TTecGiFoieFv(u8 *arg0, s16 arg1);
}

extern "C" {

void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecGiFoie__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__10TTecGiFoieFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecGiFoie__ct(o, arg0, arg1, arg2);
    }
}
typedef struct RecoveredGlobal_80231638___vt__10TTecGiFoie RecoveredGlobal_80231638___vt__10TTecGiFoie;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_80231638___vt__10TTecGiFoie_size[((sizeof(RecoveredGlobal_80231638___vt__10TTecGiFoie)) == 0x28) ? (1) : (-1)];
u8 *__dt__10TTecGiFoieFv(u8 *arg0, s16 arg1) {
  s32 temp_r30;
  s32 var_r29;
  s32 var_r31;
  if (arg0 != 0)
  {
    var_r31 = 0;
    var_r29 = var_r31;
    var_r31 = 0;
    *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &__vt__10TTecGiFoie.value;
    do
    {
      temp_r30 = var_r31 + 0xEC;
      if (is_parents_unqueued__9TTecLukerFUi(*((M2C_UNK *) (((s8 *) arg0) + temp_r30))) != 0)
      {
        queue_destruction__7TObjectFv((int) (*((M2C_UNK *) (((s8 *) arg0) + temp_r30))));
      }
      var_r29 += 1;
      var_r31 += 4;
    }
    while (var_r29 < 3);
    destroy_technique_base__9TTecLukerFPvs(arg0, 0);
    if (arg1 > 0)
    {
      __dl__7TObjectFPv((void *) arg0);
    }
  }
  return arg0;
}

}
