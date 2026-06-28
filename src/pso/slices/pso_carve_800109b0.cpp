#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 fn_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void fn_80010A34(void* p);
int fn_80010A78(void);
void fn_80010A80(void);

void fn_800109B0(s32 arg0, u16 arg1) {
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
void fn_80010A34(void* p) { { int i; for (i = 0; i < 4; i++) { obj_clearArrS16_FC(p, (void*)i); } } }
int fn_80010A78(void) { return 0; }
void fn_80010A80(void) {  }
int fn_80010A84(void) { return 0; }
void fn_80010AF0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x1FE, 0x50);
    if (temp_r3 != 0) {
        fn_80087638(temp_r3, obj_getField1c(arg0));
    }
}
int fn_80010B44(void) { return 0; }
void fn_80010BB0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x1FD, 0x50);
    if (temp_r3 != 0) {
        fn_80087638(temp_r3, obj_getField1c(arg0));
    }
}
int fn_80010C04(void) { return 0; }

}
