#include "types.h"

extern "C" {

s32 fn_8007BA98();
s32 fn_800F7BA8();
s32 fn_800F8AE8();
s32 fn_800F8B20();
s32 fn_800FD98C();
s32 TItemDrop__sub_800FDDF4();
s32 fn_8020809C();
void fn_8007BBC4(void);
int fn_800F8AA8(void);
int fn_800F8AF8(void);
int fn_800F8BFC(void);

s32 fn_8007BB2C(void) {
    fn_800F8B20();
    if (fn_8007BA98() == 0) {
        fn_8007BBC4();
        return 1;
    }
    fn_800FD98C();
    if (fn_8020809C() == 0) {
        TItemDrop__sub_800FDDF4();
        fn_8007BBC4();
        return 1;
    }
    if (fn_800F7BA8() == 0) {
        TItemDrop__sub_800FDDF4();
        fn_8007BBC4();
        return 1;
    }
    TItemDrop__sub_800FDDF4();
    if (fn_800F8AE8() != 0) {
        fn_8007BBC4();
        return 1;
    }
    fn_800F8AF8();
    return 0;
}
void fn_8007BBC4(void) { fn_800F8AA8(); fn_800F8BFC(); fn_800F8AF8(); }

}
