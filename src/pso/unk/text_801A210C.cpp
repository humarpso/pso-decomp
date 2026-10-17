#include "types.h"
extern "C" {
extern u16 lbl_805D5CD0;
u16 fn_801A210C(s32 n);
u16 fn_801A210C(s32 n) {
    u16 r = lbl_805D5CD0;
    lbl_805D5CD0 += n + 1;
    return r;
}

}
