#include "types.h"
struct Self_8017866C { u8 pad[0x36C]; u8 *items[3]; };

extern "C" {
u16 obj_getField1c(void *);
s32 open_balloon__11TWindowCtrlFUsPUcll(u16 arg0, u8 *arg1, s32 arg2, s32 arg3);
void fn_8017866C(Self_8017866C *self, s32 i, u16 v);
}

extern "C" {

void fn_8017866C(Self_8017866C *self, s32 i, u16 v) {
    if (i < 3) {
        u8 *p = self->items[i];
        if (p != 0) {
            open_balloon__11TWindowCtrlFUsPUcll(obj_getField1c(self), p, 10, v);
        }
    }
}

}
