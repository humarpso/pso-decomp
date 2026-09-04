#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void* TCameraCtrl__sub_8006BA68(void* a0);
unsigned char TCameraCtrl__sub_8006BADC(void);
void *TCameraCtrl__vt4(void);
void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *init_defaults__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B08[];
    extern int TCameraCtrl__data_805D4E10;
void* TCameraCtrl__sub_8006BA68(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B08; *(int*)((char*)a0 + 0x38) = 4; TCameraCtrl__data_805D4E10 = 0; return a0; }

    extern unsigned char TCameraCtrl__data_805D4E20;
unsigned char TCameraCtrl__sub_8006BADC(void) {  return TCameraCtrl__data_805D4E20; }

void *TCameraCtrl__vt4(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = init_defaults__11TCameraCtrlFPv(o);
    }
    return o;
}

extern M2C_UNK lbl_80488B38[];

void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488B38;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
