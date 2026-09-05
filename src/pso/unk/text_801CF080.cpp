#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK apply_speed_scale__10TObjPlayerFif(void *, f32);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, void *);
s32 call_subobject_m15__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801CE3EC(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
f32 TObjPlayer__sub_801D2640(void *);
f32 TObjPlayer__sub_801D2CDC(void *);
M2C_UNK TObjPlayer__sub_801D31A8(void *, void *, int, int);
void TObjPlayer__sub_801CF080(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CF080(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 5;
    TObjPlayer__sub_801D0BC0((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    TObjPlayer__sub_8001053C((void *) (arg0));
    TObjPlayer__sub_801D31A8((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (0), (int) (0));
    TObjPlayer__sub_801CE3EC((void *) (arg0));
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (5), (void *) (call_subobject_m15__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (TObjPlayer__sub_801D2640((void *) (arg0)) * TObjPlayer__sub_801D2CDC((void *) (arg0 + 0x7CC))));
}

}
