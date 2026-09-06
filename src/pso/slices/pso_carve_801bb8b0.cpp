#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_801C2154(void *);
s32 TObjPlayer__sub_801C2180(void *);
M2C_UNK set_state__9TTecLukerFPvi(int, int);
void TObjPlayer__sub_801BB8B0(u8 *arg0, u8 *arg1);
}

extern "C" {

s8 TObjPlayer__sub_801BEB3C(s32);
s8 TObjPlayer__sub_801BEB44(s32);
s8 TObjPlayer__sub_801BEB4C(s32);
void TObjPlayer__sub_801BB8A8(void);
void TObjPlayer__sub_801BB8AC(void);

void TObjPlayer__sub_801BB8B0(u8 *arg0, u8 *arg1) {
    s32 temp_r0;
    s32 var_r4;
    u8 *var_r30;
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg1);
    var_r30 = (u8 *)(arg0);
    var_r3 = (u8 *)(var_r31);
    temp_r0 = TObjPlayer__sub_801C2180(var_r3);
    var_r3 = (u8 *)(var_r30 + 0x41C);
    var_r4 = temp_r0;
    set_state__9TTecLukerFPvi((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)(var_r31);
    M2C_FIELD(var_r30, s32 *, 0x420) = TObjPlayer__sub_801C2154(var_r3);
}

}
