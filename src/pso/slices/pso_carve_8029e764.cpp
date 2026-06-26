#include "types.h"

extern "C" {

s32 fn_802034A8();

s32 fn_8029E764(void) {
    if ((fn_802034A8() == 0x1C) || (fn_802034A8() == 0x1D) || (fn_802034A8() == 0x20) || (fn_802034A8() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
