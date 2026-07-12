#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_80358048(u32, s32, s32, s32);
extern s32 tl_05;

void TObjPlayer__sub_803588F8(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if (arg3 == 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x69);
    }
    if (arg3 == 1) {
        obj = __nw__7TObjectFUl(0x50);
        if (obj != 0U) {
            TObjPlayer__sub_80358048(obj, tl_05, arg2, M2C_FIELD(arg1, s32 *, 0x60));
        }
        obj = __nw__7TObjectFUl(0x50);
        if (obj != 0U) {
            TObjPlayer__sub_80358048(obj, tl_05, arg2, M2C_FIELD(arg1, s32 *, 0x60) - 0x8000);
        }
    }
}

}
