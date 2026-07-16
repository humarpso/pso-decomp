#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BFA1C(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TBoss6Type2__sub_802B9930(void *);
s16 TBoss6Type2__sub_802BA394(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
void TBoss6Type2__sub_802BFBE4(void* p);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void TBoss6Type2__sub_802BFA1C(u8 *arg0) {
    s32 temp_r0;

    TOTrapAncient01__sub_80226578((int) (0x4006A612), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss3Volopt__sub_8022675C((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        TBoss6Type2__sub_802BD014((void *) (arg0), (int) (2));
    }
}

}

}
