#include "types.h"
struct L_801B7E14 { u8 f0[2]; s16 f2; s32 f4; s32 f8; };

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_getField1c(void *);
void TObjPlayer__sub_801C0D7C(void *);
void TObjPlayer__sub_801C0D9C(void *);
void fn_801B7E14(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void fn_801B7E14(void *arg0, s32 arg1, s32 arg2) {
    L_801B7E14 sp8;
    if (arg0 == 0 || obj_isState2_324(arg0) == 0) {
        TObjPlayer__sub_801C0D7C(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        TObjPlayer__sub_801C0D9C(&sp8);
    }
}

}
