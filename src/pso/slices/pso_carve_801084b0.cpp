#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__15TItemEffBringerFv(void *, u32, s32, s32, f32);
void *__nw__7TObjectFUl(M2C_UNK);
extern f32 lbl_805DAB10;

void *fn_801084B0(u32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    if ((lbl_805DAB10 != farg0) && (arg0 != 0U)) {
        void *obj = __nw__7TObjectFUl(0x90);
        if (obj != NULL) {
            obj = __ct__15TItemEffBringerFv(obj, arg0, arg1, arg2, farg0);
        }
        return obj;
    }
    return NULL;
}

}
