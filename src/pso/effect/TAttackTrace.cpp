#ifndef PSO_CLASS_PACKAGE
#include "pso/TAttackTrace.h"

TAttackTrace::~TAttackTrace() {}
#else
#if PSO_CLASS_PACKAGE == 0x800D7950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAttackTrace__sub_800D7950(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TAttackTraceFv(void *, int);

extern M2C_UNK lbl_80494968[];

void *TAttackTrace__sub_800D7950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494968;
        __dt__12TAttackTraceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
