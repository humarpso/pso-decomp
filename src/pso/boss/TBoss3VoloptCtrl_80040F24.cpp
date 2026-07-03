#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3VoloptCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *tl_02;
extern M2C_UNK __vt__16TBoss3VoloptCtrl[];
extern void *lbl_805D2730;

void *TBoss3VoloptCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_02);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBoss3VoloptCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2730;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 3;
    return arg0;
}

}
