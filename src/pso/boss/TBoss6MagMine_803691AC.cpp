#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1);
void TBoss4Type2__sub_80086C44(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void fn_80156720(void *);

extern M2C_UNK lbl_804F322C[];

void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F322C;
        if (M2C_FIELD(arg0, void **, 0x3B0) != NULL) { TBoss4Type2__sub_80086C44(M2C_FIELD(arg0, void **, 0x3B0)); M2C_FIELD(arg0, M2C_UNK *, 0x3B0) = 0; }
        fn_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
