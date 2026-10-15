#include "types.h"

extern "C" {

void *__dt_deleting_4__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TCameraCtrl__sub_800686BC(void *, int);

extern s32 lbl_80488B68[];

void *__dt_deleting_4__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488B68;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
