#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss3VoloptCore__ct(void *, M2C_UNK *);
M2C_UNK TObjEnemyCustom__ct();
extern M2C_UNK lbl_80483A10[];

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3) {
    TObjEnemyCustom__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TBoss3VoloptCore__ct(arg0, lbl_80483A10);
    return arg0;
}

}
