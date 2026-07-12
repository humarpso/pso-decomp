#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 TObjPlayer__sub_80099EF8(void *);
M2C_UNK TObjPlayer__sub_8011E484(void *);
M2C_UNK TObjPlayer__sub_8011E4D8();
s16 TObjPlayer__sub_801210D0(s32);
f32 query_extended_state__10TObjPlayerFPv(s32);
f32 TObjPlayer__sub_80121198(s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
s16 obj_getField1c(s32);

void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TObjPlayer__sub_8011E4D8();
    M2C_FIELD(arg1, s16 *, 0x14) = obj_getField1c(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s16 *, 0x16) = get_stat_by_key_state__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s32 *, 0x18) = TObjPlayer__sub_80099EF8(arg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = TObjPlayer__sub_80121198(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) TObjPlayer__sub_801210D0(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, f32 *, 0x20) = query_extended_state__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    TObjPlayer__sub_8011E484(arg0);
}

}
