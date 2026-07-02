#include "types.h"

extern "C" {

void TObjPlayer__sub_801B028C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80019248(s32);
s32 fn_801B0EE8();
s32 fn_801D6A44(s32, s32, s32);

s32 obj_testFlags30(s32, s32);
void handle_6x8E(void);

void TObjPlayer__sub_801B028C(s32 arg0, s32 arg1, s32 arg2) {
    if ((fn_801B0EE8() != 0) && (obj_testFlags30(arg1, 0x10000000) == 0) && (fn_80019248(arg0) != 0)) {
        fn_801D6A44(arg0 + 0x78C, arg1, arg2);
    }
}
void handle_6x8E(void) {  }

}
