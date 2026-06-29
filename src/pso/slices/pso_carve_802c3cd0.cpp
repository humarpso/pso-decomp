#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801C2214(s8 *);
int fn_802C38B4(s32, s8 *, s32);
int fn_802C3A50(s8, s32, s32);

s32 fn_802C3CD0(s32 arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    *arg4 = arg1;
    fn_802C3A50(arg1, arg2, TObjPlayer__sub_801C2214(arg4));
    fn_802C38B4(arg0, arg4, arg3);
    return 1;
}

}
