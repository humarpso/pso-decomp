#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_8006CC30(void *);
}

extern "C" {

void TCameraCtrl__sub_8006C928(void);
void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void *init_subobject__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_800686BC(void *, int);
void TCameraCtrl__sub_80068714(void *);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80488D70[];

void *init_subobject__11TCameraCtrlFPv(void *arg0) {
    TCameraCtrl__sub_80068714(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
    M2C_FIELD(arg0, u32 *, 0x38) = 4;
    return arg0;
}

void TCameraCtrl__sub_8006C928(void) {  }

extern M2C_UNK lbl_80488DA0[];

void * TCameraCtrl__vt6(void) {
    void *o;
    o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006CC30(o);
    }
    return o;
}

void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488DA0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
