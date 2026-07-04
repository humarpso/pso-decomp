#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLockCountCtrl__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TOBoss4Rock__sub_80147AA8(s32);
M2C_UNK __ct__7TObjectFP7TObject();

M2C_UNK memset(s32, M2C_UNK, s32);
extern M2C_UNK __vt__18TItemLockCountCtrl[];
extern s32 lbl_805D2BF8;

void *TItemLockCountCtrl__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;

    __ct__7TObjectFP7TObject();
    temp_r31 = arg2 * 4;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TItemLockCountCtrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BF8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = TOBoss4Rock__sub_80147AA8(temp_r31);
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg4;
    memset(M2C_FIELD(arg0, s32 *, 0x20), 0, temp_r31);
    return arg0;
}

}
