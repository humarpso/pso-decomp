#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss2DeRolLe__sub_80034D04(void *arg0, void *arg1);
void TBoss2DeRolLe__sub_80034E00(void *, int);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);

extern M2C_UNK lbl_804356AC[];

void TBoss2DeRolLe__sub_80034D04(void *arg0, void *arg1) {
    TBoss2DeRolLe__sub_80034E00(arg0, 2);
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_804356AC);
    ((void (*)(void *, void *))TBoss2DeRolLe__sub_80034E00)(arg0, M2C_FIELD(arg0, void **, 0x3C4));
}

}
