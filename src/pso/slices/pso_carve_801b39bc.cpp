#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag_100__10TObjPlayerFPv();
s32 get_camera_field__10TObjPlayerFPv(s32);
s32 fn_802034EC();

s32 fn_801B39BC(s32 arg0) {
    if ((check_flag_100__10TObjPlayerFPv() != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0) || (fn_802034EC() == 0)) {
        return 0;
    }
    return 1;
}

}
