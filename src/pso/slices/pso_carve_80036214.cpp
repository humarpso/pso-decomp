#include "types.h"

extern "C" {

int __dl__FPv();

s32 fn_80036214(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
