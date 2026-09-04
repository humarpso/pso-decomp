#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1);
void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjEnePanarmsAtkColli__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);

void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TObjEnePanarmsAtkColli__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEnePanarmsAtkColli;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
