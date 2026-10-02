#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C841C { char pad[0x8]; };
struct VObj_801C841C : Base_801C841C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)
#undef VV
    virtual s32 v76();
};

extern "C" {

void update_dispatch_v76__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801C8478(void);
void do_action__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
s32 run_action_state_phase__10TObjPlayerFisi(void * a0 = 0, s16 a1 = 0, s32 a2 = 0);
M2C_UNK TObjPlayer__sub_801D0D8C(void *);
s32 get_action_flag__10TObjPlayerFPv(void * a0 = 0);
M2C_UNK TObjPlayer__sub_801D0E84(void *);
s32 get_flag__10TObjPlayerFPv(void * a0 = 0);
s32 TObjPlayer__sub_801D2618(void * a0 = 0, f32 a1 = 0);
s32 set_action_flag_40__10TObjPlayerFPv(void * a0 = 0);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, s32);
s32 set_action_state__10TObjPlayerFPvss(void * a0 = 0, s32 a1 = 0, s16 a2 = 0);
s32 update_facing_from_lock__10TObjPlayerFPv(void * a0 = 0);

void update_dispatch_v76__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    TObjPlayer__sub_8001053C();
    TObjPlayer__sub_801D0D8C(arg0);
    TObjPlayer__sub_801D0E84(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    set_field_dc__10TObjPlayerFPvi(arg0, ((VObj_801C841C *)temp_r3)->v76());
}

s16 ret_801D26AC(void);
s32 obj_isState2_324(void * a0 = 0);

void TObjPlayer__sub_801C8478(void) {  }
void do_action__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x17;
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (get_action_flag__10TObjPlayerFPv(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    if (obj_isState2_324(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0xBA) = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(arg0, 0x17, M2C_FIELD(arg0, s16 *, 0x3C0));
    if (get_flag__10TObjPlayerFPv(arg0) != 0) {
        set_action_flag_40__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_801D2618(arg0, M2C_FIELD(arg0, f32 *, 0x3C4));
    }
}

}
