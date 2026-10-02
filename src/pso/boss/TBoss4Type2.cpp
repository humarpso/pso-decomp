#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80055918
{
  M2C_UNK sp8;
  f32 spC;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, int);
s32 create__13TObjDFRecoverFP7TObjectUsPCf(void *, int, void *);
s32 get_position_ptr__10TObjPlayerFPv(int);
s32 apply_resta_heal__11TBoss4Type2FPv(void *);
s32 TBoss4Type2__sub_80057048(void *, int);
s32 request_destroy__11TBoss4Type2FUi(int);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
u32 get_player_by_client_id(int);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
extern const f32 lbl_805D8BA4;
extern const f32 lbl_805D8BA8;
void TBoss4Type2__vt36(u8 *arg0);
}

extern "C" {

void TBoss4Type2__vt34(u8 *arg0);
void TBoss4Type2__vt35(void);
void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void *__ct__11TBoss4ZanzoFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = __ct__11TBoss4ZanzoFv(o, arg0, arg1);
    }
    return o;
}

typedef struct Stack_80055918 Stack_80055918;
void TBoss4Type2__vt36(u8 *arg0) {
  Stack_80055918 stack;
  int temp_r0;
  u16 temp_r3_4;
  unsigned int temp_r3;
  unsigned int temp_r3_2;
  unsigned int temp_r3_3;
  unsigned int temp_r3_5;
  unsigned int temp_r3_6;
  unsigned int *new_var;
  if (((*((int *) (((s8 *) arg0) + 0x3C8))) == 5) && ((*((f32 *) (((s8 *) arg0) + 0x3D0))) > lbl_805D8BA4))
  {
    temp_r3 = *((unsigned int *) (((s8 *) arg0) + 0x448));
    if (temp_r3 != 0)
    {
      request_destroy__11TBoss4Type2FUi((int) temp_r3);
      *((unsigned int *) (((s8 *) arg0) + 0x448)) = 0;
    }
  }
  else
    if ((*((unsigned int *) (((s8 *) arg0) + 0x448))) == 0)
  {
    temp_r3_2 = create_particle_emitter((void *) (arg0 + 0x468), (int) 0x143);
    new_var = (unsigned int *) (((s8 *) arg0) + 0x448);
    *new_var = temp_r3_2;
    if (temp_r3_2 != 0)
    {
      set_flags__11TBoss4Type2FPvUi((int) (*new_var), (int) 0x40);
    }
  }
  if ((*((int *) (((s8 *) arg0) + 0x398))) == 0x46)
  {
    temp_r3_3 = spawn_particle_effect((void *) (arg0 + 0x468), (int) 0x13E);
    if (temp_r3_3 != 0)
    {
      set_flags__11TBoss4Type2FPvUi((int) temp_r3_3, (int) 0x40);
    }
    temp_r3_4 = *((u16 *) (((s8 *) arg0) + 0x3C4));
    if (temp_r3_4 != ((unsigned short) (-1)))
    {
      temp_r3_5 = get_player_by_client_id((int) temp_r3_4);
      if (temp_r3_5 != 0)
      {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (int) get_position_ptr__10TObjPlayerFPv((int) temp_r3_5));
        stack.spC += lbl_805D8BA8;
        temp_r3_6 = spawn_particle_effect((void *) (&stack.sp8), (int) 0x38);
        if (temp_r3_6 != 0)
        {
          set_flags__11TBoss4Type2FPvUi((int) temp_r3_6, (int) 0x40);
        }
      }
    }
    apply_resta_heal__11TBoss4Type2FPv((void *) arg0);
    create__13TObjDFRecoverFP7TObjectUsPCf((void *) arg0, (int) (*((u16 *) (((s8 *) arg0) + 0x3C4))), (void *) (arg0 + 0x468));
  }
  temp_r0 = (*((int *) (((s8 *) arg0) + 0x398))) - 1;
  *((int *) (((s8 *) arg0) + 0x398)) = temp_r0;
  if (temp_r0 < 0)
  {
    TBoss3Volopt__sub_8022675C((M2C_UNK)((int) 0x4003AD1A), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 1));
    create__9TTecRestaFPvPvPv((void *) arg0, (void *) (arg0 + 0x38), (int) (*((int *) (((s8 *) arg0) + 0x428))));
    TBoss4Type2__sub_80057048((void *) arg0, (int) (*((int *) (((s8 *) arg0) + 0x424))));
  }
}

void TBoss4Type2__vt35(void) {  }

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt34(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    TBoss3Volopt__sub_8022675C(0x40039E21, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

}
