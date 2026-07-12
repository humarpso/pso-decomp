#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLight__sub_8013486C(void *arg0, s16 arg1);
void *TObjLight__sub_801348C4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void dt2__9TObjLightFPvs(void *, int);

extern M2C_UNK lbl_804A6F78[];

void *TObjLight__sub_8013486C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F78;
        dt2__9TObjLightFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6F90[];

void *TObjLight__sub_801348C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F90;
        dt2__9TObjLightFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
