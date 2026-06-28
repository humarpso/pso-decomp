#include "types.h"

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 fn_802E19B0(s32, s32, s32, s32, s32);
s32 fn_802E1C6C();
void fn_802E2158(void);

void fn_802E2158(void) {  }
void fn_802E215C(s32 arg0) {
    fn_802E1C6C();
    fn_802E19B0(arg0, fn_80132F2C(0x1C, 0x1C), -1, 0, 0);
}

}
