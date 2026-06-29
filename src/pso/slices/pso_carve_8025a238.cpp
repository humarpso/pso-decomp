#include "types.h"

extern "C" {

void TWindowHelpItem__sub_8025A238(u16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= 0x10;
        return;
    }
    *arg0 &= 0xFFFFFFEF;
}

}
