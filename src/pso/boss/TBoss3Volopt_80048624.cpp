#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *tl_05;
extern M2C_UNK lbl_80484870[];

void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484870;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    return arg0;
}

}
