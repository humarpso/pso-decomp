#include "types.h"

extern "C" {

s32 fn_802F2300(s32 a0 = 0);
s32 fn_802F22F4(void);
void fn_802F23FC(void);

s32 fn_802F230C(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = fn_802F22F4();
    temp_r3 = fn_802F2300(arg0);
    return temp_r3 | temp_r31;
}
int fn_802F2348(void) { return 0; }
void fn_802F23FC(void) {  }

}
