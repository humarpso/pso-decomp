#include "types.h"

extern "C" {

s32 TCameraCtrl__sub_8006B330();
s32 is_not_split_screen__13TRaderMapCoreFv();

s32 fn_8030A6FC(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return TCameraCtrl__sub_8006B330();
    }
    return 1;
}

}
