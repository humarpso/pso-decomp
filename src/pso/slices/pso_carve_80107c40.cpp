#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemDropSub__ct(void *, s32);
void *__nw__7TObjectFUl(u32);
extern void *lbl_805D5478;
extern s32 tl_05;

void fn_80107C40(s32 arg0) {
    void *obj;
    if (lbl_805D5478 == NULL) {
        obj = __nw__7TObjectFUl(0x20);
        if (obj != NULL) {
            TItemDropSub__ct(obj, tl_05);
        }
    }
    if (lbl_805D5478 != NULL) {
        M2C_FIELD(lbl_805D5478, s32 *, 0x1C) = arg0;
    }
}

}
