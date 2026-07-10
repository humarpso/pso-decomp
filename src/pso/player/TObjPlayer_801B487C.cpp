#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_valid__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_801B5680();
s32 check_flag_0x40000000__10TObjPlayerFPv(void *);
s32 fn_800822E8(void *, M2C_UNK);
s32 fn_8013E940(u32);

s32 is_target_valid__10TObjPlayerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
        return 0;
    }
    if (((u16) M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF) || (TObjPlayer__sub_801B5680() != 0) || (fn_8013E940(M2C_FIELD(arg0, u32 *, 0x424)) == 0) || (check_flag_0x40000000__10TObjPlayerFPv(arg0) != 0) || (fn_800822E8(arg0, 0x1E) == 0)) {
        return 0;
    }
    return 1;
}

}
