#include "types.h"

extern "C" {

s32 fn_80077788();
s32 fn_80077790();
s32 fn_801043F8();
s32 fn_801058E8();
u32 fn_802029E8(s32);
void fn_80104464(void);

void fn_80104464(void) {  }
void fn_80104468(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        fn_801043F8();
        if (fn_802029E8(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}

}
