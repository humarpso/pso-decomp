#include "types.h"

extern "C" {

int fn_800F9E18();
s32 fn_800F9FD0();
int fn_800FA464();

void fn_800F9F9C(void) {
loop_1:
    if (fn_800F9FD0() != 0) {
        fn_800FA464();
        fn_800F9E18();
        goto loop_1;
    }
}

}
