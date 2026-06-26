#include "types.h"

extern "C" {

s32 fn_8010CD6C();

s32 fn_80222FC0(u32 arg0) {
    if (arg0 != 0U) {
        return fn_8010CD6C();
    }
    return 0;
}

}
