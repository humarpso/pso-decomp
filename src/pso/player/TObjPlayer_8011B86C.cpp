#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8011B86C(u32 arg0, s32 arg1, s32 arg2, f32 farg0);
void *TItemShootParticle__ct(void *, u32, s32, s32, f32);
void *__nw__7TObjectFUl(M2C_UNK);

extern f32 lbl_805DAC60;

void *TObjPlayer__sub_8011B86C(u32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    if ((lbl_805DAC60 != farg0) && (arg0 != 0U)) {
        void *obj = __nw__7TObjectFUl(0x64);
        if (obj != NULL) {
            obj = TItemShootParticle__ct(obj, arg0, arg1, arg2, farg0);
        }
        return obj;
    }
    return NULL;
}

}
