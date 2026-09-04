#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TCameraCtrl__sub_800830A8(void);
void TCameraCtrl__sub_800830AC(void);
void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2);
void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void update_single_screen__11TCameraCtrlFv(void);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(s32);

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *)((char *)arg0 + 44), arg2);
}

extern u32 lbl_805D4EE8;

void update_single_screen__11TCameraCtrlFv(void) {
    if ((is_split_screen() == 0) && ((u32) lbl_805D4EE8 != 0U)) {
        set_global_param__8TObjFishFi(lbl_805D4EE8 + 0x1C);
        TObjPlayer__sub_803E1D90(0, 0, 0, 0);
    }
}

void TCameraCtrl__sub_800830A8(void) {  }
void TCameraCtrl__sub_800830AC(void) {  }

extern M2C_UNK lbl_8048E5DC[];

void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5DC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
