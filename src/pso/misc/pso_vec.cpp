#include "types.h"
#include "dolphin/mtx.h"

#pragma scheduling off

void VecCopy(Vec* dst, const Vec* src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

s16 get_atp__10TObjPlayerFPv(void* p);
s16 get_class_id__10TObjPlayerFPv(void* p);
s16 get_field_2c0__10TObjPlayerFPv(void* p);
s16 get_field_2c2__10TObjPlayerFPv(void* p);
s16 get_item_index__10TObjPlayerFPv(void* p);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);

u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x324) == 1);
}

}
