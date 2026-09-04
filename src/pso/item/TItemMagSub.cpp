#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemMagSub__sub_801159A4(void* p);
int TItemMagSub__sub_801159B0(void* p);
int TItemMagSub__sub_801159BC(void* p);
s32 calc_scaled_value__11TItemMagSubFPv(void *arg0);

extern const f64 TItemMagSub__data_8043E5C8;
extern const f32 TItemMagSub__data_805DABCC;

s32 calc_scaled_value__11TItemMagSubFPv(void *arg0) {
    return (s32) (TItemMagSub__data_805DABCC * (f32) M2C_FIELD(arg0, s16 *, 2));
}

int TItemMagSub__sub_801159A4(void* p) { return (*(u8*)((char*)p + 0x0) >> 5) & 0x1; }
int TItemMagSub__sub_801159B0(void* p) { return *(u8*)((char*)p + 0x0) & 0x7; }
int TItemMagSub__sub_801159BC(void* p) { return *(u32*)((char*)p + 0x18c) & 0x20; }

}
