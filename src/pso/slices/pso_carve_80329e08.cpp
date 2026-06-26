#include "types.h"

extern "C" {

int fn_8032A15C();
u32 fn_8032A14C();

void fn_80329E08(void) {
    if (fn_8032A14C() != 0U) {
        fn_8032A15C();
    }
}

}
