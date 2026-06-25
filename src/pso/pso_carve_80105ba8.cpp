#include "types.h"

extern "C" {

void fn_80105AB4(void);

void *fn_80105BA8(void *arg0) {
    fn_80105AB4();
    *((u8 *)arg0 + 0) = 0xA2;
    *((u8 *)arg0 + 1) = 0x0A;
    return arg0;
}

}
