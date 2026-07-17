#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1);
int __dl__FPv();

s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
