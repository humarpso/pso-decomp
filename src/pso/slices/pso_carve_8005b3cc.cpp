#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__7TObjectFP7TObject();
extern void* __vt__13TObjBs4CutAtk[];
extern s32 lbl_805D27E0;

void *__ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, void **, 0x18) = __vt__13TObjBs4CutAtk;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27E0;
    if (arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = -0x1554;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (arg2 << 0xC));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x71C;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xE38;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (arg2 << 0xC));
        M2C_FIELD(arg0, s32 *, 0x20) = -0x71C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

}
