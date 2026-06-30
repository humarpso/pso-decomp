#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__9TDeadSpotFv(void *, s32, s32, s32, s32, s32, f32);
void *__nw__7TObjectFUl(M2C_UNK);
extern void *lbl_805D5228;
extern s32 tl_05;

void fn_800D9460(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    void *obj = __nw__7TObjectFUl(0xC8);
    if (obj != NULL) {
        __ct__9TDeadSpotFv(obj, tl_05, arg0, M2C_FIELD(M2C_FIELD(lbl_805D5228, void **, 0x42C), s32 *, 0xC), arg1, arg2, farg0);
    }
}

}
