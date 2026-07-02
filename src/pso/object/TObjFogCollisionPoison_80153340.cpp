#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFogCollisionPoison__sub_80153340(void);
M2C_UNK TObjFogCollisionPoison__sub_801532C8(void *, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 fn_80019690();

extern s32 tl_05;
extern s32 lbl_805D53A0;

void TObjFogCollisionPoison__sub_80153340(void) {
    s32 var_r31;
    void *obj;

    if (fn_80019690() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            TObjFogCollisionPoison__sub_801532C8(obj, tl_05, lbl_805D53A0);
        }
    } else {
        var_r31 = 0;
        do {
            obj = __nw__7TObjectFUl(0x30);
            if (obj != NULL) {
                TObjFogCollisionPoison__sub_801532C8(obj, tl_05, var_r31);
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    }
}

}
