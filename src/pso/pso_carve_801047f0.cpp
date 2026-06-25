#include "types.h"

extern "C" {

s32 fn_8010DF9C();

s32 fn_801047F0(u32 arg0) {
    if (arg0 != 0U) {
        return fn_8010DF9C();
    }
    return 0;
}

}
