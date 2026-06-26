#include "types.h"

extern "C" {

int fn_801FFDB8(s32);
int fn_801FFDFC(s32);

s32 fn_801FFD78(s32 arg0) {
    fn_801FFDFC(arg0 + 4);
    fn_801FFDB8(arg0 + 0xD2C4);
    return arg0;
}

}
