#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjPlayer__sub_8004433C(void);
void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1);
void *create__15TBoss3VoloptP01FPv(void *arg0);
void fn_80044330(void* p);
void* fn_8004438C(void* p);
void *TBoss3VoloptP01__sub_800442A0(void *, void *, void *);
int TBoss3VoloptP01__sub_800443BC(void*);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__15TBoss3VoloptP01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x418);
    if (o != NULL) {
        o = TBoss3VoloptP01__sub_800442A0(o, tl_04, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TBoss3VoloptP01[];

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss3VoloptP01;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void fn_80044330(void* p) { *(s32*)((char*)p + 0x0) = 0; }
int TObjPlayer__sub_8004433C(void) { return 0; }
void* fn_8004438C(void* p) { TBoss3VoloptP01__sub_800443BC(p); return p; }

}
