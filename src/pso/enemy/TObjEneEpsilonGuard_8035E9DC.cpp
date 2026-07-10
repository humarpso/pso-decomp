#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct EGPad { char pad[0x18]; };
#define V1(n) virtual void vpad##n();
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)
struct EG : EGPad {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
    V1(90) V1(91) V1(92)
    virtual void slot93();
};

extern "C" {

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void handle_event__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TObjEneDD__sub_800BBA04(arg0, 0);
        ((EG *) arg0)->slot93();
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & ~5);
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 1) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 0x10);
        break;
    }
}

}
