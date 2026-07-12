#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80047DD4(void *arg0);
void *TBoss3Volopt__sub_80047E20(void *arg0, s16 arg1);
void TBoss3Volopt__sub_800445A4(void *);
void TBoss3Volopt__sub_800450D0(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
void *fn_800480B0(void *, void *, void *);
void fn_800D7C58(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_04;

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl(0x510);
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}

extern M2C_UNK lbl_80484610[];

void *TBoss3Volopt__sub_80047E20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484610;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x474) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474)); }
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); }
        TBoss3Volopt__sub_800450D0(arg0);
        TBoss3Volopt__sub_800445A4(arg0);
        fn_800D7C58((s8 *)arg0 + 0x490, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
