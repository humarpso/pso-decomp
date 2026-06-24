#include "types.h"

extern "C" {

s32 fn_80351DFC();

u8 fn_80351E38(void) {
    return (u8) (fn_80351DFC() != 0);
}

}
