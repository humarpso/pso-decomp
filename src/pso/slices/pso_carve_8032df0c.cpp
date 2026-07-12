#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_8032DE70(void *, s32, u32 *, s32, s32, s32);
extern s32 tl_05;

void fn_8032DF0C(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl(0x90);
        if (obj != NULL) {
            TObjPlayer__sub_8032DE70(obj, tl_05, arg1, arg2, 0, arg0);
        }
    }
}

}
