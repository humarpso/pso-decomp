#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_action_0e__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_8002AEB8(void *, M2C_UNK);
s32 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_isState2_324(void *);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);

struct VBase_801cac08 {
    char pad[0x18];
};
struct VObj_801cac08 : VBase_801cac08 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};
M2C_UNK VObj_801cac08::m0() { return 0; }
M2C_UNK VObj_801cac08::m1() { return 0; }
M2C_UNK VObj_801cac08::m2() { return 0; }
M2C_UNK VObj_801cac08::m3() { return 0; }
M2C_UNK VObj_801cac08::m4() { return 0; }
M2C_UNK VObj_801cac08::m5() { return 0; }
M2C_UNK VObj_801cac08::m6() { return 0; }
M2C_UNK VObj_801cac08::m7() { return 0; }

void start_action_0e__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xE;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    TObjPlayer__sub_8002AEB8(arg0 + 0x644, 0x12C);
    obj_clearFlags30(arg0, 0x10000);
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD13);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj_801cac08 *)arg0)->m7());
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    set_action_state__10TObjPlayerFPvss(arg0, 0xE, get_action_animation__10TObjPlayerFPv(arg0));
}

}
