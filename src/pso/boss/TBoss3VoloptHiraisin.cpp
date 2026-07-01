#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3VoloptHiraisin__sub_8004181C(void *arg0);
void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1);
void *TBoss3VoloptHiraisin__sub_80041AA0(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
void fn_80156720(void *);

extern void *tl_04;

void *TBoss3VoloptHiraisin__sub_8004181C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TBoss3VoloptHiraisin__sub_80041AA0(o, tl_04, arg0);
    }
    return o;
}

extern M2C_UNK __vt__20TBoss3VoloptHiraisin[];

void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss3VoloptHiraisin;
        fn_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
