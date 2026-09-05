#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, int);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
s16 ret_801D26AC();
s32 get_field_4__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2824(void *);
void TObjPlayer__sub_801C97D0(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801C97D0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x10;
    TObjPlayer__sub_801D0BC0((void *)(arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801D2824((void *) (arg0 + 0x5F0));
    M2C_FIELD(arg0, s32 *, 0x60) = get_field_4__10TObjPlayerFPv((void *) (arg0 + 0x5F0));
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0x10), (int) (ret_801D26AC()));
}

}
