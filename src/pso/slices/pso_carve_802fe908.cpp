#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjBoss8PillerCtrl__ct(void *, f32, void *, s32, s32);
extern void *tl_05;

void fn_802FE908(s32 arg0, s32 arg1, f32 farg0) {
    void *obj = __nw__7TObjectFUl(0x38);
    if (obj != 0) {
        TObjBoss8PillerCtrl__ct(obj, farg0, tl_05, arg0, arg1);
    }
}

}
