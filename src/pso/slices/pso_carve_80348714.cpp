#include "types.h"

extern "C" {

s32 fn_80348714(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
