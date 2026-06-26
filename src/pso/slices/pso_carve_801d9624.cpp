#include "types.h"

extern "C" {

s32 fn_801D9988();

void fn_801D9624(u8 arg0, u8 *arg1, s8 *arg2) {
    if ((fn_801D9988() != 0) || (arg0 <= 0xEU)) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = 0xE;
    *arg2 = arg0 - 0xE;
}

}
