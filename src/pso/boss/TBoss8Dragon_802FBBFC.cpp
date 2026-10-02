#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_be4a70
{
  char pad[0x18];
};

struct VObj_18_be4a70 : VBase_18_be4a70 {
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
    virtual void m31();
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
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
};

extern "C" {
void TBoss8Dragon__sub_800B9958(void *, u16);
void transition_enemy_state(void *, s16);
void TBoss8Dragon__sub_802F3CA0(void *, unsigned char);
void TBoss8Dragon__sub_802FBD68(u8 *arg0, u8 *arg1);
}

extern "C" {

typedef struct VBase_18_be4a70 VBase_18_be4a70;
typedef struct VObj_18_be4a70 VObj_18_be4a70;
#define PSO_VCALL_VObj_18_be4a70_m85(_self, _arg0, _arg1) (((VObj_18_be4a70 *)(_self))->m85((_arg0), (_arg1)))
void TBoss8Dragon__sub_802FBD68(u8 *arg0, u8 *arg1) {
  s8 *new_var2;
  s16 temp_r4;
  u16 new_var;
  new_var = (u16) (*((s32 *) (((s8 *) arg1) + 8)));
  TBoss8Dragon__sub_800B9958(arg0, new_var);
  *((s32 *) (((s8 *) arg0) + 0x674)) = (s32) (*((s16 *) (((s8 *) arg1) + 6)));
  new_var2 = (s8 *) arg0;
  *((f32 *) (new_var2 + 0x690)) = (f32) (*((f32 *) (((s8 *) arg1) + 0xC)));
  *((f32 *) (new_var2 + 0x694)) = (f32) (*((f32 *) (((s8 *) arg1) + 0x10)));
  PSO_VCALL_VObj_18_be4a70_m85(arg0, *((s16 *) (((s8 *) arg1) + 4)), 7);
  TBoss8Dragon__sub_802F3CA0(arg0, (s8) (*((u8 *) (((s8 *) arg1) + 0x14))));
  temp_r4 = *((s16 *) (((s8 *) arg1) + 4));
  if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != temp_r4)
  {
    transition_enemy_state(arg0, temp_r4);
  }
}

}
