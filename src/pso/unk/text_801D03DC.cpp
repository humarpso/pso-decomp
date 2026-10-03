#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8_e57d67 { char pad[0x8]; };

struct VObj_8_e57d67 : VBase_8_e57d67 {
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
    virtual s16 m18();
    virtual void m19();
    virtual void m20();
    virtual s16 m21();
};

extern "C" {
s32 get_idle_animation__10TObjPlayerFPv(u8 *arg0);
s32 reset_and_flag__10TObjPlayerFPv(void *);
s32 update_walk_movement__10TObjPlayerFPv(void *);
s32 set_attack_state__10TObjPlayerFPv(void *);
s32 send_6x40_walk_to_position__10TObjPlayerFPv(void *);
s32 handle_ring_hit__10TObjPlayerFi(void *);
s32 check_ring_action__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801D023C(void *);
s32 TObjPlayer__sub_801D03BC(void *);
void run_walk_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
}

extern "C" {

void run_walk_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  int new_var;
  new_var = ((u32) arg1) <= 8U;
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801D03BC((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801D023C((void *) arg0);
        return;
      case 3:
        check_ring_action__10TObjPlayerFi((void *) arg0);
        return;
      case 8:
        handle_ring_hit__10TObjPlayerFi((void *) arg0);
        return;
      case 5:
        send_6x40_walk_to_position__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        set_attack_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_walk_movement__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        reset_and_flag__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

s32 get_idle_animation__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x100000) {
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
        return ((VObj_8_e57d67 *)(temp_r3_2))->m18();
    }
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    return ((VObj_8_e57d67 *)(temp_r3))->m21();
}

}
