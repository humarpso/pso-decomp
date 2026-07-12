#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__22TObjEneSlimeTailAttackFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void *dt__22TObjEneSlimeTailAttackFPvs(void *arg0, s16 arg1);
void *TObjControl__ct(void *, s32);
void *TObjEneSlimeTailAttack__ct(void *, void *, s32, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

void *create__22TObjEneSlimeTailAttackFiiii(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj;
    void *ctrl;

    obj = __nw__7TObjectFUl(0x3CC);
    if (obj != 0) {
        ctrl = __nw__7TObjectFUl(0x20);
        if (ctrl != 0) {
            ctrl = TObjControl__ct(ctrl, tl_04);
        }
        obj = TObjEneSlimeTailAttack__ct(obj, ctrl, arg2, arg3, arg4);
    }
    return obj;
}

extern M2C_UNK lbl_8049671C[];

void *dt__22TObjEneSlimeTailAttackFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049671C;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
