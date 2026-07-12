#include "types.h"

extern "C" {

s32 TOKeyMachine01__sub_8029E764(void);
s32 TOKeyMachine01__sub_802034A8();

s32 TOKeyMachine01__sub_8029E764(void) {
    if ((TOKeyMachine01__sub_802034A8() == 0x1C) || (TOKeyMachine01__sub_802034A8() == 0x1D) || (TOKeyMachine01__sub_802034A8() == 0x20) || (TOKeyMachine01__sub_802034A8() == 0x1F)) {
        return 1;
    }
    return 0;
}

}
