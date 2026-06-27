#include "types.h"

extern "C" {

s32 fn_8006B330();
s32 TRaderMapCore__sub_8030A808();

s32 fn_8030A6FC(void) {
    if (TRaderMapCore__sub_8030A808() == 1) {
        return fn_8006B330();
    }
    return 1;
}

}
