#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DE258;
extern const f32 lbl_805DE25C;
f32 TBoss6Tube__sub_802B11D8(s32 arg0);
}

extern "C" {

void reset_state__10TBoss6TubeFv(void);
f32 scale_by_const__10TBoss6TubeFf(f32 farg0);
void spawn_trap__10TBoss6TubeFi(s32 arg0);
void update_timer__10TBoss6TubeFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Tube__sub_802B129C();
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

extern f32 lbl_805DE254;

f32 scale_by_const__10TBoss6TubeFf(f32 farg0) {
    return lbl_805DE254 * farg0;
}

extern s32 TBoss6Tube__data_805D6720;
extern f32 TBoss6Tube__data_805D6724;
extern f32 TBoss6Tube__data_805DE250;

f32 TBoss6Tube__sub_802B11D8(s32 arg0) {
    return lbl_805DE258 - ((f32) (arg0 & 0x7FFFF) / lbl_805DE25C);
}

void reset_state__10TBoss6TubeFv(void) {
    TBoss6Tube__data_805D6720 = 0;
    TBoss6Tube__data_805D6724 = TBoss6Tube__data_805DE250;
}

void spawn_trap__10TBoss6TubeFi(s32 arg0) {
    TBoss6Tube__sub_802B129C();
    TOTrapAncient01__sub_80226578(0x40033520, arg0, 0, 0, 0);
}

void update_timer__10TBoss6TubeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= 0x10E) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        TBoss3Volopt__sub_8022675C(0x4003351F, 0, 0, 0);
        set_shake_preset__11TCameraCtrlFi(2);
    }
}

}
