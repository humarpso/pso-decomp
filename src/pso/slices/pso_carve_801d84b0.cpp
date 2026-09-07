#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *TObjPlayer__sub_801D84B0(s32 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *TObjPlayer__sub_801D8E1C();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

u8 *TObjPlayer__sub_801D84B0(s32 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 0) {
        return (u8 *)(arg0) + 4;
    }
    return (u8 *)(arg0) + 0x14;
}

}
