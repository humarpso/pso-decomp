#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_800677D4(void *);
}

extern "C" {

void TCameraCtrl__sub_80067654(void);
void TCameraCtrl__sub_80067658(void);
void TCameraCtrl__sub_8006765C(void);
void TCameraCtrl__sub_80067660(void);
void TCameraCtrl__sub_80067664(void);
void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

void TCameraCtrl__sub_80067654(void) {  }
void TCameraCtrl__sub_80067658(void) {  }
void TCameraCtrl__sub_8006765C(void) {  }
void TCameraCtrl__sub_80067660(void) {  }
void TCameraCtrl__sub_80067664(void) {  }

extern M2C_UNK lbl_804887C8[];

void * TCameraCtrl__vt11(void) {
    void *o;
    o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TCameraCtrl__sub_800677D4(o);
    }
    return o;
}

void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804887C8;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
