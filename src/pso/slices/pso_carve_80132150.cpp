#include "types.h"

extern "C" {

s32 fn_801321B4(s32);
s32 fn_801322E4(s32);
s32 fn_80132310(void);

s32 fn_80132150(s32 arg0) {
    if (fn_80132310() != 0) {
        return 0;
    }
    if (fn_801322E4(arg0) != 0) {
        return 0;
    }
    if (fn_801321B4(arg0) != 0) {
        return 0;
    }
    return 1;
}

}
