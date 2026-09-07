#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802B1654___vt__10TBoss6Tube { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802B1654___vt__10TBoss6Tube_size[sizeof(RecoveredGlobal_802B1654___vt__10TBoss6Tube) == 0x18 ? 1 : -1];

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
void reset_state__10TBoss6TubeFv(void);
extern M2C_UNK __vt__10TBoss6Tube[];
extern s32 lbl_805D3E9C;
u8 *TBoss6Tube__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1);
void reset_state__10TBoss6TubeFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__10TBoss6Tube[];

void *__dt__10TBoss6TubeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss6Tube;
        reset_state__10TBoss6TubeFv();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss6Tube__ct(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802B1654___vt__10TBoss6Tube *)&__vt__10TBoss6Tube).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E9C;
    M2C_FIELD(arg0, u8 **, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    reset_state__10TBoss6TubeFv();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
