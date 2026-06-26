#include "types.h"

extern "C" {

s32 fn_8014F28C();

void fn_8014F3B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = fn_8014F28C();
        fn_8014F3B8(arg0, arg1, arg2, temp_r3 - 1);
        fn_8014F3B8(arg0, arg1, temp_r3 + 1, arg3);
    }
}

}
