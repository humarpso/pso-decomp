#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_use_camera_field__10TObjPlayerFi(s32 arg0);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 check_flag_100__10TObjPlayerFPv();
s32 get_camera_field__10TObjPlayerFPv(s32);

s32 can_use_camera_field__10TObjPlayerFi(s32 arg0) {
    if ((check_flag_100__10TObjPlayerFPv() != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0) || (reset_key_machine_state__10TObjPlayerFv() == 0)) {
        return 0;
    }
    return 1;
}

}
