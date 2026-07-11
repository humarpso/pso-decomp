#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_use_action__10TObjPlayerFi(s32 arg0);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 fn_800822E8(s32, M2C_UNK);
s32 fn_801D60F4(s32);
s32 fn_8035186C(s32, M2C_UNK);

s32 can_use_action__10TObjPlayerFi(s32 arg0) {
    if (fn_8035186C(arg0 + 0x550, 0x200) == 0) {
        return 0;
    }
    if (check_flag_100__10TObjPlayerFPv(arg0) != 0) {
        return 0;
    }
    if (fn_800822E8(arg0, 0x200) != 0) {
        return 0;
    }
    return fn_801D60F4(arg0 + 0x4AC) != 0 ? 1 : 0;
}

}
