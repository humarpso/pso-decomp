#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8015B76C___vt__27TOContainerAncientEnemyRare {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
s32 TCameraCtrl__sub_8006B368();
s32 TOContainerAncientEnemyCommon__ct(int, void *);
s32 __nw__7TObjectFUl(int);
s32 TLobby__sub_8030A7B0();
extern s32 enable_v2_features;
s32 TOContainerAncientEnemyCommon__create(s32 arg0);
u8 * TOContainerAncientEnemy__ct(void *, s32);
extern M2C_UNK __vt__27TOContainerAncientEnemyRare[];
extern s32 lbl_805D2F10;
extern s32 *lbl_805D58EC;
u8 *TOContainerAncientEnemyRare__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void TOContainerAncientEnemyRare__sub_8015B710(void);
void *__dt__27TOContainerAncientEnemyRareFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__23TOContainerAncientEnemyFv(void *, int);

void TOContainerAncientEnemyRare__sub_8015B710(void) {  }

extern M2C_UNK __vt__27TOContainerAncientEnemyRare[];

void *__dt__27TOContainerAncientEnemyRareFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__27TOContainerAncientEnemyRare;
        __dt__23TOContainerAncientEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8015B76C___vt__27TOContainerAncientEnemyRare_size[sizeof(RecoveredGlobal_8015B76C___vt__27TOContainerAncientEnemyRare) == 0x14C ? 1 : -1];
u8 *TOContainerAncientEnemyRare__ct(u8 *arg0, s32 arg1) {
    TOContainerAncientEnemy__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015B76C___vt__27TOContainerAncientEnemyRare *)&__vt__27TOContainerAncientEnemyRare).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F10;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *lbl_805D58EC;
    return arg0;
}

s32 TOContainerAncientEnemyCommon__create(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    if (((s32) enable_v2_features == 1) && (TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 1)) {
        temp_r3 = __nw__7TObjectFUl((int) (0x368));
        var_r0_2 = temp_r3;
        if (var_r0_2 != 0) {
            var_r0_2 = TOContainerAncientEnemyCommon__ct((int) (temp_r3), (void *) (arg0));
        }
        return var_r0_2;
    }
    temp_r3_2 = __nw__7TObjectFUl((int) (0x368));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = TOContainerAncientEnemyCommon__ct((int) (temp_r3_2), (void *) (arg0));
    }
    return var_r0;
}

}
