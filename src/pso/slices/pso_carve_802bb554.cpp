#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
int TBoss6Type2__sub_802BB4DC(void* p);
int TBoss6Type2__sub_802B9F3C(void*, int);

int TBoss6Type2__sub_802BB554(void) { return 0; }
int TBoss6Type2__sub_802BB5B4(void) { return 0; }
int TBoss6Type2__sub_802BB694(void) { return 0; }
int TBoss6Type2__sub_802BB768(void) { return 0; }
int TBoss6Type2__sub_802BB7C0(void) { return 0; }

}
