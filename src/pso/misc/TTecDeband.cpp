#include "types.h"

extern "C" {

void TTecDeband__vt2(void);
void TTecDeband__sub_8022F638(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TTecDeband__sub_8022F690(s32 arg0, s32 arg1, s32 arg2);
s32 TTecDeband__ct(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TTecDeband__sub_8022F948(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);

void TTecDeband__sub_8022F638(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__ct(obj, arg0, arg1, arg2, arg3);
    }
}
void TTecDeband__sub_8022F690(s32 arg0, s32 arg1, s32 arg2) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__sub_8022F948(obj, arg0, arg1, arg2);
    }
}
void TTecDeband__vt2(void) {  }

}
