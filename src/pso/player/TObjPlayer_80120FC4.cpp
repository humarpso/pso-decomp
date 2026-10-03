#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_common_weapon(s32 arg0);
s32 TItemWeapon__ct(s32, s32, s32);
s32 alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);

extern s32 tl_05;

s32 create_common_weapon(s32 arg0) {
    s32 temp_r0;

    temp_r0 = alloc_from_obj_heap__10TObjPlayerFPv(0x1F8);
    if (temp_r0 != 0) {
        temp_r0 = TItemWeapon__ct(temp_r0, tl_05, arg0);
    }
    return temp_r0;
}

}
