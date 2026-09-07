#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801C606C___vt__15TPlyOnCountOver {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C606C___vt__15TPlyOnCountOver __vt__15TPlyOnCountOver;
extern s32 lbl_805D355C;
extern u8 *tl_06;
u8 *__ct__15TPlyOnCountOverFv(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
}

extern "C" {

typedef char RecoveredGlobal_801C606C___vt__15TPlyOnCountOver_size[sizeof(RecoveredGlobal_801C606C___vt__15TPlyOnCountOver) == 0x18 ? 1 : -1];
u8 *__ct__15TPlyOnCountOverFv(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TPlyOnCountOver.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D355C;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    return arg0;
}

}
