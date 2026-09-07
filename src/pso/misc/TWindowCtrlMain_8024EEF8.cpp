#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u32 lbl_805D6420;
void TWindowCtrlMain__sub_8024EF30(void);
}

extern "C" {

void free_keyboard_soft__15TWindowCtrlMainFv(void);
void free_singleton__19TWindowKeyBoardSoftFUis(void*, int);

extern u32 lbl_805D6420;

void free_keyboard_soft__15TWindowCtrlMainFv(void) {
    if ((u32) lbl_805D6420 != 0U) {
        free_singleton__19TWindowKeyBoardSoftFUis((void*)lbl_805D6420, 1);
        lbl_805D6420 = 0U;
    }
}
void TWindowCtrlMain__sub_8024EF30(void) { (*(int *)&lbl_805D6420) = 0; }

}
