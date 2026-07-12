#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK trigger_switch_attack__10TObjPlayerFPvi(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8002AEB8(void *, s32);
s32 TTecCtrl__sub_801B0EE8();
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BA650(void *, M2C_UNK, s32);
s32 call_model_m24__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
s32 TObjPlayer__sub_801D8B8C(void *);

struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

void TObjPlayer__sub_801CB0C4(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xD;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    if (TTecCtrl__sub_801B0EE8() != 0) {
        TObjPlayer__sub_8002AEB8(arg0 + 0x644, 0x1E);
    } else {
        TObjPlayer__sub_8002AEB8(arg0 + 0x644, TObjPlayer__sub_801D8B8C(arg0));
    }
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD12);
    if (obj_isState2_324(arg0) != 0) {
        trigger_switch_attack__10TObjPlayerFPvi(arg0, ((VObj *)arg0)->m7());
    }
    obj_clearFlags30(arg0, 0x10000);
    TObjPlayer__sub_801BA650(arg0, 0xD, call_model_m24__10TObjPlayerFPv(arg0));
}

}
