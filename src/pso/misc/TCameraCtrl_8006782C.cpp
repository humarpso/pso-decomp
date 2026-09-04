#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__vt12(void);
void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void init_state__11TCameraCtrlFPv(void *arg0);
void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1);
M2C_UNK TCameraCtrl__sub_8006786C(void *);
M2C_UNK TCameraCtrl__sub_8006E310(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void deleting_dtor__11TCameraCtrlFPvs(void *, int);
void *init__11TCameraCtrlFPv(void *);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);
s16 obj_getField1c(u32);

void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x1C) = arg1;
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s16 *, 0x20) = obj_getField1c(arg1);
    }
}

void *TCameraCtrl__vt12(void) {
    void *o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = init__11TCameraCtrlFPv(o);
    }
    return o;
}

extern u8 lbl_8050E208[];

void init_state__11TCameraCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0x15;
    if (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E208 + 0x20, 0x10000) != 0) {
        TCameraCtrl__sub_8006E310(arg0);
    } else {
        TCameraCtrl__sub_8006786C(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x10);
}

extern M2C_UNK lbl_804887F8[];

void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804887F8;
        deleting_dtor__11TCameraCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
