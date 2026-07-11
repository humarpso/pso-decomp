#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801CC1F4(s32 arg0);
s32 TObjPlayer__sub_80019248(s32);
s32 TObjPlayer__sub_801B19EC(s32);
s32 TObjPlayer__sub_801D2A20(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 fn_800822E8(s32, M2C_UNK);
s32 fn_801C1F50(s32);
s32 get_camera_field__10TObjPlayerFPv(s32);

s32 obj_testFlags30(s32, M2C_UNK);

s32 TObjPlayer__sub_801CC1F4(s32 arg0) {
    if ((obj_testFlags30(arg0, 0x20006) != 0) || (fn_800822E8(arg0, 0x11E) == 0) || (fn_801C1F50(arg0 + 0x4AC) == 0) || (TObjPlayer__sub_801D2A20(arg0 + 0x4AC) == 0) || ((TObjPlayer__sub_80019248(arg0) != 0) && ((check_flag_100__10TObjPlayerFPv(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) || (TObjPlayer__sub_801B19EC(arg0) == 0)) {
        return 0;
    }
    return 1;
}

}
