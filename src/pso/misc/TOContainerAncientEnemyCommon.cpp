#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOContainerAncientEnemyCommon__ct(void *arg0);
void *__dt__29TOContainerAncientEnemyCommonFv(void *arg0, s16 arg1);
void TOContainerAncientEnemy__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__23TOContainerAncientEnemyFv(void *, int);

extern M2C_UNK __vt__29TOContainerAncientEnemyCommon[];

void *__dt__29TOContainerAncientEnemyCommonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__29TOContainerAncientEnemyCommon;
        __dt__23TOContainerAncientEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__29TOContainerAncientEnemyCommon[];
extern void *lbl_805D2F0C;

void *TOContainerAncientEnemyCommon__ct(void *arg0) {
    TOContainerAncientEnemy__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__29TOContainerAncientEnemyCommon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2F0C;
    return arg0;
}

}
