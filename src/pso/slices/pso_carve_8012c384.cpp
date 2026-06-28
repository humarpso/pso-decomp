#include "types.h"

extern "C" {

s32 fn_80087350(u32, s32);
s32 fn_8012C9A8(u32);
s32 fn_8022675C(s32, s32, s32, s32);
void fn_8012C4E0(void);

int fn_8012C384(void) { return 0; }
void fn_8012C3F4(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        fn_8012C9A8(arg1);
        fn_80087350(arg3, 0x45);
        fn_8022675C(0x4001C112, 0, 0, 0);
    }
}
int fn_8012C458(void) { return 0; }
void fn_8012C4E0(void) {  }

}
