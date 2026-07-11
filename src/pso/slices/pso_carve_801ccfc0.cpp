#include "types.h"

extern "C" {

s32 fn_80019248();
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_camera_field__10TObjPlayerFPv(s32);
s32 fn_801CD078(s32, s32);

s32 fn_801CCFC0(s32 arg0, s32 arg1) {
    if ((fn_80019248() != 0) && ((check_flag_100__10TObjPlayerFPv(arg0) != 0) || (get_camera_field__10TObjPlayerFPv(arg0) == 0))) {
        return 0;
    }
    return fn_801CD078(arg0, arg1);
}

}
