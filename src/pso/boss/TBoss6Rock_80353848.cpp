#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_if_active__10TBoss6RockFPv(u8 *arg0);
s32 TBoss6PlotFalz__sub_802AB6CC(void *, f32);
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjFish__sub_802ABE20();
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;

void render_if_active__10TBoss6RockFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (TBoss6PlotFalz__sub_802AB6CC((void *) (arg0 + 0x20), (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - TBoss6Rock__data_805DFF48)) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x20));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x3C)));
        TBoss6PlotFalz__sub_802ABF44((f32) (TBoss6Rock__data_805DFF4C));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x40)));
        TObjFish__sub_802ABE20();
        TObjPlayer__sub_803D9B78();
    }
}

}
