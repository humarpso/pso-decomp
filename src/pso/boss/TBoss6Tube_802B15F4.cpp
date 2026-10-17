#include "types.h"
#include "pso/boss/TBoss6Tube.h"

struct RecoveredGlobal_802B1654___vt__10TBoss6Tube { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802B1654___vt__10TBoss6Tube_size[sizeof(RecoveredGlobal_802B1654___vt__10TBoss6Tube) == 0x18 ? 1 : -1];

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__10TBoss6Tube[];
extern s32 lbl_805D3E9C;
u8 *TBoss6Tube__ct(u8 *arg0, u8 *arg1);
void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TBoss6Tube;
        TBoss6Tube::reset_state();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss6Tube__ct(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802B1654___vt__10TBoss6Tube *)&__vt__10TBoss6Tube).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3E9C;
    *(u8 **)((s8 *)arg0 + 0x2C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    TBoss6Tube::reset_state();
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
