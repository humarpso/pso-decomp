#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_26c590
{
  char pad[0x18];
};

struct VObj_18_26c590 : VBase_18_26c590 {
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
    virtual s32 m10();
};

extern "C" {
s8 TLobby__sub_8007B844(void *);
s32 TObjPlayer__sub_801AFD8C(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *);
M2C_UNK strncpy(void *, void *, int);
s32 fn_8007B370(u8 *arg0, u32 arg1);
}

extern "C" {

typedef struct VBase_18_26c590 VBase_18_26c590;
typedef struct VObj_18_26c590 VObj_18_26c590;
#define PSO_VCALL_VObj_18_26c590_m10(_self) (((VObj_18_26c590 *)(_self))->m10())
s32 fn_8007B370(u8 *arg0, u32 arg1) {
  unsigned char new_var;
  s32 temp_r3;
  u8 *temp_r4;
  temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
  if (temp_r3 == 0)
  {
    return 0;
  }
  *((u8 *) (((s8 *) arg0) + 0x8C)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x8C))) | 3);
  strncpy((void *) (arg0 + 8), (void *) PSO_VCALL_VObj_18_26c590_m10(temp_r3), (int) 0x17);
  *((s8 *) (((s8 *) arg0) + 0x1F)) = 0;
  *((u8 *) (((s8 *) arg0) + 0x8F)) = (u8) (*((u8 *) (((s8 *) temp_r3) + 0x88D)));
  *((s8 *) (((s8 *) arg0) + 0x8E)) = TLobby__sub_8007B844((void *) temp_r3);
  new_var = TObjPlayer__sub_801AFD8C((void *) temp_r3);
  temp_r4 = (u8 *) (temp_r3 + 0xDAC);
  *((s8 *) (((s8 *) arg0) + 0x8D)) = new_var;
  if (temp_r4 == 0)
  {
    return 0;
  }
  if (((u32) (*((u32 *) (((s8 *) temp_r4) + 4)))) == 0U)
  {
    return 0;
  }
  __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag((void *) arg0);
  return 1;
}

}
