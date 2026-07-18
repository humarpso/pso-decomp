#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_state__19TAdTrialAgreementGCFPv(void *arg0);
M2C_UNK TAdTrialAgreementGC__sub_80335974();
M2C_UNK TAdTrialAgreementGC__sub_80335A58();

void run_state__19TAdTrialAgreementGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        TAdTrialAgreementGC__sub_80335974();
        break;
    case 1:
        TAdTrialAgreementGC__sub_80335A58();
        break;
    case 2:
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

}
