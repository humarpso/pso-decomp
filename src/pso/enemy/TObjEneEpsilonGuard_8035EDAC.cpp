#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilonGuard__sub_8035EDAC(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneEpsilonGuard__sub_8035EA90(void *);
s32 TObjEneEpsilonGuard__sub_8035F950();
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
s32 TPhotonMylla__sub_80154CB4(int);
s16 obj_getField1c(int);

void TObjEneEpsilonGuard__sub_8035EDAC(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x46C) & 0x40)) {
        temp_r3 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x470)));
        if ((temp_r3 == 0) || (TObjEneEpsilonGuard__sub_8035F950() == 1)) {
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x10) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            } else {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (4));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x390) = temp_r3;
            M2C_FIELD(arg0, s16 *, 0x38C) = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x390)));
            TObjEneEpsilon__sub_800B96A4((void *) (arg0));
            TObjEneEpsilonGuard__sub_8035EA90((void *) (arg0));
        }
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) {
            TOTrapAncient01__sub_80226578((int) (0x4003A846), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r0 != 4) && (temp_r0 != 5)) {
            TOTrapAncient01__sub_80226578((int) (0x4003AD43), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

}
