#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void TObjPlayer__sub_80010A34(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void TObjPlayer__sub_800109B0(s32 arg0, u16 arg1) {
    s32 var_r30;

    var_r30 = 0;
loop_1:
    if (arg1 != obj_getArrU16_FC(arg0, var_r30)) {
        if (obj_getArrU16_FC(arg0, var_r30) == 0xFFFF) {
            obj_setArrS16_FC(arg0, var_r30, arg1);
            return;
        }
        var_r30 += 1;
        if (var_r30 >= 4) {

        } else {
            goto loop_1;
        }
    }
}
void TObjPlayer__sub_80010A34(void* p) { { int i; for (i = 0; i < 4; i++) { obj_clearArrS16_FC(p, (void*)i); } } }
int TObjPlayer__sub_80010A78(void) { return 0; }
void TObjPlayer__sub_80010A80(void) {  }

}
