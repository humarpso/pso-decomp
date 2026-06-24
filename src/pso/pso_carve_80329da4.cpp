#include "types.h"

extern "C" {

int fn_8032A140();
u32 fn_8032A14C();

void fn_80329DA4(void) {
    if (fn_8032A14C() != 0U) {
        fn_8032A140();
    }
}

}
