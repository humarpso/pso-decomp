#include "types.h"

extern "C" {

int fn_80100D9C(s32, s32);
s32 fn_801117C0();

void fn_80110B50(s32 arg0, s32 arg1) {
    if (fn_801117C0() < 4) {
        fn_80100D9C(arg0, arg1);
    }
}

}
