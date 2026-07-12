#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2);
void TCameraCtrl__sub_80083058(void);
void TCameraCtrl__sub_800830A8(void);
void TCameraCtrl__sub_800830AC(void);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *);
s32 is_split_screen();

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *)((char *)arg0 + 44), arg2);
}

extern u32 lbl_805D4EE8;

void TCameraCtrl__sub_80083058(void) {
    if ((is_split_screen() == 0) && ((u32) lbl_805D4EE8 != 0U)) {
        TObjFish__sub_803DA798(lbl_805D4EE8 + 0x1C);
        TObjPlayer__sub_803E1D90(0, 0, 0, 0);
    }
}

void TCameraCtrl__sub_800830A8(void) {  }
void TCameraCtrl__sub_800830AC(void) {  }

}
