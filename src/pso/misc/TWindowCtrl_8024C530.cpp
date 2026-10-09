#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void shutdown__11TWindowCtrlFv(void);
M2C_UNK TWindowMainMenu__sub_8024E3CC();
M2C_UNK fn_8026AC50();
void queue_destruction__7TObjectFv(void*);

extern u32 TWindowCtrl__data_805D63F8;

void shutdown__11TWindowCtrlFv(void) {
    if ((u32) TWindowCtrl__data_805D63F8 != 0U) {
        queue_destruction__7TObjectFv((void*)TWindowCtrl__data_805D63F8);
        TWindowCtrl__data_805D63F8 = 0U;
    }
    fn_8026AC50();
    TWindowMainMenu__sub_8024E3CC();
}

}
