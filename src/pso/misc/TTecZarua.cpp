#include "types.h"

extern "C" {

void TTecZarua__vt2(void);
void TTecZarua__sub_8023C15C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TTecZarua__sub_8023C420(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);

void TTecZarua__sub_8023C15C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x14C);
    if (obj != 0U) {
        TTecZarua__sub_8023C420(obj, arg0, arg1, arg2, arg3);
    }
}
void TTecZarua__vt2(void) {  }

}
