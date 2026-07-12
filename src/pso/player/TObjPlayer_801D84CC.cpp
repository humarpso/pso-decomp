#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D8664(s32, s16, s16);
s32 set_animation_default__10TObjPlayerFPv(s32, s16);
void *TObjPlayer__sub_801D8E1C();
s32 TObjPlayer__sub_801D84A8(void* p);
int bswap_disp_config_field__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801D84F0(void* p);
int bswap_16__FPUs(void*);

int bswap_disp_config_field__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
s32 TObjPlayer__sub_801D84F0(void* p) { return *(s32*)((char*)p + 0x4); }
void set_animation_from_data__10TObjPlayerFii(s32 arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = TObjPlayer__sub_801D8E1C();
    TObjPlayer__sub_801D8664(arg0, M2C_FIELD(temp_r3, s16 *, 0), M2C_FIELD(temp_r3, s16 *, 2));
    set_animation_default__10TObjPlayerFPv(arg0, arg1);
}

}
