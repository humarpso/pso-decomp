#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3);
void *TBoss3VoloptCore__sub_800407E0(void *arg0);
int TObjPlayer__sub_80040ADC(void);
void *destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1);
M2C_UNK TBoss3VoloptCore__ct(void *, M2C_UNK *);
void *TBoss3VoloptCore__sub_80040A7C(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEnemyCustom__ct();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TObjEnemyCustomFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_8003CFEC(M2C_UNK);

extern void *tl_04;

void *TBoss3VoloptCore__sub_800407E0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3D4);
    if (o != NULL) {
        o = TBoss3VoloptCore__sub_80040A7C(o, tl_04, arg0);
    }
    return o;
}

extern M2C_UNK lbl_80483A10[];

void *destroy__16TBoss3VoloptCoreFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
        TObjEneGibbles__sub_80156720(arg0);
        fn_8003CFEC(0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80483A10[];

void *create_TBoss3VoloptCore(void *arg0, void *arg1, s16 arg2, s16 arg3) {
    TObjEnemyCustom__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483A10;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TBoss3VoloptCore__ct(arg0, lbl_80483A10);
    return arg0;
}

int TObjPlayer__sub_80040ADC(void) { return 0; }

}
