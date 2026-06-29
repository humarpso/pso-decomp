#include "types.h"

extern "C" {

s32 fn_801B0EE8();
s32 TObjPlayer__sub_801BE2DC(s32);

s32 TObjPlayer__sub_801AF790(s32 arg0) {
    if ((fn_801B0EE8() == 0) && (TObjPlayer__sub_801BE2DC(arg0) != 0)) {
        return 1;
    }
    return 0;
}

}
