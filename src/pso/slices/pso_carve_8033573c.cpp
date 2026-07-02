#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1F40(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2048(M2C_UNK, M2C_UNK *);
M2C_UNK TAdTrialAgreementGC__sub_803356F8(s32);
extern M2C_UNK lbl_804C8914[];

s32 TAdTrialAgreementGC__sub_8033573C(s32 arg0) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        return 0;
    }
    TAdTrialAgreementGC__sub_803356F8(arg0);
    if (TAdPlayerLoadGC__sub_801E1F40(0) != 0) {
        return 0;
    }
    TAdTrialAgreementGC__sub_803356F8(arg0);
    temp_r3 = TAdPlayerLoadGC__sub_801E2048(0, lbl_804C8914);
    if ((temp_r3 == 0) || ((u32) (temp_r3 + 0x10000) == 0xFF41U)) {
        return 1;
    }
    return 0;
}

}
