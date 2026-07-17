#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_shield_params__10TObjPlayerFPvi(void *arg0, s32 arg1);
s16 get_field_2b8__14TItemProShieldFPv(s32);
M2C_UNK set_params__10TObjPlayerFPvPvPviPv();

s16 obj_getS16_2BA(s32);

void init_shield_params__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    set_params__10TObjPlayerFPvPvPviPv();
    M2C_FIELD(arg0, s16 *, 0x16) = get_field_2b8__14TItemProShieldFPv(arg1);
    M2C_FIELD(arg0, s16 *, 0x18) = obj_getS16_2BA(arg1);
}

}
