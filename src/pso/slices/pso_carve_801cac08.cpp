#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_80015CB8(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK fn_8002AEB8(void *, M2C_UNK);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);
M2C_UNK fn_801BA650(void *, M2C_UNK, s32);
s32 TObjPlayer__sub_801BE40C(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);

struct VBase {
    char pad[0x18];
};
struct VObj : VBase {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};
M2C_UNK VObj::m0() { return 0; }
M2C_UNK VObj::m1() { return 0; }
M2C_UNK VObj::m2() { return 0; }
M2C_UNK VObj::m3() { return 0; }
M2C_UNK VObj::m4() { return 0; }
M2C_UNK VObj::m5() { return 0; }
M2C_UNK VObj::m6() { return 0; }
M2C_UNK VObj::m7() { return 0; }

void fn_801CAC08(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
    M2C_FIELD(arg0, s32 *, 0x33C) = 0xE;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    VecCopy__FP3VecPC3Vec(arg0 + 0x308, &sp8);
    fn_8002AEB8(arg0 + 0x644, 0x12C);
    obj_clearFlags30(arg0, 0x10000);
    send_field_state_if_active__10TObjPlayerFii(arg0, 0x4000AD13);
    if (obj_isState2_324(arg0) != 0) {
        TObjPlayer__sub_80015CB8(arg0, ((VObj *)arg0)->m7());
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    fn_801BA650(arg0, 0xE, TObjPlayer__sub_801BE40C(arg0));
}

}
