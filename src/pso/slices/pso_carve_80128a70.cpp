#include "types.h"

extern "C" {

s32 fn_80087350(u32, s32);
s32 fn_801290A0(u32);
s32 fn_8022675C(s32, s32, s32, s32);
void fn_80128A70(void);
void fn_80128BD0(void);

void fn_80128A70(void) {  }
int fn_80128A74(void) { return 0; }
void fn_80128AE4(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        fn_801290A0(arg1);
        fn_80087350(arg3, 0x45);
        fn_8022675C(0x4001C112, 0, 0, 0);
    }
}
int fn_80128B48(void) { return 0; }
void fn_80128BD0(void) {  }

}
