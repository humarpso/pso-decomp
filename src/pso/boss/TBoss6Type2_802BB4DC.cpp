#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
int TBoss6Type2__sub_802BB4DC(void* p);
int TBoss6Type2__sub_802B9F3C(void*, int);

int TBoss6Type2__sub_802BB4DC(void* p) { return TBoss6Type2__sub_802B9F3C(p, 0); }
void update_target__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (temp_r3 != 0) {
        TBoss6Type2__sub_802B9F3C(arg0, temp_r3 + 0x38);
        return;
    }
    TBoss6Type2__sub_802B9F3C(arg0, 0);
}

}
