#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : public Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m15();
};

extern "C" {

void start_action_21__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_80019248(void *);
M2C_UNK TObjPlayer__sub_801B0FF4(void *);
s32 TObjPlayer__sub_801D0458(void *);
M2C_UNK TObjPlayer__sub_801D04B4(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BA650(void *, M2C_UNK, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);

extern const f32 TObjPlayer__data_805DC36C;

void start_action_21__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x15;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    TObjPlayer__sub_801D04B4(arg0);
    TObjPlayer__sub_80154764(arg0, 0, 1);
    M2C_FIELD(arg0, f32 *, 0x624) = (f32) TObjPlayer__data_805DC36C;
    TObjPlayer__sub_801B0FF4(arg0);
    ((V_A *) arg0)->m15();
    if (TObjPlayer__sub_80019248(arg0) != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003206);
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 1;
    TObjPlayer__sub_801BA650(arg0, 0x15, TObjPlayer__sub_801D0458(arg0));
}

}
