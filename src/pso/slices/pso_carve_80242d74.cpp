#include "types.h"

extern "C" {

int fn_80242CFC();
u32 fn_80242F94();

void fn_80242D74(void) {
    if (fn_80242F94() != 0U) {
        fn_80242CFC();
    }
}

}
