#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8004172C_8004155C { char pad[0xC]; };
struct VObj_8004172C_8004155C : Base_8004172C_8004155C {
    virtual void m0(int);
};

struct VBase_18_6fcf4f
{
  char pad[0x18];
};

struct VObj_18_6fcf4f : VBase_18_6fcf4f {
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
    virtual s32 m30();
    virtual s32 m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual M2C_UNK m53(s32, void *);
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern u8 *lbl_805D4C84;
extern const f32 lbl_805D8734;
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0);
}

extern "C" {

void destroy__20TBoss3VoloptHiraisinFv(void);
void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);
M2C_UNK TBoss3VoloptHiraisin__sub_8004118C();
M2C_UNK TBoss3VoloptHiraisin__sub_800411F0();
M2C_UNK TBoss3VoloptHiraisin__sub_80041314();
M2C_UNK fn_80040FDC();

void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
    case 1:
        TBoss3VoloptHiraisin__sub_8004118C();
        break;
    case 4:
        TBoss3VoloptHiraisin__sub_80041314();
        break;
    case 5:
        TBoss3VoloptHiraisin__sub_800411F0();
        break;
    case 7:
        fn_80040FDC();
        break;
    }
}

extern void *lbl_805D4C88;

typedef struct VBase_18_6fcf4f VBase_18_6fcf4f;
typedef struct VObj_18_6fcf4f VObj_18_6fcf4f;
#define PSO_VCALL_VObj_18_6fcf4f_m31(_self) (((VObj_18_6fcf4f *)(_self))->m31())
#define PSO_VCALL_VObj_18_6fcf4f_m61(_self) (((VObj_18_6fcf4f *)(_self))->m61())
#define PSO_VCALL_VObj_18_6fcf4f_m30(_self) (((VObj_18_6fcf4f *)(_self))->m30())
#define PSO_VCALL_VObj_18_6fcf4f_m60(_self) (((VObj_18_6fcf4f *)(_self))->m60())
#define PSO_VCALL_VObj_18_6fcf4f_m53(_self, _arg0, _arg1) (((VObj_18_6fcf4f *)(_self))->m53((_arg0), (_arg1)))
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0) {
  s32 temp_r4;
  u8 *new_var;
  if (check_demo_mode__10TObjPlayerFv() != 1)
  {
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 5)
    {
      if (PSO_VCALL_VObj_18_6fcf4f_m31(arg0) != 0)
      {
        PSO_VCALL_VObj_18_6fcf4f_m61(arg0);
      }
      else
        if (PSO_VCALL_VObj_18_6fcf4f_m30(arg0) != 0)
      {
        PSO_VCALL_VObj_18_6fcf4f_m60(arg0);
      }
    }
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != ((s32) (*((s32 *) (((s8 *) arg0) + 0x374)))))
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x37C)))) != (-1))
      {
        *((s32 *) (((s8 *) arg0) + 0x37C)) = -1;
        dispatch_state__20TBoss3VoloptHiraisinFPv((void *) arg0);
      }
      *((s16 *) (((s8 *) arg0) + 0x326)) = (s16) (*((s32 *) (((s8 *) arg0) + 0x374)));
      *((s32 *) (((s8 *) arg0) + 0x37C)) = 0;
    }
    dispatch_state__20TBoss3VoloptHiraisinFPv((void *) arg0);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    if (((s16) (*((s16 *) (((s8 *) arg0) + (0x326 & 0xFFFFFFFFu))))) != 5)
    {
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) - lbl_805D8734);
    }
    copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
    TObjPlayer__sub_801B4A18((void *) arg0, (int) (-1));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) 1, (int) 0);
    temp_r4 = *((s32 *) (((s8 *) lbl_805D4C84) + 0x18));
    new_var = lbl_805D4C84;
    *((s32 *) (((s8 *) new_var) + 0x18)) = (s32) (temp_r4 + 0x4000);
    PSO_VCALL_VObj_18_6fcf4f_m53(arg0, temp_r4, new_var);
  }
}

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C_8004155C *o = (struct VObj_8004172C_8004155C *)lbl_805D4C88;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D4C88 = NULL;
}

}
