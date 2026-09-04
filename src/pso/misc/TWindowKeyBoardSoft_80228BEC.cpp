#include "types.h"

extern "C" {

s32 strnlen__19TWindowKeyBoardSoftFPvUi(s8 *str, u32 max);

s32 strnlen__19TWindowKeyBoardSoftFPvUi(s8 *str, u32 max) {
    u32 i;
    if (str == 0) {
        return 0;
    }
    i = 0;
    while (*str != 0) {
        if (i >= max) {
            return max;
        }
        str++;
        i++;
    }
    return i;
}

}
