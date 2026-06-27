#include "types.h"

extern "C" {

s32 fn_8001E8B8(void) {
    return 0x1A5E00;
}

s32 fn_8001E8FC();

s32 fn_8001E8C4(void) {
    return (fn_8001E8FC() / 2592) % 1000;
}

}
