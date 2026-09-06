#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_7b8813
{
  char pad[0x18];
};

struct VObj_18_7b8813 : VBase_18_7b8813 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s32 m31();
};

extern "C" {
s32 obj_testFlags30(void *, s32);
s8 TObjPlayer__sub_80102C30(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern const f32 lbl_805DD100;
void fn_80262C3C(u8 *arg0);
}

extern "C" {

typedef struct VBase_18_7b8813 VBase_18_7b8813;
typedef struct VObj_18_7b8813 VObj_18_7b8813;
#define PSO_VCALL_VObj_18_7b8813_m31(_self) (((VObj_18_7b8813 *)(_self))->m31())
void fn_80262C3C(u8 *arg0) {
  u16 temp_r3;
  u8 *temp_r3_2;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x60));
  if (temp_r3 != ((-1U) & 0xFFFFu))
  {
    temp_r3_2 = (u8 *) TPhotonMylla__sub_80154CB4(temp_r3);
    if ((temp_r3_2 == 0) || (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3_2) == 0))
    {
      *((u16 *) (((s8 *) arg0) + 0x60)) = 0xFFFFU;
      if (((f32) (*((s32 *) (((s8 *) arg0) + 0x64)))) > lbl_805DD100)
      {
        *((s32 *) (((s8 *) arg0) + 0x64)) = 0xF;
      }
    }
    else
      if (obj_testFlags30(temp_r3_2, 0x10000000) == 0)
    {
      if (obj_testFlags30(temp_r3_2, 0x20000000) != 0)
      {
        if (PSO_VCALL_VObj_18_7b8813_m31(temp_r3_2) != 0)
        {
          *((u16 *) (((s8 *) arg0) + 0x60)) = 0xFFFFU;
          if (((f32) (*((s32 *) (((s8 *) arg0) + 0x64)))) > lbl_805DD100)
          {
            *((s32 *) (((s8 *) arg0) + 0x64)) = 0xF;
          }
        }
      }
      else
        if ((obj_testFlags30(temp_r3_2, 0x80000000) != 0) && (TObjPlayer__sub_80102C30(temp_r3_2) != 0))
      {
        *((u16 *) (((s8 *) arg0) + 0x60)) = 0xFFFFU;
        if (((f32) (*((s32 *) (((s8 *) arg0) + 0x64)))) > lbl_805DD100)
        {
          *((s32 *) (((s8 *) arg0) + 0x64)) = 0xF;
        }
      }
    }
  }
}

}
