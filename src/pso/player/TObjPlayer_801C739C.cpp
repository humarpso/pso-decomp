#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C739C(void* a0);
void update_and_send_60__10TObjPlayerFPv(void* p);
u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3);
int TLobby__send_and_handle_60(void*);
int bswap_shrink__10TObjPlayerFPv(void*);

    extern const float lbl_805DC320;
void TObjPlayer__sub_801C739C(void* a0) { *(float*)((char*)a0 + 0x4) = lbl_805DC320; *(unsigned char*)((char*)a0 + 0x0) = 135; *(unsigned char*)((char*)a0 + 0x1) = 2; }

void update_and_send_60__10TObjPlayerFPv(void* p) { bswap_shrink__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

u16 interpolate_angle__10TObjPlayerFPvUsUsPv(void *arg0, u16 arg1, u16 arg2, s32 *arg3) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = (s16) ((u16) arg2 - arg1);
    if ((temp_r0 > -0x3000) && (temp_r0 < 0x3000)) {
        var_r3 = (temp_r0 >> 4) - (temp_r0 >> 5);
    } else {
        var_r3 = temp_r0 >> 4;
    }
    *arg3 = var_r3;
    return (u16) (arg1 + var_r3);
}

}
