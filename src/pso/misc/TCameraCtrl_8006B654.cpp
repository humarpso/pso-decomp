#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TCameraCtrl__sub_8006B654(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TCameraCtrl__sub_8006B798(void *, s32, s32, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_07;

void TCameraCtrl__sub_8006B654(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        TCameraCtrl__sub_8006B798(obj, arg0, arg1, arg2, tl_07);
    }
}

}
