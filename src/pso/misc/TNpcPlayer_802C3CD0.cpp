#include "types.h"

extern "C" {

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4);
s32 get_ptr_4__10TObjPlayerFPv(s8 *);
int TObjPlayer__sub_802C38B4(s32, s8 *, s32);
int fn_802C3A50(s8, s32, s32);

s32 send_command__10TNpcPlayerFiciiPv(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    *arg4 = arg1;
    fn_802C3A50(arg1, arg2, get_ptr_4__10TObjPlayerFPv(arg4));
    TObjPlayer__sub_802C38B4(arg0, arg4, arg3);
    return 1;
}

}
